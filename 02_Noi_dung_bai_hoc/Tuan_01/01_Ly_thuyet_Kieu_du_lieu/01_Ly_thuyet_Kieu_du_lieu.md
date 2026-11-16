# CHUYÊN ĐỀ 01: KHÁI NIỆM BIẾN, Ô NHỚ VÀ HỆ THỐNG KIỂU DỮ LIỆU TRONG C++
**Đội tuyển Học sinh Giỏi Tin học 11 — Trường Quốc tế Á Châu (Asian School)**

---

## 1. BẢN CHẤT CỦA BIẾN VÀ BỘ NHỚ MÁY TÍNH (RAM)

### 1.1. Bộ nhớ RAM và Ô nhớ
* **RAM (Random Access Memory):** Là bộ nhớ tạm thời của máy tính, có thể hình dung như một dãy phố dài vô tận gồm hàng tỷ "ngăn tủ" hay "ô nhớ".
* **Đơn vị lưu trữ cơ bản:**
  * **Bit (Binary digit):** Đơn vị nhỏ nhất, chỉ mang giá trị `0` hoặc `1` (tương ứng tắt/mở công tắc điện).
  * **Byte:** $1 \text{ Byte} = 8 \text{ Bit}$. Mỗi ô nhớ trong RAM lưu trữ đúng **1 Byte** dữ liệu và mang một **địa chỉ ô nhớ** duy nhất (ví dụ: `0x7ffee4b2`).

### 1.2. Biến (Variable) là gì?
* Trong lập trình, chúng ta không thể nhớ các địa chỉ ô nhớ phức tạp như `0x7ffee4b2`. Do đó, C++ cho phép ta đặt một cái tên thân thiện đại diện cho ô nhớ đó — gọi là **Biến**.
* **Đặc tính:** Giá trị bên trong biến có thể thay đổi (biến thiên) trong quá trình chương trình chạy.
* **Cú pháp khai báo biến chuẩn:**
  ```cpp
  <Kiểu_dữ_liệu> <Tên_biến> = <Giá_trị_khởi_tạo>;
  ```
* **Quy tắc vàng sống còn:** Luôn gán giá trị khởi tạo ban đầu cho biến ngay khi khai báo:
  * Biến tính tổng: `long long tong = 0;`
  * Biến tính tích: `long long tich = 1;`
  * Biến đếm: `int dem = 0;`  
  *(Nếu không khởi tạo, biến sẽ nhận một "giá trị rác" ngẫu nhiên đang có sẵn trong ô nhớ RAM, dẫn đến kết quả sai hoàn toàn!).*

---

## 2. BẢNG TRA CỨU HỆ THỐNG KIỂU DỮ LIỆU CĂN BẢN TRONG C++

| Kiểu dữ liệu | Ý nghĩa | Kích thước | Miền giá trị | Ứng dụng thực tế trong thi Olympic |
| :--- | :--- | :---: | :--- | :--- |
| **`bool`** | Giá trị logic | 1 Byte | `true` (1) hoặc `false` (0) | Đánh dấu cờ hiệu, kiểm tra điều kiện |
| **`char`** | Ký tự đơn | 1 Byte | Bảng mã ASCII (256 ký tự) | Xử lý từng chữ cái, mã ký tự |
| **`int`** | Số nguyên tiêu chuẩn | 4 Byte | $-2 \cdot 10^9$ đến $2 \cdot 10^9$ (chính xác: $[-2^{31}, 2^{31}-1]$) | Dùng cho biến đếm vòng lặp, chỉ số mảng, số nhỏ $\le 10^9$ |
| **`long long`** | Số nguyên lớn 64-bit | **8 Byte** | **$-9 \cdot 10^{18}$ đến $9 \cdot 10^{18}$** (chính xác: $[-2^{63}, 2^{63}-1]$) | **Bắt buộc dùng cho tổng dãy số, tích, diện tích** |
| **`float`** | Số thực đơn | 4 Byte | Chính xác 6--7 chữ số | Không nên dùng trong thi đấu (rất dễ sai số) |
| **`double`** | Số thực kép | **8 Byte** | Chính xác 15--16 chữ số | **Chuẩn 100% cho số thực trong thi đấu Olympic** |

---

## 3. BẪY TỬ HUYỆT TRONG THI ĐẤU: TRÀN SỐ NGUYÊN (INTEGER OVERFLOW)

### 3.1. Hiện tượng Tràn số nguyên
* Kiểu `int` chỉ chứa tối đa đến $+2\,147\,483\,647$ ($\approx 2 \cdot 10^9$).
* Nếu bạn lấy $2 \cdot 10^9 + 10^9 = 3 \cdot 10^9$ (vượt quá giới hạn của `int`), máy tính sẽ bị "quay vòng" và biến thành **số âm kỳ lạ**: `-1294967296`.
* **Cực kỳ nguy hiểm:** Trình biên dịch **không hề báo lỗi**! Chương trình vẫn chạy bình thường nhưng kết quả chấm thi sẽ bị **0 điểm toàn bộ**!

### 3.2. Bẫy ép kiểu khi nhân hai số `int`
Xem xét đoạn code sau:
```cpp
int a = 1000000; // 10^6
int b = 1000000; // 10^6
long long res = a * b; // VẪN BỊ TRÀN SỐ VÀ RA KẾT QUẢ SAI!
```
* **Tại sao sai?** Dù biến `res` là `long long`, nhưng ở vế phải máy tính tính `a * b` (kiểu `int` $\times$ `int` $\to$ ra kết quả `int` bị tràn số âm), sau đó mới gán số âm đó vào `res`.
* **Cách khắc phục chuẩn thi đấu:**
  ```cpp
  long long res = 1LL * a * b; // Thêm 1LL để ép máy tính nhân kiểu 64-bit!
  ```
  *(Số `1LL` nghĩa là số `1` có kiểu `long long`).*

---

## 4. PHÉP TOÁN SỐ HỌC & BẪY PHÉP CHIA TRONG C++

### 4.1. Bẫy phép chia lấy phần nguyên (`/`)
* Khi chia hai số nguyên: `7 / 2` kết quả trong C++ là **`3`** (máy vứt bỏ toàn bộ phần thập phân `.5` vì cả 7 và 2 đều là số nguyên!).
* **Muốn ra số thực:** Ít nhất một trong hai toán hạng phải là số thực:
  * `7.0 / 2` $\implies 3.5$
  * `(double)a / b` $\implies$ Ép biến `a` thành số thực trước khi chia.

### 4.2. Phép chia lấy phần dư (`%`)
* Chỉ áp dụng cho số nguyên:
  * $17 \div 5 = 3$ dư $2 \implies `17 % 5 = 2`$.
* **3 ứng dụng kinh điển của phép `%` và `/` trong lập trình:**
  1. **Kiểm tra chẵn/lẻ:** `n % 2 == 0` (chẵn), `n % 2 != 0` (lẻ).
  2. **Tách chữ số hàng đơn vị:**
     * `n % 10`: Lấy chữ số tận cùng của $n$. Ví dụ: `158 % 10 = 8`.
     * `n / 10`: Bỏ đi chữ số tận cùng của $n$. Ví dụ: `158 / 10 = 15`.
  3. **Quy đổi thời gian (Giây $\to$ Giờ, Phút, Giây):**
     * Giờ: `T / 3600`
     * Phút: `(T % 3600) / 60`
     * Giây: `T % 60`

---

## 5. KIỂU SỐ THỰC (`double`) & ĐỊNH DẠNG IN THẬP PHÂN

Khi đề bài yêu cầu *"in kết quả làm tròn đúng 2 chữ số thập phân"*, bắt buộc sử dụng thư viện `<iomanip>`:

```cpp
#include <iostream>
#include <iomanip> // Bắt buộc để dùng fixed và setprecision

using namespace std;

int main() {
    double r = 5.5;
    double chu_vi = 2 * 3.14159 * r;

    // In làm tròn đúng 2 chữ số thập phân
    cout << fixed << setprecision(2) << chu_vi << "\n";
    return 0;
}
```

---

## 6. KIỂU KÝ TỰ (`char`) & BẢNG MÃ ASCII

* Ký tự đặt trong cặp dấu nháy đơn `'...'` (ví dụ: `'A'`, `'a'`, `'0'`).
* Mỗi ký tự bản chất là một số nguyên từ 0 đến 255:
  * Chữ số `'0'` có mã ASCII là **48**, `'1'` là 49... Muốn đổi ký tự số thành số nguyên: `int so = c - '0';`
  * Chữ cái `'A'` có mã **65**, `'a'` có mã **97** (chữ thường luôn lớn hơn chữ hoa đúng 32 đơn vị: `'a' - 'A' = 32`).

---

## 7. QUY TẮC NẰM LÒNG KHI CHỌN KIỂU DỮ LIỆU TRONG OLYMPIC

1. Khi đề bài cho số $\le 10^9$ nhưng có phép **cộng dồn** hoặc **phép nhân** $\implies$ **Bắt buộc dùng `long long`**.
2. Các phép tính liên quan đến số thực (trung bình cộng, diện tích hình tròn, tọa độ) $\implies$ **Luôn dùng `double`**, không dùng `float`.
3. Khi nghi ngờ giá trị có thể vượt quá $2 \cdot 10^9$ $\implies$ **Chọn ngay `long long` để bảo đảm an toàn 100% điểm số!**
