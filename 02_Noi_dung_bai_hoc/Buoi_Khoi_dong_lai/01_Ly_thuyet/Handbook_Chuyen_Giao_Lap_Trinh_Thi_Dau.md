# SỔ TAY HỌC SINH: CẨM NANG CHUYỂN GIAO TỪ CODELEARN SANG LẬP TRÌNH THI ĐẤU OLYMPIC (HANDBOOK)
> **Đơn vị:** Trường Quốc tế Á Châu (The Asian International School) — Tổ Tin học  
> **Khối lớp:** Đội tuyển Olympic Tin học (Năm học 2026 – 2027)  
> **Đối tượng:** Học sinh đã hoàn thành khóa C++ căn bản (biến, điều kiện, vòng lặp, mảng, xâu, hàm) và bắt đầu huấn luyện thi đấu giải cấp Thành phố / Olympic 30/4.

---

## MỤC LỤC
1. [Sự khác biệt cốt tử: Học cú pháp vs. Lập trình thi đấu (Competitive Programming)](#1-su-khac-biet-cot-tu)
2. [Cấu trúc Template vàng và Vào/Ra tệp chuẩn phòng thi](#2-cau-truc-template-vang)
3. [Quy tắc vàng phân tích Độ phức tạp thời gian & Giới hạn dữ liệu](#3-quy-tac-vang-phan-tich-do-phuc-tap)
4. [Cẩm nang phòng tránh Bẫy tràn số nguyên](#4-cam-nang-phong-tranh-bay-tran-so)
5. [Bốn kỹ thuật mảng "Bảo bối" phải nằm lòng](#5-bon-ky-thuat-mang-bao-boi)
   - 5.1. Mảng đếm tần số (Counting / Frequency Array)
   - 5.2. Mảng cộng dồn 1 chiều & 2 chiều (Prefix Sum)
   - 5.3. Mảng hiệu (Difference Array)
   - 5.4. Kỹ thuật Hai con trỏ (Two Pointers) & Cửa sổ trượt (Sliding Window)
6. [Bảng tra cứu nhanh C++ STL thường dùng trong phòng thi](#6-bang-tra-cuu-nhanh-cpp-stl)
7. [Chiến thuật quản lý thời gian và "Cày Subtask" 120 phút](#7-chien-thuat-quan-ly-thoi-gian)

---

<a name="1-su-khac-biet-cot-tu"></a>
## 1. SỰ KHÁC BIỆT CỐT TỬ: HỌC CÚ PHÁP VS. LẬP TRÌNH THI ĐẤU

Khi làm bài trên các web như Codelearn, LeetCode, hệ thống thường chỉ kiểm tra tính đúng đắn với dữ liệu nhỏ hoặc viết trong một class hàm đơn giản. Nhưng trong kỳ thi Olympic Tin học:
* **Chấm điểm tự động bằng tệp:** Chương trình của bạn đọc từ file `.INP` và ghi vào file `.OUT`. Sai một dấu cách, in thêm dòng chữ thừa `cout << "Nhap n: ";` là **0 điểm** toàn bài!
* **Giới hạn thời gian (Time Limit Exceeded - TLE):** Mỗi bài thi có thời gian chạy khắt khe là **1.0 giây** (hoặc 2.0 giây). Nếu thuật toán chạy quá 1 giây, bài thi sẽ bị hủy kết quả test đó.
* **Chiến thuật Subtask:** Một bài toán thường có 3 subtask:
  * *Subtask 1 (40% điểm):* $N \le 100$ hoặc $N \le 1000$ $\to$ Viết vét cạn $O(N^2), O(N^3)$ ăn trọn điểm.
  * *Subtask 2 (30% điểm):* $N \le 10^5 \to$ Cần thuật toán $O(N \log N)$ hoặc $O(N)$.
  * *Subtask 3 (30% điểm):* Giới hạn cực đại $\to$ Đòi hỏi tối ưu cấu trúc dữ liệu / DP.

---

<a name="2-cau-truc-template-vang"></a>
## 2. CẤU TRÚC TEMPLATE VÀNG VÀ VÀO/RA TỆP CHUẨN PHÒNG THI

Mọi bài thi Olympic đều bắt đầu từ khung chuẩn này. Học sinh hãy tạo sẵn snippet hoặc ghi nhớ cấu trúc:

```cpp
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

void solve() {
    // -------------------------------------------------------------
    // VIẾT THUẬT TOÁN CHÍNH TẠI ĐÂY
    // -------------------------------------------------------------
    int n;
    if (!(cin >> n)) return;
    cout << n << "\n";
}

int main() {
    // 1. TỐI ƯU TỐC ĐỘ NHẬP XUẤT (Bắt buộc phải có để tránh TLE)
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // 2. CHUYỂN HƯỚNG TỆP KHI THI THẬT (Mở comment khi nộp bài)
    // freopen("TENBAI.INP", "r", stdin);
    // freopen("TENBAI.OUT", "w", stdout);

    solve();

    return 0;
}
```

> **LƯU Ý CỰC KỲ QUAN TRỌNG:**
> * Luôn dùng `\n` thay vì `endl`. Lệnh `endl` sẽ tự động kích hoạt `flush` dòng đệm, làm tốc độ in chậm hơn tới 10 lần!
> * Không bao giờ in những câu thông báo như: `"Nhap n = "`, `"Ket qua la: "`. Chỉ in đúng theo yêu cầu đề bài.

---

<a name="3-quy-tac-vang-phan-tich-do-phuc-tap"></a>
## 3. QUY TẮC VÀNG PHÂN TÍCH ĐỘ PHỨC TẠP THỜI GIAN & GIỚI HẠN DỮ LIỆU

Trong 1.0 giây máy chủ chấm thi thực hiện được khoảng **$10^8$ phép tính cơ bản**. Dựa vào giá trị lớn nhất của $N$ trong đề bài, ta có thể suy ngược ra ngay thuật toán cần dùng:

| Giới hạn của $N$ | Độ phức tạp thời gian cho phép | Thuật toán gợi ý |
| :--- | :--- | :--- |
| $N \le 10 \sim 12$ | $O(N!)$ hoặc $O(N^2 \cdot 2^N)$ | Quay lui sinh hoán vị, DP trạng thái bit (Bitmask) |
| $N \le 20 \sim 25$ | $O(2^N)$ | Quay lui sinh tập con, vét cạn nhị phân |
| $N \le 500$ | $O(N^3)$ | 3 vòng lặp lồng nhau, thuật toán Floyd-Warshall |
| $N \le 5000$ | $O(N^2)$ | 2 vòng lặp lồng nhau, Quy hoạch động bảng 2 chiều |
| $N \le 10^5 \sim 2 \cdot 10^5$ | $O(N \log N)$ | Sắp xếp (`std::sort`), Chặt nhị phân, `std::set`/`map` |
| $N \le 10^6 \sim 10^7$ | $O(N)$ | Mảng cộng dồn, Mảng đếm, Hai con trỏ, Sàng Eratosthenes |
| $N \ge 10^9$ | $O(\log N)$ hoặc $O(1)$ | Công thức toán học, Luỹ thừa nhị phân, Chặt nhị phân kết quả |

---

<a name="4-cam-nang-phong-tranh-bay-tran-so"></a>
## 4. CẨM NANG PHÒNG TRÁNH BẪY TRÀN SỐ NGUYÊN

Kiểu `int` trong C++ chỉ lưu được giá trị từ $-2 \cdot 10^9$ đến $+2 \cdot 10^9$ (khoảng $2^{31} - 1$).
Bất kỳ bài toán nào có tổng, tích, hoặc giá trị vượt quá $2 \cdot 10^9$, nếu dùng `int` kết quả sẽ bị quay vòng thành số âm!

### 3 Bẫy tràn số học sinh thường dính:
1. **Bẫy 1: Tổng mảng vượt quá $2 \cdot 10^9$**
   ```cpp
   // SAI:
   int sum = 0;
   for (int i = 0; i < n; i++) sum += a[i]; // Nếu N = 10^5 và a[i] = 10^5 -> sum = 10^10 -> TRÀN SỐ!

   // ĐÚNG:
   long long sum = 0;
   for (int i = 0; i < n; i++) sum += a[i];
   ```

2. **Bẫy 2: Phép nhân 2 số `int` bị tràn trước khi gán cho `long long`**
   ```cpp
   int a = 1000000;
   int b = 1000000;
   // SAI: Máy tính nhân 2 số int ra int (tràn số) rồi mới gán sang ans!
   long long ans = a * b; // ans sẽ nhận giá trị rác!

   // ĐÚNG: Ép kiểu trước khi nhân
   long long ans = (long long)a * b; 
   // HOẶC:
   long long ans = 1LL * a * b; // 1LL là hằng số kiểu long long
   ```

3. **Bẫy 3: Phép toán chia lấy dư (Modulo)**
   Khi đề bài yêu cầu: *"In ra kết quả theo modulo $10^9 + 7$"*:
   * Cộng: `(a + b) % MOD`
   * Trừ: `(a - b % MOD + MOD) % MOD` (tránh số âm)
   * Nhân: `( (1LL * a % MOD) * (b % MOD) ) % MOD`

---

<a name="5-bon-ky-thuat-mang-bao-boi"></a>
## 5. BỐN KỸ THUẬT MẢNG "BẢO BỐI" PHẢI NẰM LÒNG

### 5.1. Mảng đếm tần số (Counting Array / Hash trực tiếp)
Thay vì dùng 2 vòng lặp $O(N^2)$ để tìm kiếm, ta dùng giá trị của phần tử làm chỉ số mảng $O(N)$.
```cpp
const int MAX_VAL = 1000005;
int cnt[MAX_VAL] = {0}; // Khai báo toàn cục

// Đếm tần số xuất hiện của từng số:
for (int i = 0; i < n; i++) {
    int x; cin >> x;
    cnt[x]++;
}
// Kiểm tra số K có xuất hiện không trong O(1): if (cnt[K] > 0) ...
```

### 5.2. Mảng cộng dồn (Prefix Sum 1D)
Giúp tính tổng đoạn con $[L, R]$ trong $O(1)$ thay vì duyệt lặp $O(N)$.
```cpp
// Xây dựng mảng cộng dồn (1-based index)
vector<long long> pref(n + 1, 0);
for (int i = 1; i <= n; i++) {
    pref[i] = pref[i - 1] + a[i];
}

// Truy vấn tổng đoạn [L, R] trong O(1):
long long sum_LR = pref[R] - pref[L - 1];
```

### 5.3. Mảng hiệu (Difference Array)
Cho phép tăng/giảm mọi phần tử trong đoạn $[L, R]$ thêm $V$ đơn vị trong $O(1)$.
```cpp
vector<long long> diff(n + 2, 0);

// Cập nhật: Cộng V vào đoạn [L, R] trong O(1)
void update(int l, int r, long long v) {
    diff[l] += v;
    diff[r + 1] -= v;
}

// Khôi phục mảng sau tất cả các truy vấn cập nhật trong O(N)
void restore(vector<long long>& a, int n) {
    long long cur = 0;
    for (int i = 1; i <= n; i++) {
        cur += diff[i];
        a[i] = cur;
    }
}
```

### 5.4. Kỹ thuật Hai con trỏ (Two Pointers) & Cửa sổ trượt
Dùng 2 biến chỉ số `left` và `right` cùng trượt trên mảng để tìm đoạn con tối ưu trong $O(N)$ thay vì $O(N^2)$.
```cpp
// Tìm độ dài đoạn con liên tiếp có tổng <= S lớn nhất:
int left = 0;
long long cur_sum = 0;
int max_len = 0;

for (int right = 0; right < n; right++) {
    cur_sum += a[right];
    while (cur_sum > s && left <= right) {
        cur_sum -= a[left];
        left++;
    }
    max_len = max(max_len, right - left + 1);
}
```

---

<a name="6-bang-tra-cuu-nhanh-cpp-stl"></a>
## 6. BẢNG TRA CỨU NHANH C++ STL THƯỜNG DÙNG TRONG PHÒNG THI

| Tên cấu trúc / Hàm | Thư viện | Độ phức tạp | Mục đích sử dụng |
| :--- | :--- | :--- | :--- |
| `vector<T>` | `<vector>` | $O(1)$ cuối mảng | Mảng động tự co giãn kích thước |
| `sort(a.begin(), a.end())` | `<algorithm>` | $O(N \log N)$ | Sắp xếp mảng/vector tăng dần |
| `reverse(a.begin(), a.end())`| `<algorithm>` | $O(N)$ | Đảo ngược mảng/vector/xâu |
| `lower_bound(a.begin(), a.end(), x)` | `<algorithm>` | $O(\log N)$ | Tìm vị trí đầu tiên $\ge x$ (trên mảng đã sort) |
| `upper_bound(a.begin(), a.end(), x)` | `<algorithm>` | $O(\log N)$ | Tìm vị trí đầu tiên $> x$ (trên mảng đã sort) |
| `set<T>` | `<set>` | $O(\log N)$ | Tập hợp tự động loại bỏ trùng lặp và tự sắp xếp |
| `map<Key, Value>` | `<map>` | $O(\log N)$ | Từ điển ánh xạ Key $\to$ Value |
| `priority_queue<T>` | `<queue>` | $O(\log N)$ | Hàng đợi ưu tiên (lấy Max/Min trong $O(1)$) |
| `__gcd(a, b)` | `<algorithm>` | $O(\log(\min(a, b)))$ | Tìm ước chung lớn nhất của 2 số |

---

<a name="7-chien-thuat-quan-ly-thoi-gian"></a>
## 7. CHIẾN THUẬT QUẢN LÝ THỜI GIAN VÀ "CÀY SUBTASK" 120 PHÚT

Trong kỳ thi Olympic Tin học, điểm số được tính lũy tiến từng test case. Đừng bao giờ nộp bài thi trắng nếu chưa tối ưu được 100%!

```
[10 phút đầu]   ĐỌC TOÀN BỘ ĐỀ -> Xác định dạng bài -> Đọc kỹ giới hạn Subtask
[40 phút tiếp]  GIẢI BÀI 1 -> Code cẩn thận -> Kiểm tra test biên -> Ăn chắc 6.0 điểm
[50 phút tiếp]  GIẢI BÀI 2 -> Cố gắng giải thuật toán chuẩn (Ăn 4.0 - 5.0 điểm)
[15 phút tiếp]  GIẢI BÀI 3 -> Viết vét cạn Subtask 1 bằng vòng for / quay lui (Ăn 2.0 - 3.0 điểm)
[5 phút cuối]   RÀ SOÁT TỆP -> Kiểm tra tên file freopen -> Xóa lệnh debug thừa
-------------------------------------------------------------------------------------
TỔNG KỲ VỌNG: 12.0 - 15.0 / 20.0 ĐIỂM -> ĐẠT GIẢI THÀNH PHỐ!
```
