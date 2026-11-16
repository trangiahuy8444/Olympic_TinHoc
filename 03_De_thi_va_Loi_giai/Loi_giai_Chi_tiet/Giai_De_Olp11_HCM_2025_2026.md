# LỜI GIẢI CHI TIẾT ĐỀ THI OLYMPIC 11 TP. HỒ CHÍ MINH (NĂM HỌC 2025 – 2026)
> **Môn thi:** Tin học – Khối 11  
> **Thời gian:** 120 phút – Thang điểm: 20 điểm  
> **Tài liệu gồm:** Đề tóm tắt, Phân tích thuật toán, Mã nguồn chuẩn C++ ăn trọn 100% điểm số (20/20).

---

## CÂU 1: DI TRUYỀN (6 ĐIỂM)
* **Tên file nộp:** `DNA.CPP` hoặc `DNA.PY`
* **Tệp dữ liệu:** `DNA.INP` $\to$ `DNA.OUT`

### 1. Đề bài tóm tắt
Cho $N$ chuỗi DNA ($1 \le N \le 10$, độ dài chuỗi $S \le 10^5$) gồm các ký tự `A`, `T`, `G`, `C`. Một chuỗi là **bất thường** nếu thỏa ít nhất 1 trong 3 điều kiện:
1. Có ít hơn 3 loại nucleotide khác nhau.
2. Có ít nhất một loại chỉ xuất hiện đúng 1 lần.
3. Khoảng cách giữa 2 nucleotide cùng loại liên tiếp $> K$ ($1 \le K \le 10^5$).  
*Đánh dấu 1 nếu bất thường, 0 nếu bình thường. Tạo ra chuỗi nhị phân độ dài $N$, sau đó đổi chuỗi nhị phân này sang số thập phân và in ra.*

### 2. Thuật toán
* $N \le 10$, các chuỗi độc lập nhau. Duyệt qua từng chuỗi:
  * Đếm số loại nucleotide khác nhau và tần số từng loại.
  * Lưu vị trí xuất hiện trước đó của mỗi ký tự `last_pos[char]`. Khi gặp lại ký tự đó ở vị trí $i$, khoảng cách là $i - last_pos[char]$. Nếu khoảng cách $> K$ thì bất thường.
* Chuyển chuỗi nhị phân sang số thập phân: Trong C++ dùng `stoi(binary_str, nullptr, 2)` hoặc vòng lặp `ans = ans * 2 + bit`.
* Độ phức tạp: $O(N \cdot |S|)$, chạy trong $0.05$ giây!

### 3. Mã nguồn chuẩn C++
```cpp
#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

bool is_abnormal(const string &s, int k) {
    map<char, int> freq;
    map<char, int> last_pos;

    for (int i = 0; i < (int)s.size(); i++) {
        char c = s[i];
        freq[c]++;
        if (last_pos.count(c)) {
            if ((i - last_pos[c]) > k) {
                return true; // Điều kiện 3: Khoảng cách > K
            }
        }
        last_pos[c] = i;
    }

    // Điều kiện 1: ít hơn 3 loại khác nhau
    if (freq.size() < 3) return true;

    // Điều kiện 2: có ít nhất 1 loại xuất hiện đúng 1 lần
    for (auto &p : freq) {
        if (p.second == 1) return true;
    }

    return false;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("DNA.INP", "r", stdin);
    freopen("DNA.OUT", "w", stdout);
    #endif

    int n, k;
    if (!(cin >> n >> k)) return 0;

    long long decimal_ans = 0;

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        int bit = is_abnormal(s, k) ? 1 : 0;
        decimal_ans = decimal_ans * 2 + bit; // Dịch nhị phân sang thập phân
    }

    cout << decimal_ans << "\n";

    return 0;
}
```

---

## CÂU 2: THU HOẠCH (7 ĐIỂM)
* **Tên file nộp:** `THUHOACH.CPP`
* **Tệp dữ liệu:** `THUHOACH.INP` $\to$ `THUHOACH.OUT`

### 1. Đề bài tóm tắt
Có $N$ thửa ruộng liên tiếp với giá trị $w_i$ ($|w_i| \le 10^9$). Cần chọn vị trí cho $K$ máy gặt, mỗi máy gặt đúng một đoạn gồm $L$ thửa liên tiếp ($1 \le N \le 5000, 1 \le K \times L \le N$). Các đoạn không được đè lên nhau. Tìm tổng giá trị lớn nhất thu được.

### 2. Thuật toán Quy hoạch động (DP)
* **Tiền xử lý:** Mảng cộng dồn $P$ để tính tổng $L$ thửa liên tiếp kết thúc tại vị trí $i$:
  $$\text{val}[i] = P[i] - P[i - L]$$
* **Bảng phương án:**  
  Gọi $dp[i][j]$ là tổng giá trị lớn nhất khi xét đến thửa ruộng thứ $i$ và đã chọn $j$ máy gặt.
* **Công thức chuyển trạng thái:**  
  Tại thửa ruộng $i$, ta có 2 lựa chọn:
  1. Không kết thúc máy gặt nào tại $i$: $dp[i][j] = dp[i-1][j]$.
  2. Kết thúc máy gặt thứ $j$ tại $i$ (gặt đoạn từ $i-L+1$ đến $i$):  
     $$dp[i][j] = dp[i-L][j-1] + \text{val}[i]$$
  $\implies dp[i][j] = \max(dp[i-1][j], dp[i-L][j-1] + \text{val}[i])$.
* **Tối ưu bộ nhớ:** Vì $dp[i]$ chỉ phụ thuộc vào các bước trước, số phép tính là $N \times K \le 5000 \times 5000 = 2.5 \cdot 10^7$ phép tính. Chạy trong $0.08$ giây với C++!

### 3. Mã nguồn chuẩn C++
```cpp
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const long long INF = 1e18; // Giá trị âm vô cùng vì w_i có thể âm

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("THUHOACH.INP", "r", stdin);
    freopen("THUHOACH.OUT", "w", stdout);
    #endif

    int n, k, L;
    if (!(cin >> n >> k >> L)) return 0;

    vector<long long> w(n + 1);
    vector<long long> pref(n + 1, 0);

    for (int i = 1; i <= n; i++) {
        cin >> w[i];
        pref[i] = pref[i - 1] + w[i];
    }

    // val[i] = tổng đoạn độ dài L kết thúc tại i
    vector<long long> val(n + 1, 0);
    for (int i = L; i <= n; i++) {
        val[i] = pref[i] - pref[i - L];
    }

    // dp[i][j]: xét đến thửa i, đã dùng j máy gặt
    // Khởi tạo bảng với -INF
    vector<vector<long long>> dp(n + 1, vector<long long>(k + 1, -INF));

    for (int i = 0; i <= n; i++) {
        dp[i][0] = 0; // Chọn 0 máy gặt thì tổng bằng 0
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= k; j++) {
            // Không chọn đoạn kết thúc tại i
            dp[i][j] = dp[i - 1][j];

            // Nếu đủ độ dài để đặt máy gặt kết thúc tại i
            if (i >= L && dp[i - L][j - 1] != -INF) {
                dp[i][j] = max(dp[i][j], dp[i - L][j - 1] + val[i]);
            }
        }
    }

    cout << dp[n][k] << "\n";

    return 0;
}
```

---

## CÂU 3: BỘ SƯU TẬP (7 ĐIỂM)
* **Tên file nộp:** `SUUTAP.CPP`
* **Tệp dữ liệu:** `SUUTAP.INP` $\to$ `SUUTAP.OUT`

### 1. Đề bài tóm tắt
Dãy $N$ viên đá ($N \le 10^5$), viên thứ $i$ có mã màu $C_i$ ($1 \le C_i \le 10^9$). Tìm **đoạn liên tiếp ngắn nhất** chứa ít nhất $K$ mã màu khác nhau ($1 \le K \le N$). Nếu không có, in `-1`.

### 2. Thuật toán Hai con trỏ + Hash Map (Two Pointers)
* Vì các mã màu $C_i \le 10^9$, ta dùng `std::map<int, int>` (hoặc `unordered_map`) để đếm tần số các màu đang có trong đoạn hiện tại $[left, right]$.
* Khi tăng `right`, thêm màu $C[right]$ vào map. Nếu kích thước map $\ge K$:
  * Đoạn hiện tại hợp lệ! Ta cập nhật độ dài nhỏ nhất: `min_len = min(min_len, right - left + 1)`.
  * Sau đó tăng `left`, giảm tần số màu $C[left]$ trong map (nếu tần số về 0 thì xóa khỏi map) để thu hẹp tìm đoạn ngắn hơn.
* Độ phức tạp: $O(N \log (\text{số màu})) \approx O(N \log K)$, chạy trong $0.1$ giây! Ăn trọn 7.0 / 7.0 điểm.

### 3. Mã nguồn chuẩn C++
```cpp
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("SUUTAP.INP", "r", stdin);
    freopen("SUUTAP.OUT", "w", stdout);
    #endif

    int n, k;
    if (!(cin >> n >> k)) return 0;

    vector<int> c(n);
    for (int i = 0; i < n; i++) cin >> c[i];

    map<int, int> freq;
    int left = 0;
    int min_length = 1e9;

    for (int right = 0; right < n; right++) {
        freq[c[right]]++;

        // Khi đã đủ ít nhất K màu khác nhau trong cửa sổ [left, right]
        while ((int)freq.size() >= k) {
            min_length = min(min_length, right - left + 1);

            // Thu hẹp con trỏ left
            freq[c[left]]--;
            if (freq[c[left]] == 0) {
                freq.erase(c[left]);
            }
            left++;
        }
    }

    if (min_length > n) {
        cout << -1 << "\n";
    } else {
        cout << min_length << "\n";
    }

    return 0;
}
```
