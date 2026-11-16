# BÀI GIẢNG TUẦN 02 (NGÀY 15/09/2026)
## CHỦ ĐỀ: VÒNG LẶP LỒNG NHAU, VÒNG LẶP WHILE & KỸ THUẬT MẢNG 1 CHIỀU TOÀN DIỆN

> **Thời lượng:** 90 phút.  
> **Đơn vị:** Trường Quốc tế Á Châu (The Asian International School) -- Tổ Tin học.  
> **Tài liệu tham khảo:** Hệ thống bài giảng `GA - C++` (CodeLearn Section 06 & 07, LearnCpp Chapter 17).  
> **Đối tượng:** Học sinh Đội tuyển Olympic Tin học 11 bắt đầu học C++.  
> **Môi trường thực hành:** Code::Blocks 20.03 (MinGW GCC, `-std=c++17`, `-O2`).

---

## MỤC TIÊU BÀI HỌC

1. **Về tư duy lập trình từ bản chất máy tính:**
   * Hiểu vì sao biến đơn lẻ là không đủ: Nhu cầu lưu trữ và xử lý hàng nghìn dữ liệu.
   * Hiểu bản chất mảng 1 chiều trên ô nhớ RAM: Cơ chế cấp phát ô nhớ liên tục (Contiguous memory) và tốc độ truy xuất tức thì $O(1)$.
   * Phân biệt ranh giới vùng nhớ **Stack** (giới hạn $\approx 1$MB) và **Data/BSS segment** để phòng ngừa dứt điểm lỗi tràn bộ nhớ **Stack Overflow (Crash chương trình)**.
2. **Về cú pháp & Kỹ thuật điều khiển:**
   * Nắm vững cơ chế vòng lặp `while`, `do-while` và vận dụng thành thạo **Kỹ thuật tách chữ số của số nguyên** (mổ xẻ số học).
   * Làm chủ vòng lặp lồng nhau (`nested loops`) theo quy tắc "kim phút - kim giây" và biết lập bảng chạy tay (**Dry Run**).
3. **Về kỹ năng Lập trình thi đấu (Olympic):**
   * Nắm vững 5 thao tác sống còn trên mảng: Nhập/Xuất chuẩn tệp `freopen`, Tìm Min/Max kèm vị trí (tránh bẫy số âm), Tính tổng chống tràn số (`long long`), Đếm phần tử theo điều kiện, Đảo ngược mảng.
   * Biết cách đặt **Breakpoint** và dùng cửa sổ **Watches** trên Code::Blocks để theo dõi sự biến thiên của các ô nhớ mảng.

---

## PHẦN 1: TẠI SAO PHẢI CẦN ĐẾN MẢNG? (TƯ DUY LƯU TRỮ HÀNG LOẠT)

### 1.1. Sự bất lực của các biến đơn lẻ
Thử tưởng tượng bài toán: *"Nhập vào điểm số của 30 học sinh trong một lớp, in ra các bạn có điểm cao hơn điểm trung bình cả lớp."*

Nếu không dùng mảng, ta sẽ phải viết:
```cpp
double d1, d2, d3, ..., d30;
cin >> d1 >> d2 >> ... >> d30;
double tb = (d1 + d2 + ... + d30) / 30.0;
// Sau đó phải viết 30 lệnh if:
if (d1 > tb) cout << d1 << " ";
if (d2 > tb) cout << d2 << " ";
// ... 28 lệnh if nữa!
```
* Nếu bài toán yêu cầu $N = 100.000$ học sinh, cách khai báo từng biến hoàn toàn **bất khả thi**.
* Để tính được điểm trung bình, ta phải đọc hết $N$ số. Nhưng để in ra các số lớn hơn điểm trung bình, ta buộc phải **nhớ lại từng số đã nhập**. Biến đơn ghi đè giá trị qua mỗi vòng lặp sẽ làm mất dữ liệu cũ.
* $\Longrightarrow$ Ta cần một cấu trúc có khả năng gom hàng nghìn, hàng triệu biến có cùng kiểu dữ liệu vào chung một cái tên duy nhất: đó chính là **Mảng (Array)**.

---

## PHẦN 2: BẢN CHẤT MẢNG 1 CHIỀU TRÊN BỘ NHỚ RAM

### 2.1. Cấp phát ô nhớ liên tục (Contiguous Memory Allocation)
Khi bạn khai báo một mảng:
```cpp
int a[5] = {12, 45, 7, 89, 23};
```
Hệ điều hành sẽ tìm trên thanh RAM một khoảng trống có kích thước đúng $5 \times \text{sizeof(int)} = 5 \times 4 = 20$ bytes **liền kề nhau không đứt đoạn**.

```text
Chỉ số (Index):       a[0]        a[1]        a[2]        a[3]        a[4]
Giá trị:            [  12  ]    [  45  ]    [   7  ]    [  89  ]    [  23  ]
Địa chỉ RAM:         0x1000      0x1004      0x1008      0x100C      0x1010
                      (+4B)       (+4B)       (+4B)       (+4B)
```

* **Công thức tính địa chỉ ô nhớ tức thì:**
  $$\text{Address}(a[i]) = \text{Address}(a[0]) + i \times \text{sizeof(kiểu dữ liệu)}$$
* Nhờ công thức số học này, máy tính chỉ mất đúng **1 phép cộng và 1 phép nhân bit** để tìm ra vị trí của phần tử thứ $i$, dù mảng có 5 phần tử hay 5 triệu phần tử. Đây là lý do vì sao thao tác truy xuất `a[i]` có tốc độ siêu thanh: độ phức tạp thời gian là **$O(1)$**.

---

### 2.2. Chỉ số mảng: Chuẩn C++ (0-based) vs. Quy ước Olympic (1-based)

* **Chuẩn ngôn ngữ C++ (0-based):** Mảng kích thước $N$ có chỉ số đánh từ $0$ đến $N - 1$.
  * Phần tử đầu tiên: `a[0]`.
  * Phần tử cuối cùng: `a[N - 1]`.
* **Quy ước vàng trong Lập trình thi đấu (1-based):**
  * Hầu hết đề thi HSG/Olympic đều mô tả dãy số: $a_1, a_2, \dots, a_n$.
  * Trong các kỹ thuật sau này (như Mảng cộng dồn, Mảng hiệu, Cây Fenwick/IT), việc có phần tử $a_0 = 0$ làm biên giúp code không bao giờ bị lỗi chỉ số âm.
  * Vì vậy, ta luôn khai báo mảng dư ra ít nhất 5 phần tử: `const int MAXN = 100005; int a[MAXN];` và sử dụng mảng từ chỉ số `1` đến `n` (bỏ qua ô `a[0]`).

---

### 2.3. Hai cạm bẫy bộ nhớ kinh điển trong Olympic

#### Cạm bẫy 1: Truy xuất ngoài biên mảng (Out of Bounds)
* Mảng khai báo `int a[5];` chỉ có các ô hợp lệ: `a[0], a[1], a[2], a[3], a[4]`.
* Nếu học sinh viết `a[5] = 100;` hoặc `a[-1] = 50;`:
  * Khác với Python (sẽ lập tức báo lỗi `IndexError`), C++ **không hề kiểm tra giới hạn mảng** để đảm bảo tốc độ tối đa!
  * Lệnh này sẽ âm thầm ghi đè lên vùng nhớ của biến khác hoặc vùng nhớ của hệ thống.
  * Hậu quả: Kết quả bị sai một cách bí ẩn hoặc chương trình bị sập ngay lập tức với mã lỗi:
    `Process returned -1073741819 (0xC0000005)` (Segmentation Fault - Lỗi truy cập bộ nhớ cấm).

#### Cạm bẫy 2: Tràn bộ nhớ ngăn xếp (Stack Overflow)
* Bộ nhớ một chương trình C++ được chia làm nhiều phân vùng:
  1. **Vùng nhớ Stack (Ngăn xếp):** Dành cho biến cục bộ bên trong hàm `main()`. Kích thước chỉ khoảng $1$MB đến $8$MB tùy hệ điều hành.
  2. **Vùng nhớ Data/BSS Segment (Toàn cục):** Dành cho các biến khai báo bên ngoài tất cả các hàm. Kích thước bằng toàn bộ dung lượng RAM còn trống của máy tính (hàng Gigabytes).
* **Bài học sống còn:**
  * Nếu khai báo `int a[1000000];` (1 triệu số nguyên $\approx 4$MB) bên trong hàm `main()`, vùng nhớ Stack sẽ bị tràn ngay khi chạy $\rightarrow$ **Chương trình văng ra ngay lập tức!**
  * Hơn nữa, mảng cục bộ trong `main()` không được tự động xóa rác, các ô nhớ chứa giá trị ngẫu nhiên.
  * **Giải pháp chuẩn:** Luôn khai báo các mảng kích thước lớn ở **phạm vi toàn cục (bên ngoài hàm `main`)**. Khi đó, mảng nằm ở vùng Data, chứa được tới $10^7$ phần tử và **toàn bộ các ô nhớ tự động được gán bằng 0**.

```cpp
#include <iostream>
using namespace std;

// ĐÚNG CHUẨN THI ĐẤU: Khai báo mảng toàn cục bên ngoài hàm main
const int MAXN = 1000005;
int a[MAXN]; // Chứa thoải mái 1 triệu phần tử, tất cả tự động = 0

int main() {
    // Không khai báo int a[1000005] ở trong này!
    return 0;
}
```

---

## PHẦN 3: VÒNG LẶP WHILE & KỸ THUẬT TÁCH CHỮ SỐ KINH ĐIỂN

### 3.1. So sánh vòng lặp `for` và `while`
* Dùng `for` khi **đã biết trước chính xác số lần lặp** (ví dụ: duyệt qua $N$ phần tử từ $1$ đến $N$).
* Dùng `while` khi **chưa biết trước số lần lặp**, vòng lặp tiếp tục chừng nào điều kiện còn thỏa mãn (`true`).

```cpp
while (dieu_kien) {
    // Khối lệnh thực hiện
    // Bắt buộc phải có câu lệnh làm điều kiện dần dần trở thành false (tránh lặp vô tận)
}
```

### 3.2. Kỹ thuật "Mổ xẻ số nguyên" bằng phép `% 10` và `/ 10`
Để trích xuất từng chữ số của một số nguyên dương $N$ (từ chữ số hàng đơn vị lùi dần về hàng cao nhất), ta áp dụng thuật toán lặp:
1. `chuso = n % 10;` $\rightarrow$ Lấy ra chữ số tận cùng bên phải (hàng đơn vị).
2. `n = n / 10;` $\rightarrow$ Vứt bỏ chữ số tận cùng vừa lấy, co số lại 1 bậc.
3. Lặp lại chừng nào $n > 0$.

```cpp
// Ví dụ: Tính tổng các chữ số của N = 2026
long long n = 2026;
long long temp = n;
int tong_cs = 0;

while (temp > 0) {
    int cs = temp % 10;   // Lần 1: cs=6; Lần 2: cs=2; Lần 3: cs=0; Lần 4: cs=2
    tong_cs += cs;        // Cộng dồn
    temp /= 10;           // Lần 1: 202;  Lần 2: 20;   Lần 3: 2;   Lần 4: 0 -> Dừng!
}
cout << "Tong cac chu so: " << tong_cs << "\n"; // Kết quả: 10
```

---

## PHẦN 4: VÒNG LẶP LỒNG NHAU (NESTED LOOPS) & BẢNG CHẠY TAY

### 4.1. Nguyên lý "Kim phút - Kim giây"
Khi đặt vòng lặp `j` nằm bên trong vòng lặp `i`:
* Vòng lặp `i` (vòng ngoài) đóng vai trò như **kim phút**.
* Vòng lặp `j` (vòng trong) đóng vai trò như **kim giây**.
* Ứng với **mỗi 1 giá trị của `i`**, vòng lặp `j` phải chạy **trọn vẹn từ đầu đến cuối**!

### 4.2. Bảng chạy tay (Dry Run) minh họa in hình chữ nhật sao $3 \times 4$:
```cpp
for (int i = 1; i <= 3; i++) {
    for (int j = 1; j <= 4; j++) {
        cout << "*";
    }
    cout << "\n";
}
```

| Vòng lặp ngoài (`i`) | Vòng lặp trong (`j`) | Điều kiện `j <= 4` | Hành động in | Màn hình hiển thị |
| :---: | :---: | :---: | :---: | :--- |
| `i = 1` | `j = 1` | Đúng | In `*` | `*` |
| | `j = 2` | Đúng | In `*` | `**` |
| | `j = 3` | Đúng | In `*` | `***` |
| | `j = 4` | Đúng | In `*` | `****` |
| | `j = 5` | Sai $\rightarrow$ Thoát | In xuống dòng `\n` | `****` (Xuống dòng) |
| `i = 2` | `j = 1` | Đúng | In `*` | `*` |
| | `j = 2, 3, 4` | Đúng | In `*` | `****` (Dòng 2) |
| `i = 3` | `j = 1, 2, 3, 4`| Đúng | In `*` | `****` (Dòng 3) |

* **Độ phức tạp tính toán:** Tổng số lần in dấu `*` là $3 \times 4 = 12$ lần.
* **Cảnh báo TLE trong phòng thi:** Nếu vòng lặp ngoài chạy $N$ lần, vòng lặp trong chạy $N$ lần $\implies$ Tổng số phép tính là $N^2$.
  * Nếu $N = 1.000 \implies N^2 = 10^6$ phép tính: Chạy trong $0.01$ giây (Rất tốt).
  * Nếu $N = 100.000 \implies N^2 = 10^{10}$ phép tính: Cần $\approx 100$ giây $\rightarrow$ **TLE chắc chắn!**

---

## PHẦN 5: 5 KỸ THUẬT CỐT LÕI TRÊN MẢNG 1 CHIỀU

### Kỹ thuật 1: Nhập và xuất mảng chuẩn I/O
```cpp
int n;
cin >> n;
for (int i = 1; i <= n; i++) {
    cin >> a[i];
}
// Xuất mảng: Giữa các số có khoảng trắng, số cuối cùng có dấu xuống dòng
for (int i = 1; i <= n; i++) {
    cout << a[i] << (i == n ? "" : " ");
}
cout << "\n";
```

### Kỹ thuật 2: Tìm giá trị lớn nhất (Max) / nhỏ nhất (Min) & Vị trí
```cpp
long long max_val = a[1];
int vi_tri_max = 1;

for (int i = 2; i <= n; i++) {
    if (a[i] > max_val) {
        max_val = a[i];
        vi_tri_max = i;
    }
}
```
> [!CAUTION]
> **Bẫy khởi tạo số âm:** Tuyệt đối không bao giờ khởi tạo `max_val = 0`! Nếu đề bài cho một dãy toàn số âm, ví dụ: `{-5, -12, -3, -9}`, thì số lớn nhất phải là `-3`. Nhưng nếu bạn đặt `max_val = 0`, chương trình sẽ xuất ra kết quả sai là `0`! **Quy tắc bất biến: Luôn khởi tạo `max_val = a[1]` và `min_val = a[1]`.**

### Kỹ thuật 3: Tính tổng mảng có nguy cơ tràn số
Khi tính tổng $N$ số nguyên ($N \le 10^5$, mỗi số $A_i \le 10^9$), tổng có thể lên tới $10^{14}$, vượt xa ngưỡng $2 \times 10^9$ của kiểu `int`. Bắt buộc phải dùng `long long`:
```cpp
long long tong = 0; // BẮT BUỘC dùng long long
for (int i = 1; i <= n; i++) {
    tong += a[i];
}
double trung_binh = (double)tong / n;
```

### Kỹ thuật 4: Đếm phần tử theo điều kiện
```cpp
int dem_chan = 0;
for (int i = 1; i <= n; i++) {
    if (a[i] % 2 == 0) {
        dem_chan++;
    }
}
```

### Kỹ thuật 5: Đảo ngược mảng bằng kỹ thuật 2 con trỏ đối xứng
Để đảo ngược mảng mà không cần tạo thêm một mảng phụ tốn bộ nhớ, ta hoán đổi từng cặp phần tử đối xứng từ ngoài vào trong:
* Phần tử $1$ đổi chỗ với phần tử $n$.
* Phần tử $2$ đổi chỗ với phần tử $n - 1$.
* Tổng quát: phần tử $i$ đổi chỗ với phần tử $(n - i + 1)$. Vòng lặp chỉ cần chạy tới giữa mảng ($n / 2$).
```cpp
for (int i = 1; i <= n / 2; i++) {
    swap(a[i], a[n - i + 1]);
}
```

---

## PHẦN 6: HƯỚNG DẪN THEO DÕI MẢNG TRÊN CODE::BLOCKS (DEBUG & WATCHES)

Để học sinh nhìn thấy trực quan các ô nhớ của mảng thay đổi ra sao khi chạy code, hãy dùng tính năng Debug của Code::Blocks:

1. **Đặt điểm dừng (Breakpoint):** Nhấp chuột trái vào dải lề màu đỏ/xám bên cạnh số dòng cần quan sát (ví dụ: dòng lệnh `if (a[i] > max_val)` bên trong vòng `for`). Một chấm tròn đỏ nhỏ sẽ xuất hiện.
2. **Khởi động chế độ Debug:** Bấm phím **F8** (hoặc chọn menu *Debug $\rightarrow$ Start / Continue*). Chương trình sẽ chạy và dừng lại chính xác tại dòng có chấm đỏ.
3. **Mở cửa sổ theo dõi biến (Watches):** Vào menu *Debug $\rightarrow$ Debugging windows $\rightarrow$ Watches*.
4. **Xem mảng:**
   * Trong cửa sổ Watches, mở rộng mục biến `a`. Ta sẽ thấy toàn bộ các ô nhớ `a[1], a[2], a[3]...` cùng giá trị thực sự của chúng trong RAM.
   * Bấm phím **F7** (Next line) để chạy từng lệnh một. Học sinh sẽ thấy con trỏ `i` tăng dần, giá trị `max_val` cập nhật màu đỏ khi tìm thấy phần tử lớn hơn. Cách học trực quan này giúp học sinh yếu xóa bỏ hoàn toàn sự mơ hồ về vòng lặp và mảng!

---

## PHẦN 7: BÀI TẬP MẪU CHUẨN THI ĐẤU (THỰC HÀNH TẠI LỚP)

### Đề bài: Thống kê dãy số (Dãy `THONGKE`)
Cho tệp dữ liệu `THONGKE.INP` gồm:
* Dòng 1 chứa số nguyên $N$ ($1 \le N \le 10^5$).
* Dòng 2 chứa $N$ số nguyên $A_1, A_2, \dots, A_N$ ($-10^9 \le A_i \le 10^9$).

**Yêu cầu:** Ghi ra tệp `THONGKE.OUT` gồm 4 dòng:
1. Dòng 1: Giá trị lớn nhất và vị trí đầu tiên đạt giá trị đó.
2. Dòng 2: Tổng các phần tử là số chẵn.
3. Dòng 3: Số lượng phần tử có giá trị bằng đúng số đầu tiên $A_1$.
4. Dòng 4: In ra dãy số theo thứ tự đảo ngược.

### Chương trình C++ hoàn chỉnh:
```cpp
#include <iostream>
#include <algorithm>
using namespace std;

// Khai báo mảng toàn cục trên vùng nhớ Data segment
const int MAXN = 100005;
long long a[MAXN];

int main() {
    // Mở luồng I/O theo chuẩn thi đấu Olympic
    freopen("THONGKE.INP", "r", stdin);
    freopen("THONGKE.OUT", "w", stdout);

    // Tối ưu tốc độ đọc ghi
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;

    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    // Yêu cầu 1: Tìm Max và vị trí đầu tiên
    long long max_val = a[1];
    int pos_max = 1;
    for (int i = 2; i <= n; i++) {
        if (a[i] > max_val) {
            max_val = a[i];
            pos_max = i;
        }
    }
    cout << max_val << " " << pos_max << "\n";

    // Yêu cầu 2: Tổng các phần tử chẵn (chống tràn số với long long)
    long long tong_chan = 0;
    for (int i = 1; i <= n; i++) {
        if (a[i] % 2 == 0) {
            tong_chan += a[i];
        }
    }
    cout << tong_chan << "\n";

    // Yêu cầu 3: Đếm số phần tử bằng A[1]
    int dem_bang_a1 = 0;
    for (int i = 1; i <= n; i++) {
        if (a[i] == a[1]) {
            dem_bang_a1++;
        }
    }
    cout << dem_bang_a1 << "\n";

    // Yêu cầu 4: Đảo ngược mảng và in ra
    for (int i = 1; i <= n / 2; i++) {
        swap(a[i], a[n - i + 1]);
    }
    for (int i = 1; i <= n; i++) {
        cout << a[i] << (i == n ? "" : " ");
    }
    cout << "\n";

    return 0;
}
```
