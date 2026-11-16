# CẨM NANG TỰ HỌC C++ TỪ A ĐẾN Z -- TẬP 01
## CHUYÊN ĐỀ: NHẬP MÔN, BIẾN, CÁC KIỂU DỮ LIỆU & TOÁN TỬ CĂN BẢN
*(Dành riêng cho học sinh Đội tuyển Olympic Tin học 11 tự học và thực hành tại nhà)*

> **Đơn vị biên soạn:** Trường Quốc tế Á Châu (The Asian International School) -- Tổ Tin học  
> **Nguồn tư liệu gốc:** Giáo trình C++ CodeLearn & LearnCpp (`Section 01, 02, 03`)  
> **Môi trường thực hành:** Code::Blocks 20.03 (MinGW GCC, phím tắt vàng: `Ctrl+Shift+N` tạo file, `Ctrl+S` lưu `.cpp`, `F9` Build & Run)  
> **Phương pháp học:** Đọc kỹ lý thuyết $\rightarrow$ Gõ code mẫu vào Code::Blocks $\rightarrow$ Bấm `F9` quan sát kết quả $\rightarrow$ Tự làm bài tập tự luyện và đối chiếu lời giải.

---

# PHẦN 1: CHƯƠNG TRÌNH C++ ĐẦU TIÊN & CÂU LỆNH `cout` (BÀI 001 -- 010)

## Bài 01: Cấu trúc cơ bản của một chương trình C++
Mọi chương trình C++ chuẩn đều có cấu trúc khung sườn cố định như sau:

```cpp
#include <iostream>

using namespace std;

int main() {
    cout << "Hello World!";
    return 0;
}
```

### Giải thích chi tiết từng dòng:
1. `#include <iostream>`: Khai báo thư viện vào/ra chuẩn (*Input/Output Stream*). Nếu thiếu dòng này, máy tính sẽ không hiểu lệnh `cin` và `cout`.
2. `using namespace std;`: Sử dụng không gian tên chuẩn. Giúp ta viết thẳng `cout`, `cin` thay vì phải viết dài dòng `std::cout`, `std::cin`.
3. `int main()`: Hàm chính của chương trình. Khi bạn bấm `F9` trên Code::Blocks, máy tính **luôn luôn bắt đầu chạy từ dòng đầu tiên bên trong hàm `main()` này**.
4. `{ ... }`: Cặp dấu ngoặc nhọn định nghĩa phần thân của hàm. Mọi câu lệnh cần thực thi đều nằm giữa cặp ngoặc này.
5. `cout << "Hello World!";`: Lệnh xuất dữ liệu ra màn hình. Chữ cần in phải đặt trong dấu ngoặc kép `" "`.
6. `;` (Dấu chấm phẩy): **Quy tắc bắt buộc** trong C++, mọi câu lệnh đơn đều phải kết thúc bằng dấu chấm phẩy `;`.
7. `return 0;`: Báo cho hệ điều hành biết chương trình đã chạy kết thúc thành công tốt đẹp.

---

## Bài 02: Xuất thông tin trên nhiều dòng với `\n`
Để xuống dòng khi in trong C++, ta dùng ký tự đặc biệt `\n` (đặt bên trong dấu nháy kép):

```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "Xin chao!\n";
    cout << "Minh la hoc sinh Asian School.\n";
    cout << "Quyet tam doat giai Olympic Tin hoc 11!\n";
    return 0;
}
```

* **Lưu ý:** Ngoài `\n`, bạn có thể viết `<< endl;` nhưng trong lập trình thi đấu, `\n` có tốc độ chạy nhanh hơn `endl` gấp 10 lần!

---

## Bài 03: In các phép tính số học trực tiếp
Lệnh `cout` có thể tính toán và in ngay kết quả của các phép tính:

```cpp
#include <iostream>
using namespace std;

int main() {
    cout << 123 + 456 << "\n"; // In ra: 579
    cout << 1000 - 325 << "\n"; // In ra: 675
    cout << 25 * 4 << "\n";     // In ra: 100
    cout << 100 / 4 << "\n";    // In ra: 25
    return 0;
}
```
* **Quy tắc:** Muốn in chữ thì đặt trong `" "`. Muốn máy tính tính toán kết quả số thì **không** dùng dấu nháy kép.
  * `cout << "2 + 3";` $\implies$ Màn hình in ra dòng chữ: `2 + 3`
  * `cout << 2 + 3;` $\implies$ Màn hình in ra kết quả số: `5`

---

## Bài tập tự luyện Phần 1 (Làm trực tiếp trên Code::Blocks):
* **Bài 1.1:** Viết chương trình in ra thông tin của bạn gồm 3 dòng: Họ tên, Lớp, Trường.
* **Bài 1.2:** Viết chương trình in ra kết quả của phép tính: $2468 \times 1357$.
* **Bài 1.3:** Viết chương trình in ra hình chữ nhật rỗng kích thước $3 \times 5$ bằng các dấu sao:
  ```text
  *****
  *   *
  *****
  ```

---

# PHẦN 2: BIẾN & CÁC KIỂU DỮ LIỆU CƠ SỞ (BÀI 011 -- 022)

## 2.1. Biến (Variable) là gì?
* Hãy tưởng tượng biến như **một chiếc hộp có dán nhãn** đặt trong bộ nhớ RAM của máy tính.
* Ta có thể cất giữ một giá trị vào trong hộp, và sau đó lấy ra sử dụng hoặc thay đổi giá trị mới vào chiếc hộp đó.

## 2.2. Bốn kiểu dữ liệu cơ sở phải nhớ nằm lòng

| Kiểu dữ liệu | Ý nghĩa | Kích thước | Phạm vi lưu trữ an toàn | Ví dụ khai báo |
| :--- | :--- | :---: | :--- | :--- |
| `int` | Số nguyên thông thường | 4 bytes | Tối đa $\approx 2 \times 10^9$ (2 tỷ) | `int tuoi = 16;` |
| `long long` | Số nguyên rất lớn | 8 bytes | Tối đa $\approx 9 \times 10^{18}$ (9 tỷ tỷ) | `long long tien = 5000000000LL;` |
| `double` | Số thực (có dấu phẩy thập phân) | 8 bytes | Chính xác đến 15 chữ số thập phân | `double diem = 9.75;` |
| `char` | Một ký tự đơn lẻ | 1 byte | Đặt trong dấu nháy đơn `' '` | `char hang = 'A';` |
| `bool` | Giá trị logic đúng / sai | 1 byte | Chỉ có 2 giá trị: `true` (1) hoặc `false` (0) | `bool is_pass = true;` |
| `string` | Chuỗi ký tự (văn bản) | Co giãn | Đặt trong dấu nháy kép `" "` | `string ten = "Gia Huy";` |

## 2.3. Cú pháp khai báo và sử dụng biến:
```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    // Khai bao bien va khoi tao gia tri
    int a = 15;
    int b = 7;
    int tong = a + b;
    int hieu = a - b;

    cout << "Tong = " << tong << "\n"; // In ra: Tong = 22
    cout << "Hieu = " << hieu << "\n"; // In ra: Hieu = 8

    // Kieu so thuc
    double ban_kinh = 3.5;
    double dien_tich = 3.14159 * ban_kinh * ban_kinh;
    cout << "Dien tich hinh tron: " << dien_tich << "\n";

    // Kieu ky tu: ky tu co the cong tru voi so nguyen dua theo ma ASCII!
    char c = 'A';
    cout << "Ky tu goc: " << c << "\n";
    cout << "Ky tu tiep theo: " << (char)(c + 1) << "\n"; // In ra: B

    return 0;
}
```

---

## Bài tập tự luyện Phần 2:
* **Bài 2.1:** Khai báo 2 biến nguyên `a = 25`, `b = 4`. Tính và in ra: Tổng, Hiệu, Tích của 2 số.
* **Bài 2.2:** Cho chiều dài hình chữ nhật `d = 12.5` và chiều rộng `r = 6.4`. Khai báo kiểu `double` để tính chu vi và diện tích hình chữ nhật.
* **Bài 2.3:** Khai báo một biến ký tự `char ch = 'd'`. Hãy in ra ký tự hoa tương ứng của nó là `'D'` (Gợi ý: trong bảng mã ASCII, ký tự thường và ký tự hoa cách nhau đúng 32 đơn vị: `char hoa = ch - 32;`).

---

# PHẦN 3: NHẬP DỮ LIỆU VỚI `cin` & CÁC TOÁN TỬ SỐ HỌC (BÀI 023 -- 032)

## 3.1. Nhập dữ liệu từ bàn phím với `cin >>`
Nếu `cout <<` là **đẩy dữ liệu ra màn hình**, thì `cin >>` là **hút dữ liệu từ bàn phím vào biến**:

```cpp
#include <iostream>
using namespace std;

int main() {
    int a, b;
    // Chuong trinh se tam dung lai cho den khi nguoi dung go 2 so tu ban phim
    cin >> a >> b; 
    cout << "Tong 2 so vua nhap la: " << a + b << "\n";
    return 0;
}
```

## 3.2. Sự khác biệt sống còn giữa `/` và `%`
Đây là phần học sinh chuyển từ Python sang dễ bị nhầm nhất:
1. **Phép chia `/` giữa 2 số nguyên là phép chia lấy phần nguyên (bỏ phần thập phân):**
   * Trong Python: `5 / 2 = 2.5`
   * Trong C++: `5 / 2 = 2` (Vì cả 5 và 2 đều là `int` nên kết quả bị ép về `int`!)
   * Muốn C++ chia ra số thực `2.5`, ít nhất một trong hai số phải là số thực: `5.0 / 2` hoặc `1.0 * a / b`.
2. **Phép chia lấy phần dư `%` (Toán tử Modulo):**
   * `7 % 3 = 1` (Vì 7 chia 3 được 2 dư 1).
   * `10 % 2 = 0` (Dấu hiệu nhận biết số chẵn: chia 2 dư 0).
   * `2026 % 10 = 6` (Dấu hiệu lấy ra chữ số hàng đơn vị!).

```cpp
#include <iostream>
using namespace std;

int main() {
    int a = 17, b = 5;
    cout << "Chia nguyen a / b = " << a / b << "\n"; // In ra: 3
    cout << "Chia du a % b = " << a % b << "\n";     // In ra: 2
    cout << "Chia thuc = " << (double)a / b << "\n"; // In ra: 3.4
    return 0;
}
```

## 3.3. Kỹ thuật hoán đổi giá trị của 2 biến (Swap)
Giả sử ta có 2 chiếc cốc: Cốc A đựng nước cam, Cốc B đựng nước táo. Muốn đổi nước của 2 cốc cho nhau, ta cần một **chiếc cốc phụ tạm thời (biến `temp`)**:

```cpp
int a = 10, b = 20;
// Muon doi cho a va b:
int temp = a; // Buoc 1: Cat gia tri cua a vao bien tam
a = b;        // Buoc 2: Chep gia tri cua b vao a
b = temp;     // Buoc 3: Lay gia tri trong bien tam tra ve cho b
// Ket qua: a = 20, b = 10
```

---

## Bài tập tự luyện Phần 3:
* **Bài 3.1:** Nhập vào từ bàn phím số giây nguyên dương $T$. Hãy đổi $T$ sang định dạng `Giờ : Phút : Giây`.
  * *Gợi ý:* `gio = T / 3600; phut = (T % 3600) / 60; giay = T % 60;`
* **Bài 3.2:** Nhập vào một số nguyên dương $N$ có đúng 2 chữ số. Hãy in ra tổng 2 chữ số của số đó (Ví dụ: nhập 47 in ra $4 + 7 = 11$).
  * *Gợi ý:* `chu_so_hang_chuc = N / 10; chu_so_hang_don_vi = N % 10;`
* **Bài 3.3:** Nhập vào 2 số nguyên $a$ và $b$. Hoán đổi giá trị 2 số rồi in ra màn hình.
