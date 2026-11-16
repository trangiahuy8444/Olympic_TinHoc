# BẢNG TRA CỨU CÔNG THỨC & THUẬT TOÁN KINH ĐIỂN OLYMPIC TIN HỌC (CHEAT SHEET)
> **Đơn vị:** Trường Quốc tế Á Châu (The Asian International School) — Tổ Tin học  
> **Dành cho:** Học sinh Đội tuyển Olympic Tin học 11 (Năm học 2026 – 2027)  
> **Mục đích:** Sổ tay tra cứu tức thì trên máy tính phòng Lab khi làm bài tập, thi thử và ôn tập trước ngày thi.

---

## MỤC LỤC
1. [Toán Học, Dãy Số & Số Học (Number Theory)](#1-toan-hoc--so-hoc)
2. [Đồng Dư Thức & Phép Tính Modulo](#2-dong-du-thuc--modulo)
3. [Kỹ Thuật Xử Lý Mảng & Tiền Xử Lý O(N)](#3-ky-thuat-xu-ly-mang)
4. [Tìm Kiếm Nhị Phân & Chặt Nhị Phân Kết Quả](#4-tim-kiem-nhi-phan)
5. [C++ STL & Cú Pháp Tối Ưu](#5-cpp-stl--cu-phap)
6. [Công Thức Quy Hoạch Động (DP) Kinh Điển](#6-quy-hoach-dong-dp)
7. [Đồ Thị & Thuật Toán Vét Cạn Subtask](#7-do-thi--vet-can)

---

<a name="1-toan-hoc--so-hoc"></a>
## 1. TOÁN HỌC, DÃY SỐ & SỐ HỌC (NUMBER THEORY)

### 1.1. Cấp số cộng & Dãy số tự nhiên
* Tổng dãy số tự nhiên liên tiếp:
  $$S = 1 + 2 + 3 + \dots + n = \frac{n(n + 1)}{2}$$
* Cấp số cộng có số hạng đầu $u_1$, công sai $d$, số hạng cuối $u_n$:
  * Số lượng số hạng: $n = \frac{u_n - u_1}{d} + 1$
  * Tổng cấp số cộng: $S = \frac{n(u_1 + u_n)}{2}$
  * **Code C++ chống tràn số:**
    ```cpp
    long long sum_ap(long long u1, long long un, long long d) {
        long long n = (un - u1) / d + 1;
        if (n % 2 == 0) return (n / 2) * (u1 + un);
        return n * ((u1 + un) / 2);
    }
    ```

### 1.2. Ước số & Bội số
* Ước chung lớn nhất (GCD) và Bội chung nhỏ nhất (LCM):
  $$a \times b = \gcd(a, b) \times \text{lcm}(a, b) \implies \text{lcm}(a, b) = \frac{a \times b}{\gcd(a, b)}$$
  ```cpp
  #include <algorithm> // Có sẵn __gcd(a, b)

  long long lcm(long long a, long long b) {
      // Chia trước rồi mới nhân để chống tràn số a * b!
      return (a / __gcd(a, b)) * b;
  }
  ```

### 1.3. Kiểm tra số nguyên tố & Sàng Eratosthenes
* Kiểm tra số nguyên tố $O(\sqrt{N})$:
  ```cpp
  bool is_prime(long long n) {
      if (n < 2) return false;
      if (n == 2 || n == 3) return true;
      if (n % 2 == 0 || n % 3 == 0) return false;
      for (long long i = 5; i * i <= n; i += 6) {
          if (n % i == 0 || n % (i + 2) == 0) return false;
      }
      return true;
  }
  ```
* Sàng nguyên tố Eratosthenes $O(N \log \log N)$ lên tới $N = 10^7$:
  ```cpp
  const int MAX = 10000005;
  bool is_prime[MAX];

  void sieve() {
      fill(is_prime, is_prime + MAX, true);
      is_prime[0] = is_prime[1] = false;
      for (int p = 2; 1LL * p * p < MAX; p++) {
          if (is_prime[p]) {
              for (int i = p * p; i < MAX; i += p) is_prime[i] = false;
          }
      }
  }
  ```

### 1.4. Đếm số lượng ước số $d(N)$
* Nếu $N = p_1^{e_1} \cdot p_2^{e_2} \dots p_k^{e_k}$ thì tổng số lượng ước số của $N$ là:
  $$d(N) = (e_1 + 1)(e_2 + 1)\dots(e_k + 1)$$
  ```cpp
  int count_divisors(long long n) {
      int cnt = 0;
      for (long long i = 1; i * i <= n; i++) {
          if (n % i == 0) {
              cnt++;
              if (i * i != n) cnt++;
          }
      }
      return cnt;
  }
  ```

---

<a name="2-dong-du-thuc--modulo"></a>
## 2. ĐỒNG DƯ THỨC & PHÉP TÍNH MODULO

* **Phép cộng:** `(a + b) % MOD`
* **Phép trừ (chống số âm):** `(a - b % MOD + MOD) % MOD`
* **Phép nhân (chống tràn số):** `(1LL * (a % MOD) * (b % MOD)) % MOD`
* **Lũy thừa nhị phân $A^B \pmod M$ trong $O(\log B)$:**
  ```cpp
  long long binpow(long long a, long long b, long long m) {
      long long res = 1; a %= m;
      while (b > 0) {
          if (b & 1) res = (1LL * res * a) % m;
          a = (1LL * a * a) % m;
          b >>= 1;
      }
      return res;
  }
  ```
* **Phép chia Modulo:** $\frac{A}{B} \pmod M = A \times B^{M - 2} \pmod M$ (với $M$ là số nguyên tố theo Định lý Fermat nhỏ).

---

<a name="3-ky-thuat-xu-ly-mang"></a>
## 3. KỸ THUẬT XỬ LÝ MẢNG & TIỀN XỬ LÝ $O(N)$

### 3.1. Mảng đếm tần số (Counting Array / Mảng đánh dấu)
Dùng giá trị làm chỉ số mảng để kiểm tra sự tồn tại trong $O(1)$:
```cpp
const int MAX = 1000005;
int cnt[MAX] = {0};

// Đếm cặp có tổng bằng K trong O(N):
long long ans = 0;
for (int i = 0; i < n; i++) {
    int target = k - a[i];
    if (target >= 0 && target < MAX) ans += cnt[target];
    cnt[a[i]]++;
}
```

### 3.2. Mảng cộng dồn 1 chiều (Prefix Sum 1D)
Tính tổng đoạn $[L, R]$ trong $O(1)$:
```cpp
vector<long long> pref(n + 1, 0);
for (int i = 1; i <= n; i++) pref[i] = pref[i - 1] + a[i];

// Truy vấn tổng đoạn [L, R] (1-based):
long long sum = pref[R] - pref[L - 1];
```

### 3.3. Mảng cộng dồn 2 chiều (Prefix Sum 2D)
Tính tổng ma trận chữ nhật từ $(x_1, y_1)$ đến $(x_2, y_2)$ trong $O(1)$:
```cpp
// 1. Xây dựng mảng cộng dồn:
P[i][j] = A[i][j] + P[i-1][j] + P[i][j-1] - P[i-1][j-1];

// 2. Truy vấn hình chữ nhật [x1, y1] -> [x2, y2]:
long long sum = P[x2][y2] - P[x1-1][y2] - P[x2][y1-1] + P[x1-1][y1-1];
```

### 3.4. Mảng hiệu (Difference Array 1D)
Cộng giá trị $V$ vào đoạn $[L, R]$ trong $O(1)$:
```cpp
// 1. Cập nhật trong O(1):
diff[L] += V;
diff[R + 1] -= V;

// 2. Khôi phục mảng ban đầu trong O(N):
long long cur = 0;
for (int i = 1; i <= n; i++) {
    cur += diff[i];
    a[i] = cur;
}
```

### 3.5. Hai con trỏ / Cửa sổ trượt (Sliding Window)
Tìm đoạn con liên tiếp có tổng $\le S$ dài nhất trong $O(N)$:
```cpp
int left = 0, max_len = 0;
long long cur_sum = 0;
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

<a name="4-tim-kiem-nhi-phan"></a>
## 4. TÌM KIẾM NHỊ PHÂN & CHẶT NHỊ PHÂN KẾT QUẢ

### 4.1. Hàm có sẵn trong `<algorithm>`
* `binary_search(a.begin(), a.end(), x)`: Trả về `true/false` xem $x$ có trong mảng đã sắp xếp không.
* `lower_bound(a.begin(), a.end(), x)`: Trả về con trỏ/iterator đến phần tử đầu tiên $\ge x$.
* `upper_bound(a.begin(), a.end(), x)`: Trả về con trỏ/iterator đến phần tử đầu tiên $> x$.
* Số lượng phần tử có giá trị bằng $x$: `upper_bound(...) - lower_bound(...)`.

### 4.2. Khung thuật toán Chặt nhị phân kết quả (Vũ khí 5 điểm Bài 2)
```cpp
bool check(long long mid) {
    // Thuật toán kiểm tra với giá trị mid thì có khả thi không
    return true; // hoặc false
}

long long low = 1, high = 1e18, ans = -1;
while (low <= high) {
    long long mid = low + (high - low) / 2;
    if (check(mid)) {
        ans = mid;
        high = mid - 1; // Tìm giá trị nhỏ nhất thỏa mãn
    } else {
        low = mid + 1;
    }
}
```

---

<a name="5-cpp-stl--cu-phap"></a>
## 5. C++ STL & CÚ PHÁP TỐI ƯU

### 5.1. Bộ khung Template & Fast I/O
```cpp
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // freopen("BAITHI.INP", "r", stdin);
    // freopen("BAITHI.OUT", "w", stdout);

    return 0;
}
```

### 5.2. Hàm so sánh Comparator tùy biến trong `std::sort`
```cpp
struct ThiSinh {
    string ten;
    int diem, tuoi;
};

bool cmp(const ThiSinh &a, const ThiSinh &b) {
    if (a.diem != b.diem) return a.diem > b.diem; // Điểm cao xếp trước
    return a.tuoi < b.tuoi; // Bằng điểm: ít tuổi hơn xếp trước
}

sort(ds.begin(), ds.end(), cmp);
```

### 5.3. Hàng đợi ưu tiên (Priority Queue)
```cpp
#include <queue>
// Max-heap (mặc định):
priority_queue<int> pq_max;

// Min-heap (lấy số nhỏ nhất ra trước):
priority_queue<int, vector<int>, greater<int>> pq_min;

pq_min.push(x);
int min_val = pq_min.top(); // O(1)
pq_min.pop(); // O(log N)
```

---

<a name="6-quy-hoach-dong-dp"></a>
## 6. CÔNG THỨC QUY HOẠCH ĐỘNG (DP) KINH ĐIỂN

### 6.1. Dãy con tăng dài nhất (LIS) $O(N \log N)$
```cpp
vector<int> b; // b[k] là giá trị kết thúc nhỏ nhất của dãy con tăng độ dài k
for (int x : a) {
    auto it = lower_bound(b.begin(), b.end(), x);
    if (it == b.end()) b.push_back(x);
    else *it = x;
}
int lis_len = b.size();
```

### 6.2. Bài toán Balo 0/1 (Knapsack 1D Array)
```cpp
vector<long long> dp(W + 1, 0);
for (int i = 0; i < n; i++) {
    for (int w = W; w >= weight[i]; w--) { // DUYỆT NGƯỢC
        dp[w] = max(dp[w], dp[w - weight[i]] + value[i]);
    }
}
long long ans = dp[W];
```

### 6.3. Xâu con chung dài nhất (LCS)
```cpp
int dp[1005][1005];
for (int i = 1; i <= m; i++) {
    for (int j = 1; j <= n; j++) {
        if (s1[i - 1] == s2[j - 1]) dp[i][j] = dp[i - 1][j - 1] + 1;
        else dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
    }
}
```

---

<a name="7-do-thi--vet-can"></a>
## 7. ĐỒ THỊ & THUẬT TOÁN VÉT CẠN SUBTASK

### 7.1. Quay lui sinh tập con vét cạn Subtask 1 Bài 3 ($N \le 22$)
```cpp
void backtrack(int i, long long cur_sum, int count) {
    if (i == n) {
        if (cur_sum <= S) ans = max(ans, count);
        return;
    }
    backtrack(i + 1, cur_sum, count);           // Không chọn a[i]
    backtrack(i + 1, cur_sum + a[i], count + 1); // Có chọn a[i]
}
```

### 7.2. Duyệt BFS trên đồ thị (Đếm miền liên thông)
```cpp
vector<int> adj[MAX];
bool visited[MAX];

void bfs(int s) {
    queue<int> q;
    q.push(s);
    visited[s] = true;
    while (!q.empty()) {
        int u = q.front(); q.pop();
        for (int v : adj[u]) {
            if (!visited[v]) {
                visited[v] = true;
                q.push(v);
            }
        }
    }
}
```
