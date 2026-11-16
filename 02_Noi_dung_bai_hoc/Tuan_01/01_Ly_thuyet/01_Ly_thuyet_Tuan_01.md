# BÀI GIẢNG TUẦN 01: NHẬP MÔN C++ & TƯ DUY LẬP TRÌNH CĂN BẢN
## DÀNH CHO HỌC SINH BẮT ĐẦU HỌC LẬP TRÌNH THI ĐẤU (COMPETITIVE PROGRAMMING)
### TRƯỜNG QUỐC TẾ Á CHÂU -- ĐỘI TUYỂN OLYMPIC TIN HỌC 11 (2026 -- 2027)

> **Phương châm giảng dạy:** *"Không giả định học sinh đã biết trước -- Mọi khái niệm đều được giải thích tường minh từ bản chất phần cứng và tư duy logic -- Sai cú pháp là bước đệm tự nhiên để trưởng thành."*

---

## MỤC TIÊU BÀI HỌC CỐT LÕI (90 PHÚT)
1. **Về định hướng:** Nắm chắc thông tin kỳ thi Olympic 11 TP.HCM, thể lệ, cơ cấu giải thưởng và phổ điểm mục tiêu.
2. **Về tư duy lập trình:**
   * Hiểu bản chất biến nhớ (RAM), tại sao C++ bắt buộc khai báo kiểu dữ liệu.
   * Làm chủ các kiểu dữ liệu cơ bản: `int`, `long long`, `double`, `char`, `bool`.
   * Khắc phục triệt để bẫy tràn số nguyên (`overflow`) và bẫy phép chia nguyên (`/` vs `%`).
3. **Về cú pháp C++:**
   * Cấu trúc chương trình C++ chuẩn thi đấu.
   * Lệnh nhập/xuất `cin`, `cout`, kỹ thuật tăng tốc I/O.
   * Cấu trúc rẽ nhánh `if / else` và logic điều kiện (`&&`, `||`, `!`).
   * Vòng lặp `for` cơ bản kết hợp kỹ thuật Dry Run (chạy từng bước bằng tay).
4. **Về kỹ năng phòng thi:**
   * Sử dụng thành thạo IDE **Code::Blocks** (phím tắt `F9`, tạo file, lưu file).
   * Cấu hình mở file `.INP` và ghi file `.OUT` chuẩn phòng thi HSG.

---

## PHẦN 1: THÔNG TIN KỲ THI, TIÊU CHÍ GIẢI THƯỞNG & QUY ĐỊNH ĐỘI TUYỂN

### 1.1. Thông tin kỳ thi Olympic Tin học 11 TP.HCM
* **Thời gian tổ chức dự kiến:** Khoảng **đầu tháng 04/2027**.
* **Thời gian làm bài:** **120 phút** (2 tiếng).
* **Cấu trúc đề thi:** Gồm **3 bài toán**, thang điểm **20.0 điểm** (phân bổ thường là 6đ -- 7đ -- 7đ).
* **Quy cách nộp bài:**
  * Thí sinh nộp file mã nguồn `.cpp`.
  * Chương trình tự động đọc tệp `<TENBAI>.INP` và xuất tệp `<TENBAI>.OUT`.
  * Hệ thống máy chấm tự động (*Themis / CMS*) phân chia thành nhiều **Subtask (ràng buộc kiểm thử)**. Thuật toán đơn giản (vét cạn) vẫn ăn trọn từ 30% đến 60% số điểm của bài!

### 1.2. Phổ điểm chuẩn & Cơ cấu giải thưởng dự kiến (Thang 20 điểm)
Tỷ lệ trao giải chiếm khoảng **50% -- 60%** tổng số thí sinh dự thi:

| Hạng giải thưởng | Điểm chuẩn dự kiến | Chiến lược làm bài trong phòng thi |
| :--- | :---: | :--- |
| **Huy chương Vàng** (Giải Nhất) | **16.0 -- 20.0 đ** | Trọn vẹn Bài 1 (6đ) + Trọn vẹn Bài 2 (7đ) + Ăn 3--4đ subtask Bài 3 |
| **Huy chương Bạc** (Giải Nhì) | **13.0 -- 15.5 đ** | Trọn vẹn Bài 1 (6đ) + Ăn 5--6đ Bài 2 + Ăn 1--2đ subtask Bài 3 |
| **Huy chương Đồng** (Giải Ba) | **10.0 -- 12.5 đ** | Trọn vẹn Bài 1 (6đ) + Ăn 4--5đ subtask cơ bản Bài 2 |
| **Giải Khuyến khích** | **8.0 -- 9.5 đ** | Trọn vẹn Bài 1 (6đ) + Ăn 2--3đ subtask vét cạn Bài 2 |

> 🎯 **Mục tiêu Đội tuyển Asian School:** Vùng điểm **12.0 -- 15.0 điểm** là mục tiêu chiến lược để học sinh nắm chắc **Giải Ba / Giải Nhì cấp Thành phố**!

### 1.3. Quy định học tập & Thái độ của học sinh đội tuyển
* **Học trực tiếp:** 01 buổi/tuần (90 phút) học lý thuyết trọng tâm và sửa bài tập thực chiến.
* **Tự học ở nhà:** Tự giác hoàn thành phiếu bài tập được giao; kiên trì tự gõ code trên máy tính.
* **Quy tắc 3 bước khi gặp bài khó:**
  1. *Bước 1:* Dành 15 -- 20 phút vẽ nháp bằng tay với các ví dụ nhỏ.
  2. *Bước 2:* Viết code "vét cạn" (thuật toán đơn giản nhất mà mình nghĩ ra) để lấy điểm subtask đầu tiên.
  3. *Bước 3:* Đặt câu hỏi trao đổi với thầy cô và bạn bè để tìm thuật toán tối ưu.

---

## PHẦN 2: VÌ SAO CHỌN C++ TRONG TIN HỌC THI ĐẤU?

| Tiêu chí so sánh | C++ (Ngôn ngữ biên dịch) | Python (Ngôn ngữ thông dịch) | Ý nghĩa trong phòng thi |
| :--- | :--- | :--- | :--- |
| **Tốc độ thực thi** | **Rất nhanh** (Biên dịch trực tiếp ra mã nhị phân cho CPU). | **Chậm hơn 10 - 100 lần** (Phải thông qua máy ảo Python dịch từng dòng). | Trong 1 giây quy định, C++ tính được $\approx 10^8$ phép tính (Accepted). Python rất dễ quá thời gian (**TLE - 0 điểm**). |
| **Thư viện chuẩn (STL)** | Cực mạnh, được tối ưu mã máy ở mức tối đa (`vector`, `algorithm`, `sort`). | Đầy đủ nhưng tốc độ khi thi đấu khó đáp ứng giới hạn 1s. | Giúp viết code ngắn và an toàn trong phòng thi. |
| **Chuẩn mực đề thi** | Đề thi HSG và Olympic toàn quốc đều lấy C++ làm thước đo chuẩn cho thời gian chạy. | Thường không được nhân thêm thời gian chạy. | Học C++ giúp học sinh yên tâm không bao giờ bị thiệt thòi về thời gian. |

---

## PHẦN 3: HƯỚNG DẪN THIẾT LẬP MÔI TRƯỜNG CODE::BLOCKS

> **Code::Blocks** là IDE tiêu chuẩn, ổn định và được cài đặt mặc định trên toàn bộ máy tính phòng thi HSG của Sở GD&ĐT TP.HCM.

### 3.1. Các bước cài đặt và cấu hình
1. **Tải bộ cài:** Truy cập `https://www.codeblocks.org/downloads/binaries/` $\to$ Tải bản **`codeblocks-20.03mingw-setup.exe`** (bản có chữ `mingw` đã bao gồm trình biên dịch GNU GCC/G++).
2. **Cài đặt:** Chạy file và chọn mặc định (**Next** $\to$ **Install**). Khi mở lên lần đầu, chọn **GNU GCC Compiler** $\to$ **Set as default** $\to$ **OK**.
3. **Cấu hình cờ C++17:**
   * Menu: **Settings** $\to$ **Compiler...**
   * Tại tab **Compiler Flags**, tích chọn:
     * `Have g++ follow the C++17 ISO C++ language standard [-std=c++17]`
     * `Optimize generated code (for speed) [-O2]`
   * Bấm **OK**.

### 3.2. Ba phím tắt "vàng" cần ghi nhớ
* **`Ctrl + Shift + N`**: Tạo file mã nguồn mới (Empty file).
* **`Ctrl + S`**: Lưu file (luôn lưu đuôi `.cpp`, ví dụ `bai1.cpp`).
* **`F9`**: **Build and Run** (Biên dịch và Chạy chương trình ngay lập tức).
* **`Ctrl + Lăn chuột giữa`**: Phóng to hoặc thu nhỏ cỡ chữ trong khung code.

---

## PHẦN 4: BẢN CHẤT MÁY TÍNH & BIẾN NHỚ TỪ CON SỐ 0

### 4.1. Máy tính lưu trữ dữ liệu như thế nào?
* Máy tính hoạt động nhờ bộ nhớ tạm thời gọi là **RAM**. RAM gồm hàng tỷ ô nhớ nhỏ tí hon, mỗi ô nhớ lưu các bit `0` và `1`.
* Khi bạn cần lưu trữ số tuổi của một người, số kẹo trong túi, hay điểm trung bình môn học, bạn phải xin máy tính cấp phát một vùng nhớ trong RAM.
* Vùng nhớ được đặt tên đó trong lập trình được gọi là **BIẾN (Variable)**.

> 📦 **Hình ảnh ẩn dụ trực quan:**  
> Hãy tưởng tượng một **Biến** giống như một **Chiếc hộp**:
> 1. **Kiểu dữ liệu:** Là hình dáng/kích thước chiếc hộp (hộp đựng số nguyên, hộp đựng chữ cái, hộp đựng số thập phân).
> 2. **Tên biến:** Là tấm nhãn dán bên ngoài hộp để nhận biết (ví dụ: `tuoi`, `tong`, `diem`).
> 3. **Giá trị của biến:** Là đồ vật bạn bỏ vào bên trong chiếc hộp (ví dụ: `15`, `100`, `9.5`).

### 4.2. Khai báo biến & Quy tắc gán giá trị
Trong Python, bạn chỉ cần viết `x = 5`. Máy tính tự đoán kiểu.  
Nhưng trong **C++**, bạn **BẮT BUỘC** phải nói rõ cho máy tính biết chiếc hộp này thuộc loại gì trước khi dùng:

```cpp
kieu_du_lieu ten_bien;             // Khai bao hop chua
kieu_du_lieu ten_bien = gia_tri;   // Khai bao hop va bo luon do vat vao (Khoi tao)
```

**Ví dụ:**
```cpp
int tuoi = 16;         // Hop 'tuoi' chua so nguyen 16
double diem = 8.5;     // Hop 'diem' chua so thap phan 8.5
char hang = 'A';       // Hop 'hang' chua 1 ky tu 'A'
bool da_nop_bai = true;// Hop 'da_nop_bai' chua gia tri dung/sai
```

### 4.3. Bẫy "Giá trị rác" (Garbage Value) -- Lỗi kinh điển của người mới
Trong C++, nếu bạn chỉ khai báo `int tong;` mà không gán giá trị ban đầu, chiếc hộp đó sẽ chứa một con số rác ngẫu nhiên có sẵn trong RAM (ví dụ: `-858993460` hoặc `32767`).  
Nếu sau đó bạn viết `tong = tong + 5;`, kết quả sẽ sai hoàn toàn!

> ⚠️ **QUY TẮC VÀNG:**  
> Luôn luôn khởi tạo giá trị ban đầu cho các biến dùng để tính tổng hoặc đếm:
> ```cpp
> long long tong = 0; // Luon khoi tao bang 0
> int dem = 0;        // Luon khoi tao bang 0
> ```

---

## PHẦN 5: CÁC KIỂU DỮ LIỆU CỐT LÕI & BẪY TRÀN SỐ NGUYÊN

### 5.1. Bảng kiểu dữ liệu thường dùng trong thi đấu

| Kiểu dữ liệu | Bộ nhớ | Khoảng giá trị lưu trữ | Ví dụ thực tế | Khi nào bắt buộc sử dụng? |
| :--- | :---: | :--- | :--- | :--- |
| **`int`** | 4 Bytes (32 bit) | $-2 \cdot 10^9 \to 2 \cdot 10^9$ | `int n = 100000;` | Số lượng phần tử $N$, chỉ số vòng lặp $i$. |
| **`long long`** | 8 Bytes (64 bit) | $-9 \cdot 10^{18} \to 9 \cdot 10^{18}$ | `long long tong = 0;` | **Bắt buộc cho tổng, tích**, diện tích, bài toán số lớn. |
| **`double`** | 8 Bytes | Số thực độ chính xác cao | `double pi = 3.14159;` | Điểm số, khoảng cách hình học, căn bậc hai. |
| **`char`** | 1 Byte | 1 ký tự trong dấu nháy đơn `' '` | `char c = 'Z';` | Đọc từng ký tự, bảng chữ cái. |
| **`bool`** | 1 Byte | `true` (1) hoặc `false` (0) | `bool ok = false;` | Đánh dấu trạng thái, cờ hiệu kiểm tra. |

### 5.2. Mổ xẻ bẫy tràn số nguyên (Integer Overflow)
Học sinh viết code tính diện tích hình chữ nhật:
```cpp
int a = 1000000; // 10^6
int b = 1000000; // 10^6
long long s = a * b; // TAI SAO S LAI RA SO AM SAI?
```
* **Bản chất lỗi:**  
  1. Máy tính thấy cả `a` và `b` đều là kiểu `int`.
  2. Nó thực hiện phép nhân `a * b` trong bộ nhớ tạm kiểu `int` (tối đa chỉ chứa được $2 \cdot 10^9$).
  3. Giá trị thực tế $10^{12} > 2 \cdot 10^9 \implies$ Phép tính bị tràn và biến thành một số âm kỳ lạ.
  4. Sau khi đã bị tràn số thành số âm rồi, nó mới gán sang biến `s`!
* **Cách khắc phục chuẩn:** Ép kiểu bằng cách nhân với hằng số `1LL` (số 1 kiểu `long long`):
```cpp
long long s = 1LL * a * b; // 1LL se nang toan bo phep nhan len kieu 64-bit!
```

---

## PHẦN 6: CÁC TOÁN TỬ SỐ HỌC & BẪY CHIA NGUYÊN

### 6.1. Năm phép toán cơ bản
* Cộng `+`, Trừ `-`, Nhân `*`.
* **Phép chia nguyên (`/`):**
  * Trong toán: $\frac{7}{2} = 3.5$.
  * Trong C++: `7 / 2 = 3` (Chỉ lấy phần nguyên, vứt bỏ toàn bộ phần thập phân vì cả 7 và 2 đều là số nguyên!).
  * **Muốn ra số thực:** Ít nhất một trong hai số phải có dấu chấm thập phân: `7.0 / 2 = 3.5` hoặc `(double)a / b`.
* **Phép chia lấy phần dư (`%`):**
  * Chỉ áp dụng cho số nguyên.
  * $7 \div 2 = 3$ dư $1 \implies `7 % 2 = 1`.
  * $15 \div 4 = 3$ dư $3 \implies `15 % 4 = 3`.

### 6.2. Ứng dụng "kinh điển" của phép `%` và `/` trong lập trình
1. **Kiểm tra chẵn / lẻ:**
   * Một số $n$ là chẵn nếu chia hết cho 2: `if (n % 2 == 0)`.
   * Một số $n$ là lẻ nếu chia 2 dư khác 0: `if (n % 2 != 0)`.
2. **Kỹ thuật tách chữ số hàng đơn vị:**
   * `n % 10`: Cho ta **chữ số cuối cùng** của $n$. Ví dụ: `125 % 10 = 5`.
   * `n / 10`: **Xóa bỏ chữ số cuối cùng** của $n$. Ví dụ: `125 / 10 = 12`.

### 6.3. Toán tử tăng / giảm và phép gán kết hợp
* `x = x + 1` viết gọn là: `x++` hoặc `++x`.
* `x = x - 1` viết gọn là: `x--` hoặc `--x`.
* `tong = tong + a` viết gọn là: `tong += a;`.
* `tich = tich * a` viết gọn là: `tich *= a;`.

---

## PHẦN 7: NHẬP VÀ XUẤT DỮ LIỆU CHUẨN MỰC TRONG C++

### 7.1. Cặp lệnh `cin` và `cout`
* **Xuất dữ liệu (`cout <<`):**
  * Dấu mũi tên `<<` chỉ hướng đẩy dữ liệu ra màn hình.
  * In chuỗi đặt trong ngoặc kép `"..."`, in giá trị biến thì viết thẳng tên biến.
  * Xuống dòng: Dùng `\n` thay vì `endl` (nhanh hơn gấp nhiều lần).
  * Ví dụ: `cout << "Dap an la: " << res << "\n";`
* **Nhập dữ liệu (`cin >>`):**
  * Dấu mũi tên `>>` chỉ hướng hút dữ liệu từ bàn phím nạp vào biến.
  * Tự động bỏ qua khoảng trắng và dấu xuống dòng.
  * Nhập nhiều biến một lúc: `cin >> a >> b >> c;`.

### 7.2. Định dạng số thập phân với `<iomanip>`
Khi đề bài yêu cầu *"in ra số thực làm tròn đúng 2 chữ số thập phân"*:
```cpp
#include <iostream>
#include <iomanip> // Thu vien can thiet

using namespace std;

int main() {
    double diem = 8.6666667;
    cout << fixed << setprecision(2) << diem << "\n"; // In ra: 8.67
    return 0;
}
```

---

## PHẦN 8: CẤU TRÚC RẼ NHÁNH `if / else` & TƯ DUY LOGIC

### 8.1. Các toán tử so sánh
* So sánh bằng: `==` (chú ý: 2 dấu bằng! Không được viết `1 dấu =` vì đó là lệnh gán).
* So sánh khác: `!=`.
* Lớn hơn, bé hơn: `>`, `>=`, `<`, `<=`.

### 8.2. Các phép toán logic kết hợp
* **Toán tử VÀ (`&&`):** Tất cả các điều kiện đều phải đúng.
  * Ví dụ: Học sinh giỏi khi điểm $\ge 8$ **VÀ** hạnh kiểm tốt: `if (diem >= 8.0 && hanh_kiem == 'A')`.
* **Toán tử HOẶC (`||`):** Chỉ cần một trong các điều kiện đúng.
  * Ví dụ: Được nghỉ học vào Thứ Bảy **HOẶC** Chủ Nhật: `if (thu == 7 || thu == 1)`.
* **Toán tử PHỦ ĐỊNH (`!`):** Đảo ngược đúng thành sai, sai thành đúng.

> ⚠️ **BẪY TƯ DUY TOÁN HỌC TRONG C++:**  
> Trong toán học, ta viết: $1 \le x \le 10$.  
> Trong C++, nếu viết `if (1 <= x <= 10)` thì chương trình sẽ **chạy sai**!  
> *Vì sao?* Máy tính sẽ tính `1 <= x` trước, kết quả ra `1` (true) hoặc `0` (false). Sau đó nó lấy `1 <= 10` (luôn luôn đúng!).  
> **Cách viết đúng bắt buộc:**  
> ```cpp
> if (1 <= x && x <= 10) // Dung logic C++
> ```

### 8.3. Sơ đồ các dạng rẽ nhánh
```cpp
// Dang 1: if don
if (a > max_val) {
    max_val = a;
}

// Dang 2: if - else
if (n % 2 == 0) {
    cout << "CHAN\n";
} else {
    cout << "LE\n";
}

// Dang 3: if - else if - else (nhieu nhanh loai tru nhau)
if (dtb >= 8.0) {
    cout << "GIOI\n";
} else if (dtb >= 6.5) {
    cout << "KHA\n";
} else if (dtb >= 5.0) {
    cout << "TRUNG BINH\n";
} else {
    cout << "YEU\n";
}
```

---

## PHẦN 9: VÒNG LẶP `for` & BẢNG DRY RUN (CHẠY TỪNG BƯỚC BẰNG TAY)

### 9.1. Cấu trúc 3 bước của vòng lặp `for`
```cpp
for (Khoi_tao ; Dieu_kien_lap ; Buoc_nhay) {
    // Khoi lenh duoc thuc hien lap di lap lai
}
```
* **Cơ chế hoạt động:**
  1. Thực hiện lệnh `Khoi_tao` **duy nhất 1 lần** ở đầu.
  2. Kiểm tra `Dieu_kien_lap`: Nếu đúng $\to$ Chạy thân vòng lặp. Nếu sai $\to$ Kết thúc vòng for.
  3. Chạy hết thân vòng lặp $\to$ Nhảy sang thực hiện `Buoc_nhay` (thường là `i++`).
  4. Quay lại bước 2 kiểm tra điều kiện.

### 9.2. Minh họa trực quan: Tính tổng $S = 1 + 2 + 3 + 4$
Đoạn code:
```cpp
int n = 4;
long long S = 0;
for (int i = 1; i <= n; i++) {
    S = S + i;
}
cout << S << "\n";
```

**Bảng Trace Dry Run (Chạy từng bước như máy tính):**

| Lần lặp | Giá trị của biến `i` | Điều kiện `i <= 4` | Biến `S` trước cộng | Lệnh `S = S + i` | Biến `S` sau cộng | Bước nhảy `i++` |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| **Bắt đầu** | Chưa có | - | - | Khởi tạo ban đầu | `S = 0` | `i = 1` |
| **Vòng 1** | `1` | $1 \le 4$ (**Đúng**) | `0` | `S = 0 + 1` | **`1`** | $i$ tăng lên `2` |
| **Vòng 2** | `2` | $2 \le 4$ (**Đúng**) | `1` | `S = 1 + 2` | **`3`** | $i$ tăng lên `3` |
| **Vòng 3** | `3` | $3 \le 4$ (**Đúng**) | `3` | `S = 3 + 3` | **`6`** | $i$ tăng lên `4` |
| **Vòng 4** | `4` | $4 \le 4$ (**Đúng**) | `6` | `S = 6 + 4` | **`10`** | $i$ tăng lên `5` |
| **Kết thúc**| `5` | $5 \le 4$ (**Sai!**) | `10` | *Không thực hiện*| **`10`** | Thoát vòng for |

$\implies$ Sau khi thoát vòng lặp, màn hình in ra kết quả: **`10`**.

---

## PHẦN 10: HƯỚNG DẪN KỸ THUẬT ĐỌC/GHI TỆP THI ĐẤU: TỪ CƠ BẢN ĐẾN NÂNG CAO (TỆP .INP / .OUT)

Trong kỳ thi Olympic Tin học và HSG các cấp, quy định bắt buộc 100% các bài thi phải đọc dữ liệu từ tệp `TEN_BAI.INP` và xuất kết quả ra tệp `TEN_BAI.OUT`. Nếu in ra màn hình hoặc đọc sai tên tệp, bài thi sẽ bị chấm **0 điểm**.

### 10.1. Cấp độ 1 (Cơ bản): Chuyển hướng luồng dữ liệu bằng `freopen`
Cơ chế của hàm `freopen` trong thư viện `<cstdio>` là **bẻ hướng dòng dữ liệu**:
* `freopen("TEN_BAI.INP", "r", stdin);`: Chuyển luồng nhập chuẩn `stdin` (bàn phím) sang đọc từ file `TEN_BAI.INP` (`"r"` = read).
* `freopen("TEN_BAI.OUT", "w", stdout);`: Chuyển luồng xuất chuẩn `stdout` (màn hình console) sang ghi vào file `TEN_BAI.OUT` (`"w"` = write).
* **Ưu điểm vượt trội:** Giữ nguyên 100% các câu lệnh `cin >>` và `cout <<` quen thuộc, không cần thay đổi bất kỳ cú pháp xử lý nào!

**Quy trình thao tác chuẩn trên Code::Blocks 20.03:**
1. Nhấn `Ctrl + Shift + N` tạo file mã nguồn, lưu tên bài thi (ví dụ: `TONG.cpp`).
2. Tạo một file văn bản cùng thư mục lưu bài có tên đúng định dạng đề thi (ví dụ: `TONG.INP`), nhập dữ liệu test vào file này và lưu lại.
3. Nhấn phím tắt **`F9`** (Build & Run). Chương trình chạy xong, mở thư mục bài làm sẽ thấy file **`TONG.OUT`** tự động xuất hiện với kết quả bên trong.

### 10.2. Cấp độ 2 (Trung cấp): Tự động nhận diện tệp thông minh bằng `if (fopen)`
Khi ở nhà học sinh muốn nhập bàn phím để test nhanh, nhưng khi nộp thi lại cần đọc từ file. Nếu liên tục đóng mở comment `// freopen` thì rất dễ quên trước khi nộp bài. Tuyệt chiêu của các cao thủ thi đấu là dùng hàm kiểm tra file tồn tại:
```cpp
// Neu co file .INP trong thu muc thi doc tu file, nguoc lai nhap tu ban phim
if (fopen("TONG.INP", "r")) {
    freopen("TONG.INP", "r", stdin);
    freopen("TONG.OUT", "w", stdout);
}
```
* **Lợi ích:** Dù ở nhà test bàn phím hay đem nộp máy chấm thi, học sinh **không cần sửa hay đóng/mở comment bất kỳ dòng code nào**.

### 10.3. Cấp độ 3 (Nâng cao): Đọc đến hết tệp (EOF) & Tối ưu tốc độ Fast I/O
* **Đọc dữ liệu đến khi hết tệp (End-of-File):** Khi đề bài không cho trước số lượng phần tử $N$, dùng vòng lặp:
  ```cpp
  while (cin >> x) {
      // Xu ly phan tu x vua doc duoc
  }
  ```
* **Tối ưu Fast I/O:** Khi file input chứa $10^5 \sim 10^6$ số, bắt buộc thêm 2 dòng tăng tốc ở đầu hàm `main()` và dùng `"\n"` thay cho `endl` để tránh bị quá thời gian chạy (TLE).

### 10.4. Tổng hợp các Code Mẫu Ví dụ Điển hình (Kèm Test Tệp)

#### Ví dụ 1: Code mẫu Cấp độ 1 — Đọc 2 số cố định bằng `freopen` (Cơ bản)
* **Bài toán:** Nhập 2 số nguyên $A, B$ từ tệp `TONG.INP`, tính tổng $A + B$ và xuất ra tệp `TONG.OUT`.
* **Tệp `TONG.INP`:**
  ```
  15 25
  ```
* **Mã nguồn `TONG.cpp` (hoặc [Vi_du_1_freopen_Co_ban.cpp](file:///Users/huytran/Library/CloudStorage/GoogleDrive-trangiahuy8444@gmail.com/My%20Drive/Workspace%20Tin%20ho%CC%A3c%202026-2027/Olympic%2011/Noi_dung_bai_hoc/Tuan_01/01_Ly_thuyet/Vi_du_1_freopen_Co_ban.cpp)):**
  ```cpp
  #include <iostream>
  #include <cstdio> // Thu vien bat buoc chua ham freopen

  using namespace std;

  int main() {
      // 1. Chuyen huong nhap tu file TONG.INP, xuat ra file TONG.OUT
      freopen("TONG.INP", "r", stdin);
      freopen("TONG.OUT", "w", stdout);

      // 2. Nhap du lieu bang cin nhu binh thuong
      long long a, b;
      if (cin >> a >> b) {
          // 3. Xuat ket qua bang cout nhu binh thuong
          cout << a + b << "\n";
      }

      return 0;
  }
  ```
* **Tệp kết quả `TONG.OUT`:**
  ```
  40
  ```

---

#### Ví dụ 2: Code mẫu Cấp độ 2 — Tự động nhận diện `if (fopen)` (Trung cấp)
* **Bài toán:** Nhập chiều dài $a$ và chiều rộng $b$ của hình chữ nhật từ `HCN.INP`. Tính chu vi và diện tích xuất ra `HCN.OUT` (mỗi giá trị trên 1 dòng).
* **Tệp `HCN.INP`:**
  ```
  12 7
  ```
* **Mã nguồn `HCN.cpp` (hoặc [Vi_du_2_fopen_Tu_dong.cpp](file:///Users/huytran/Library/CloudStorage/GoogleDrive-trangiahuy8444@gmail.com/My%20Drive/Workspace%20Tin%20ho%CC%A3c%202026-2027/Olympic%2011/Noi_dung_bai_hoc/Tuan_01/01_Ly_thuyet/Vi_du_2_fopen_Tu_dong.cpp)):**
  ```cpp
  #include <iostream>
  #include <cstdio>

  using namespace std;

  int main() {
      // Tu dong nhan dien file: co file thi doc file, khong co thi nhap ban phim
      if (fopen("HCN.INP", "r")) {
          freopen("HCN.INP", "r", stdin);
          freopen("HCN.OUT", "w", stdout);
      }

      long long a, b;
      if (cin >> a >> b) {
          long long chu_vi = (a + b) * 2;
          long long dien_tich = a * b;

          cout << chu_vi << "\n";
          cout << dien_tich << "\n";
      }

      return 0;
  }
  ```
* **Tệp kết quả `HCN.OUT`:**
  ```
  38
  84
  ```
* **Cách học sinh thử nghiệm:**
  * Nếu trong thư mục có file `HCN.INP` $\to$ Chương trình đọc từ file và xuất ra `HCN.OUT`.
  * Nếu xóa hoặc đổi tên file `HCN.INP` $\to$ Cửa sổ console đen sẽ hiện lên cho phép nhập tay từ bàn phím. Học sinh không bao giờ sợ nộp nhầm phiên bản đóng/mở comment!

---

#### Ví dụ 3: Code mẫu Cấp độ 3 — Đọc đến hết tệp (EOF) & Tối ưu Fast I/O (Nâng cao)
* **Bài toán:** Đề bài không cho trước số lượng phần tử $N$, tệp `DAYSO.INP` chứa một dãy các số nguyên. Hãy tính tổng tất cả các số, tìm số lớn nhất và đếm số lượng phần tử.
* **Tệp `DAYSO.INP`:**
  ```
  10 45 -8 92 105 34 78 -15 200 66
  ```
* **Mã nguồn `DAYSO.cpp` (hoặc [Vi_du_3_EOF_FastIO.cpp](file:///Users/huytran/Library/CloudStorage/GoogleDrive-trangiahuy8444@gmail.com/My%20Drive/Workspace%20Tin%20ho%CC%A3c%202026-2027/Olympic%2011/Noi_dung_bai_hoc/Tuan_01/01_Ly_thuyet/Vi_du_3_EOF_FastIO.cpp)):**
  ```cpp
  #include <iostream>
  #include <cstdio>
  #include <algorithm>

  using namespace std;

  int main() {
      // 1. Toi uu hoa toc do Fast I/O (Chuyen tri de thi co 10^5 - 10^6 phan tu)
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);

      // 2. Tu dong nhan dien file
      if (fopen("DAYSO.INP", "r")) {
          freopen("DAYSO.INP", "r", stdin);
          freopen("DAYSO.OUT", "w", stdout);
      }

      // 3. Doc den khi het tep bang while (cin >> x)
      long long x;
      long long tong = 0;
      long long max_val = -2e18; // Gia tri cuc nho ban dau
      long long dem = 0;

      while (cin >> x) {
          tong += x;
          if (x > max_val) max_val = x;
          dem++;
      }

      // 4. Xuat ket qua
      if (dem > 0) {
          cout << "Tong: " << tong << "\n";
          cout << "Max: " << max_val << "\n";
          cout << "So luong phan tu: " << dem << "\n";
      }

      return 0;
  }
  ```
* **Tệp kết quả `DAYSO.OUT`:**
  ```
  Tong: 607
  Max: 200
  So luong phan tu: 10
  ```

---

#### Ví dụ 4: Code mẫu đọc mảng $N$ phần tử biết trước số lượng
* **Bài toán:** Dòng đầu là số nguyên dương $N$ ($1 \le N \le 10^5$). Dòng thứ 2 gồm $N$ số nguyên. Tính tổng dãy số.
* **Tệp `TONGN.INP`:**
  ```
  5
  3 7 2 8 5
  ```
* **Mã nguồn:**
  ```cpp
  #include <iostream>
  #include <cstdio>

  using namespace std;

  int main() {
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);

      if (fopen("TONGN.INP", "r")) {
          freopen("TONGN.INP", "r", stdin);
          freopen("TONGN.OUT", "w", stdout);
      }

      int n;
      if (cin >> n) {
          long long tong = 0;
          for (int i = 1; i <= n; i++) {
              long long val;
              cin >> val;
              tong += val;
          }
          cout << tong << "\n";
      }

      return 0;
  }
  ```

---

## PHẦN 11: BẢNG CHẨN ĐOÁN CÁC LỖI THƯỜNG GẶP CỦA HỌC SINH MỚI

| Thông báo lỗi trên Code::Blocks | Nguyên nhân thực tế | Cách khắc phục ngay lập tức |
| :--- | :--- | :--- |
| `error: expected ';' before ...` | Quên dấu chấm phẩy `;` ở dòng phía trên. | Nhìn lên dòng ngay trước dòng báo lỗi và thêm dấu `;`. |
| `error: 'x' was not declared in this scope` | Dùng biến `x` mà chưa khai báo kiểu, hoặc gõ sai chính tả hoa/thường (C++ phân biệt hoa thường: `X` khác `x`). | Kiểm tra lại tên biến và đảm bảo đã có `int x;` trước đó. |
| `error: redefinition of 'int x'` | Khai báo 1 biến 2 lần trong cùng một hàm. | Xóa từ khóa `int` ở lần khai báo thứ hai. |
| Kết quả ra số âm kỳ lạ (ví dụ: `-2147483648`) | Bị tràn số nguyên do dùng kiểu `int`. | Đổi toàn bộ sang kiểu `long long`, dùng `1LL * a * b`. |
| Chương trình không dừng hoặc treo đen màn hình | Vòng lặp vô tận (do điều kiện lặp không bao giờ sai, hoặc quên bước nhảy `i++`). | Kiểm tra lại điều kiện dừng của vòng lặp `while` hoặc `for`. |
