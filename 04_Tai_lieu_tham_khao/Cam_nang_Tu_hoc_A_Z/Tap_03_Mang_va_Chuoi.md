# CẨM NANG TỰ HỌC C++ TỪ A ĐẾN Z -- TẬP 03
## CHUYÊN ĐỀ: MẢNG 1 CHIỀU & CHUỖI KÝ TỰ `std::string` CĂN BẢN
*(Dành riêng cho học sinh Đội tuyển Olympic Tin học 11 tự học và thực hành tại nhà)*

> **Đơn vị biên soạn:** Trường Quốc tế Á Châu (The Asian International School) -- Tổ Tin học  
> **Nguồn tư liệu gốc:** Giáo trình C++ CodeLearn & LearnCpp (`Section 07, 08`)  
> **Môi trường thực hành:** Code::Blocks 20.03  
> **Mục tiêu:** Giúp học sinh chuyển đổi từ xử lý dữ liệu đơn lẻ sang xử lý tập hợp danh sách (Mảng số) và chuỗi văn bản (String) -- dạng toán chiếm trọn điểm của Bài 1 trong mọi đề thi HSG & Olympic!

---

# PHẦN 1: MẢNG 1 CHIỀU CĂN BẢN (BÀI 059 -- 068)

## 1.1. Khái niệm & Khai báo mảng
Mảng là một dãy các ô nhớ liên tiếp cùng kiểu dữ liệu:
```cpp
// Khai báo mảng 10 số nguyên
int a[10];

// Khai báo và gán sẵn giá trị
int b[5] = {2, 7, 6, 3, 9};
```
* **Chỉ số mảng (Index):** Trong C++, chỉ số bắt đầu từ `0` đến `N - 1`.
  * `a[0]` là phần tử thứ nhất.
  * `a[1]` là phần tử thứ hai.
  * `a[9]` là phần tử thứ mười.
  * **Cảnh báo:** Không có phần tử `a[10]`. Truy cập `a[10]` là lỗi ngoài phạm vi!

---

## 1.2. Nhập và xuất mảng với vòng lặp `for`
```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[100];
    // Nhập n phần tử
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // In n phần tử ra màn hình
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << "\n";

    return 0;
}
```

---

## 1.3. Các thao tác căn bản trên mảng
1. **Tính tổng các phần tử trong mảng:**
   ```cpp
   long long tong = 0;
   for (int i = 0; i < n; i++) {
       tong += a[i];
   }
   ```
2. **Tìm phần tử lớn nhất (Max) và nhỏ nhất (Min):**
   ```cpp
   int max_val = a[0]; // LUÔN khởi tạo bằng phần tử đầu tiên
   for (int i = 1; i < n; i++) {
       if (a[i] > max_val) {
           max_val = a[i];
       }
   }
   ```
3. **Đếm phần tử thỏa mãn điều kiện (Ví dụ: đếm số chẵn):**
   ```cpp
   int dem = 0;
   for (int i = 0; i < n; i++) {
       if (a[i] % 2 == 0) dem++;
   }
   ```

---

# PHẦN 2: CHUỖI KÝ TỰ `std::string` CĂN BẢN (BÀI 069 -- 076)

## 2.1. Khái niệm chuỗi
Chuỗi (`string`) là một tập hợp các ký tự ghép lại thành một từ hoặc một câu văn bản. Cần thêm thư viện `#include <string>`:

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "Asian School";
    cout << s << "\n";
    cout << "Do dai chuoi: " << s.length() << "\n"; // In ra: 12
    cout << "Ky tu dau tien: " << s[0] << "\n";      // In ra: A
    return 0;
}
```

## 2.2. Nhập chuỗi: `cin >>` vs. `getline()`
* `cin >> s;`: Chỉ đọc được một từ không có dấu cách (gặp dấu cách hoặc Enter là dừng lại).
* `getline(cin, s);`: Đọc toàn bộ một dòng văn bản bao gồm cả dấu khoảng trắng.

## 2.3. Duyệt từng ký tự trong chuỗi
Duyệt từ ký tự đầu tiên `s[0]` đến ký tự cuối cùng `s[s.length() - 1]`:
```cpp
// Đếm xem trong chuỗi có bao nhiêu ký tự 'a'
string s;
getline(cin, s);

int dem = 0;
for (int i = 0; i < s.length(); i++) {
    if (s[i] == 'a' || s[i] == 'A') {
        dem++;
    }
}
cout << "So chu a: " << dem << "\n";
```

---

## Bài tập tự luyện Tập 3:
* **Bài 3.1:** Nhập mảng $N$ số nguyên. Tính trung bình cộng của các số dương trong mảng.
* **Bài 3.2:** Nhập mảng $N$ số nguyên. In ra các phần tử xuất hiện ở vị trí chỉ số lẻ (`a[1], a[3], a[5]...`).
* **Bài 3.3:** Nhập một chuỗi ký tự $S$. Đếm xem trong chuỗi có bao nhiêu ký tự in hoa (Gợi ý: `if (s[i] >= 'A' && s[i] <= 'Z')`).
* **Bài 3.4:** Nhập một chuỗi ký tự $S$. Hãy đảo ngược chuỗi đó và in ra màn hình.
