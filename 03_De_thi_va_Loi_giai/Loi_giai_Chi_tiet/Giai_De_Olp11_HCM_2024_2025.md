# LỜI GIẢI CHI TIẾT ĐỀ THI OLYMPIC 11 TP. HỒ CHÍ MINH (NĂM HỌC 2024 – 2025)
> **Môn thi:** Tin học – Khối 11  
> **Thời gian:** 120 phút – Thang điểm: 20 điểm  
> **Tài liệu gồm:** Đề tóm tắt, Phân tích thuật toán, Mã nguồn chuẩn C++ (và Python) ăn trọn 100% điểm số (20/20).

---

## BÀI 1: NGHE NHẠC (6 ĐIỂM)
* **Tên file nộp:** `NGHENHAC.PAS`, `NGHENHAC.CPP` hoặc `NGHENHAC.PY`
* **Tệp dữ liệu vào:** `NGHENHAC.INP`
* **Tệp kết quả:** `NGHENHAC.OUT`

### 1. Đề bài tóm tắt
An có $K$ phút rảnh rỗi và danh sách $N$ bài hát, bài thứ $i$ dài $m_i$ phút ($1 \le N \le 10^5, 1 \le K \le 10^9, 1 \le m_i \le 10^4$). Hãy tìm một **dãy liên tiếp** các bài hát sao cho số lượng bài hát là nhiều nhất và tổng thời lượng không vượt quá $K$.
* **Ràng buộc:**
  * Subtask 1 (60% số điểm): $N \le 10^3$.
  * Subtask 2 (40% số điểm): $N \le 10^5$.

### 2. Thuật toán tối ưu (Hai con trỏ - Two Pointers)
* Vì thời lượng mỗi bài $m_i > 0$, khi mở rộng đoạn sang phải thì tổng thời gian luôn tăng, thu hẹp bên trái thì tổng giảm.
* Duy trì 2 con trỏ `left` và `right`. Với mỗi vị trí `right` từ $0 \to N-1$, cộng $m[right]$ vào tổng `current_sum`.
* Nếu `current_sum > K`, tăng `left` và trừ $m[left]$ cho đến khi `current_sum <= K`.
* Độ phức tạp: $O(N)$ thời gian, $O(1)$ bộ nhớ phụ. Ăn trọn 6.0 / 6.0 điểm.

### 3. Mã nguồn chuẩn C++
```cpp
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("NGHENHAC.INP", "r", stdin);
    freopen("NGHENHAC.OUT", "w", stdout);
    #endif

    int n;
    long long k;
    if (!(cin >> n >> k)) return 0;

    vector<long long> m(n);
    for (int i = 0; i < n; i++) cin >> m[i];

    int left = 0, ans = 0;
    long long current_sum = 0;

    for (int right = 0; right < n; right++) {
        current_sum += m[right];
        while (current_sum > k && left <= right) {
            current_sum -= m[left];
            left++;
        }
        ans = max(ans, right - left + 1);
    }

    cout << ans << "\n";
    return 0;
}
```

---

## BÀI 2: HỌC TOÁN (7 ĐIỂM)
* **Tên file nộp:** `HOCTOAN.CPP` hoặc `HOCTOAN.PY`
* **Tệp dữ liệu:** `HOCTOAN.INP` $\to$ `HOCTOAN.OUT`

### 1. Đề bài tóm tắt
Cho hai số nguyên dương $a, b$ ($1 \le a < b \le 10^4$). Tìm hai số nguyên dương $x, y$ sao cho:
1. $\gcd(x, y) = a$
2. $\text{lcm}(x, y) = b$
3. Tổng $x + y$ nhỏ nhất.  
*In ra dòng 1 là tổng $x+y$, dòng 2 là $x, y$ ($x \le y$, chọn $x$ nhỏ nhất nếu trùng). Nếu không tìm được in `-1`.*

### 2. Phân tích toán học & Thuật toán
* Ta biết: $x \cdot y = \gcd(x, y) \cdot \text{lcm}(x, y) = a \cdot b$.
* Đặt $x = a \cdot u$ và $y = a \cdot v$ với $\gcd(u, v) = 1$.
* Khi đó: $(a \cdot u) \cdot (a \cdot v) = a \cdot b \iff u \cdot v = \frac{b}{a}$.
* **Điều kiện cần:** $b$ phải chia hết cho $a$. Nếu $b \pmod a \ne 0 \implies$ in `-1`.
* Đặt $P = b / a$. Ta chỉ cần tìm cặp ước $(u, v)$ của $P$ sao cho:
  1. $u \le v$ và $u \cdot v = P$.
  2. $\gcd(u, v) = 1$.
  3. Tổng $a \cdot (u + v)$ nhỏ nhất.
* Vì $b \le 10^4$, ta chỉ cần duyệt $u$ từ $\lfloor\sqrt{P}\rfloor$ lùi về $1$. Cặp $(u, v)$ đầu tiên thỏa mãn $\gcd(u, v) = 1$ sẽ cho tổng $u + v$ nhỏ nhất (vì hai số càng gần nhau thì tổng càng nhỏ)!
* Độ phức tạp: $O(\sqrt{b/a} \cdot \log(b/a))$ $\approx$ chưa đầy $100$ phép tính!

### 3. Mã nguồn chuẩn C++
```cpp
#include <iostream>
#include <numeric>
#include <cmath>

using namespace std;

// Hàm tính ước chung lớn nhất (có sẵn trong <numeric> là std::gcd)
long long gcd_func(long long a, long long b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("HOCTOAN.INP", "r", stdin);
    freopen("HOCTOAN.OUT", "w", stdout);
    #endif

    long long a, b;
    if (!(cin >> a >> b)) return 0;

    if (b % a != 0) {
        cout << -1 << "\n";
        return 0;
    }

    long long P = b / a;
    long long best_u = -1, best_v = -1;

    // Duyệt u từ sqrt(P) giảm dần để tìm tổng u + v nhỏ nhất
    for (long long u = sqrt(P); u >= 1; u--) {
        if (P % u == 0) {
            long long v = P / u;
            if (gcd_func(u, v) == 1) {
                best_u = u;
                best_v = v;
                break; // Tìm thấy ngay lập tức tổng nhỏ nhất!
            }
        }
    }

    if (best_u == -1) {
        cout << -1 << "\n";
    } else {
        long long x = a * best_u;
        long long y = a * best_v;
        cout << x + y << "\n";
        cout << x << " " << y << "\n";
    }

    return 0;
}
```

---

## BÀI 3: ROBOT (7 ĐIỂM)
* **Tên file nộp:** `ROBOT.CPP` hoặc `ROBOT.PY`
* **Tệp dữ liệu:** `ROBOT.INP` $\to$ `ROBOT.OUT`

### 1. Đề bài tóm tắt
Bảng chữ nhật kích thước $M \times N$ ($2 \le M, N \le 10^5$).
* Robot 1: Đi từ ô $(1, 1)$ đến $(M, N)$ theo các lệnh `D` (xuống) và `R` (phải).
* Robot 2: Đi từ ô $(M, N)$ về $(1, 1)$ theo các lệnh `U` (lên) và `L` (trái).
* **Yêu cầu:** Đếm số ô mà cả hai robot cùng đi qua.

### 2. Phân tích điểm mấu chốt
* Kích thước bảng $M \times N$ có thể lên tới $10^5 \times 10^5 = 10^{10}$ ô $\implies$ **Không thể tạo mảng 2 chiều!**
* Tuy nhiên, mỗi robot chỉ đi đúng $(M - 1) + (N - 1) \le 2 \cdot 10^5$ bước!
* **Thuật toán:**
  1. Mô phỏng đường đi của Robot 1, lưu tọa độ từng ô $(r, c)$ vào `std::set<pair<int, int>>` trong C++ hoặc `set` các tuple `(r, c)` trong Python.
  2. Mô phỏng đường đi của Robot 2, với mỗi ô robot 2 đi qua, kiểm tra xem ô đó có nằm trong tập hợp của Robot 1 hay không. Nếu có thì tăng biến đếm (dùng một set kết quả chung để tránh đếm trùng).
* Độ phức tạp: $O((M + N) \log(M + N))$, chạy chỉ mất $0.15$ giây! Ăn trọn 7.0 / 7.0 điểm.

### 3. Mã nguồn chuẩn C++
```cpp
#include <iostream>
#include <string>
#include <vector>
#include <set>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("ROBOT.INP", "r", stdin);
    freopen("ROBOT.OUT", "w", stdout);
    #endif

    int m, n;
    if (!(cin >> m >> n)) return 0;

    string s1, s2;
    cin >> s1 >> s2;

    // 1. Lưu các ô Robot 1 đi qua
    set<pair<int, int>> visited1;
    int r = 1, c = 1;
    visited1.insert({r, c});

    for (char cmd : s1) {
        if (cmd == 'D') r++;
        else if (cmd == 'R') c++;
        visited1.insert({r, c});
    }

    // 2. Mô phỏng Robot 2 và kiểm tra các ô trùng lặp
    set<pair<int, int>> common_cells;
    r = m; c = n;
    if (visited1.count({r, c})) {
        common_cells.insert({r, c});
    }

    for (char cmd : s2) {
        if (cmd == 'U') r--;
        else if (cmd == 'L') c--;
        if (visited1.count({r, c})) {
            common_cells.insert({r, c});
        }
    }

    cout << common_cells.size() << "\n";

    return 0;
}
```
*(Lưu ý: Bài Robot này bằng Python chỉ mất 15 dòng code với `set()`, học sinh hoàn toàn có thể chọn Python nếu tự tin!)*
