# CẨM NANG TỰ HỌC C++ TỪ A ĐẾN Z -- TẬP 02
## CHUYÊN ĐỀ: CÂU LỆNH RẼ NHÁNH `if/else` & CẤU TRÚC VÒNG LẶP `for / while`
*(Dành riêng cho học sinh Đội tuyển Olympic Tin học 11 tự học và thực hành tại nhà)*

> **Đơn vị biên soạn:** Trường Quốc tế Á Châu (The Asian International School) -- Tổ Tin học  
> **Nguồn tư liệu gốc:** Giáo trình C++ CodeLearn & LearnCpp (`Section 04, 05, 06`)  
> **Môi trường thực hành:** Code::Blocks 20.03 (`Ctrl+Shift+N`, `Ctrl+S`, `F9`)  
> **Mục tiêu:** Giúp học sinh nắm chắc tư duy ra quyết định điều kiện và làm chủ cấu trúc lặp -- hai viên gạch nền móng quan trọng nhất của mọi thuật toán máy tính.

---

# PHẦN 1: CÂU LỆNH RẼ NHÁNH `if`, `if-else`, `else if` (BÀI 033 -- 044)

## 1.1. Bản chất của việc ra quyết định
Trong cuộc sống, ta thường có những quyết định phụ thuộc vào điều kiện: *"NẾU trời mưa THÌ mang ô, NGƯỢC LẠI THÌ đi dạo"*.  
Trong C++, máy tính sử dụng cặp từ khóa `if` và `else`:

```cpp
if (dieu_kien) {
    // Khoi lenh thuc hien khi dieu_kien la DUNG (true)
} else {
    // Khoi lenh thuc hien khi dieu_kien la SAI (false)
}
```

## 1.2. Các toán tử so sánh (Comparison Operators)

| Toán tử trong C++ | Ý nghĩa | Ví dụ trong C++ | Lưu ý quan trọng |
| :---: | :--- | :---: | :--- |
| `==` | So sánh bằng nhau | `if (a == b)` | **Bẫy kinh điển:** Phải dùng 2 dấu bằng `==`. Nếu viết nhầm 1 dấu bằng `a = b` là lệnh gán! |
| `!=` | So sánh khác nhau | `if (a != 0)` | Trả về `true` nếu $a$ khác $0$. |
| `<` | Nhỏ hơn | `if (a < 10)` | |
| `>` | Lớn hơn | `if (a > 0)` | |
| `<=` | Nhỏ hơn hoặc bằng | `if (diem <= 5)`| |
| `>=` | Lớn hơn hoặc bằng | `if (tuoi >= 18)`| |

---

## 1.3. Các toán tử logic kết hợp điều kiện (`&&`, `||`, `!`)

1. **Toán tử VÀ (`&&`):** Tất cả các điều kiện con đều phải đúng thì kết quả mới đúng.
   * **Bẫy từ Python sang C++:** Trong Python ta viết `1 <= x <= 10`. **Trong C++ viết như vậy là sai hoàn toàn!** Bắt buộc phải dùng toán tử `&&`:
     $$\text{C++ đúng: } \texttt{if (1 <= x \&\& x <= 10)}$$
2. **Toán tử HOẶC (`||`):** Chỉ cần ít nhất một điều kiện con đúng là cả biểu thức đúng.
   * Ví dụ kiểm tra một ký tự có phải nguyên âm không: `if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')`.
3. **Toán tử PHỦ ĐỊNH (`!`):** Biến đúng thành sai, biến sai thành đúng.
   * `if (!is_prime)` tương đương với `if (is_prime == false)`.

---

## 1.4. Cấu trúc nhiều nhánh lựa chọn: `if - else if - else`
Khi có nhiều hơn 2 trường hợp, ta dùng chuỗi `else if`:

```cpp
#include <iostream>
using namespace std;

int main() {
    double diem;
    cin >> diem;

    if (diem >= 8.0) {
        cout << "Xep loai: GIOI\n";
    } else if (diem >= 6.5) {
        cout << "Xep loai: KHA\n";
    } else if (diem >= 5.0) {
        cout << "Xep loai: TRUNG BINH\n";
    } else {
        cout << "Xep loai: YEU\n";
    }

    return 0;
}
```

---

## Bài tập tự luyện Phần 1:
* **Bài 1.1:** Nhập vào 1 số nguyên $N$. In ra `CHAN` nếu $N$ là số chẵn, in ra `LE` nếu $N$ là số lẻ.
  * *Gợi ý:* `if (N % 2 == 0) cout << "CHAN\n"; else cout << "LE\n";`
* **Bài 1.2:** Nhập vào 3 số nguyên dương $a, b, c$. Kiểm tra xem 3 số đó có lập thành 3 cạnh của một tam giác hay không (Điều kiện: tổng 2 cạnh bất kỳ luôn lớn hơn cạnh còn lại: $a + b > c$ và $a + c > b$ và $b + c > a$).
* **Bài 1.3:** Nhập vào 1 năm nguyên dương $Y$. Kiểm tra năm nhuận: Chia hết cho 400 HOẶC (chia hết cho 4 nhưng không chia hết cho 100). In ra `YES` hoặc `NO`.

---

# PHẦN 2: CẤU TRÚC VÒNG LẶP `for` & `while` (BÀI 045 -- 058)

## 2.1. Vòng lặp `for` (Dùng khi biết trước số lần lặp)
Cú pháp:
```cpp
for (khoi_tao; dieu_kien; buoc_nhay) {
    // Khối lệnh lặp lại
}
```

* **Trình tự hoạt động của máy tính:**
  1. Thực hiện phần `khoi_tao` (chỉ chạy duy nhất 1 lần đầu).
  2. Kiểm tra `dieu_kien`. Nếu `dieu_kien` là `true` $\rightarrow$ nhảy vào thân vòng lặp. Nếu `false` $\rightarrow$ kết thúc vòng lặp.
  3. Sau khi chạy hết thân vòng lặp, nhảy lên thực hiện `buoc_nhay` (thường là `i++`).
  4. Lặp lại bước 2.

```cpp
// Ví dụ: In các số từ 1 đến 10
for (int i = 1; i <= 10; i++) {
    cout << i << " ";
}
cout << "\n";
```

### Ví dụ kinh điển: Tính tổng dãy số $S = 1 + 2 + 3 + \dots + N$
```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    long long tong = 0; // Luon khoi tao tong = 0 truoc khi lap!
    for (int i = 1; i <= n; i++) {
        tong += i;
    }

    cout << "Tong = " << tong << "\n";
    return 0;
}
```

---

## 2.2. Vòng lặp `while` (Dùng khi chưa biết số lần lặp)
Cú pháp:
```cpp
while (dieu_kien) {
    // Khối lệnh thực hiện chừng nào dieu_kien còn true
}
```

* **Ứng dụng số 1 của `while` trong Tin học: Kỹ thuật tách chữ số của số nguyên**
```cpp
// Đếm số lượng chữ số và tính tổng các chữ số của N
long long n;
cin >> n;

int dem = 0;
int tong_cs = 0;

long long temp = n;
while (temp > 0) {
    int cs = temp % 10; // Lấy chữ số tận cùng
    tong_cs += cs;      // Cộng dồn
    dem++;              // Đếm số chữ số
    temp /= 10;         // Bỏ chữ số tận cùng vừa lấy
}

cout << "So chu so: " << dem << "\n";
cout << "Tong chu so: " << tong_cs << "\n";
```

---

## 2.3. Hai câu lệnh điều khiển luồng: `break` và `continue`
* `break;`: **Bẻ gãy và thoát ngay lập tức** khỏi vòng lặp gần nhất (thường dùng khi đã tìm thấy kết quả mong muốn).
* `continue;`: **Bỏ qua phần còn lại của lần lặp hiện tại** và nhảy ngay sang lần lặp tiếp theo.

```cpp
// In cac so le tu 1 den 10 bang continue:
for (int i = 1; i <= 10; i++) {
    if (i % 2 == 0) continue; // Neu la so chan thi bo qua, khong in!
    cout << i << " "; // Chi in ra: 1 3 5 7 9
}
```

---

## Bài tập tự luyện Phần 2:
* **Bài 2.1:** Nhập vào 2 số nguyên $a$ và $b$ ($a \le b$). Tính tổng tất cả các số chẵn trong đoạn $[a, b]$.
* **Bài 2.2:** Nhập vào số nguyên dương $N$. Đếm xem $N$ có bao nhiêu ước số nguyên dương (Duyệt `for (int i = 1; i <= N; i++)` kiểm tra `if (N % i == 0) dem++;`).
* **Bài 2.3:** Nhập vào số nguyên dương $N$. Kiểm tra xem $N$ có phải là số đối xứng (Palindrome) hay không (Ví dụ: 12321 là số đối xứng, 12345 không phải).
  * *Gợi ý:* Dùng vòng `while (temp > 0)` để tạo ra số đảo ngược `so_dao = so_dao * 10 + temp % 10; temp /= 10;`. Sau đó so sánh `if (so_dao == N)`.
