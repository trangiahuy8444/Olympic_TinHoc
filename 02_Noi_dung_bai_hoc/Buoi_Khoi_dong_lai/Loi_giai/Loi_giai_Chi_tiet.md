# LỜI GIẢI CHI TIẾT & MÃ NGUỒN C++ CHUẨN THI ĐẤU
## BỘ BÀI TẬP THỰC HÀNH & BÀI TẬP VỀ NHÀ (BUỔI KHỞI ĐỘNG LẠI)

> **Dành cho Giáo viên & Đội tuyển Olympic Tin học**  
> Mọi bài toán đều được tối ưu đạt 100% điểm Subtask với độ phức tạp $O(N)$ hoặc $O(N \log N)$.

---

## PHẦN 1: LỜI GIẢI 4 BÀI THỰC HÀNH TẠI LỚP

### BÀI 1: TÍNH TỔNG DÃY CẤP SỐ CỘNG (`SUMSEQ.cpp`)
```cpp
#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // freopen("SUMSEQ.INP", "r", stdin);
    // freopen("SUMSEQ.OUT", "w", stdout);

    long long A, B, D;
    if (!(cin >> A >> B >> D)) return 0;

    if (A > B) {
        cout << 0 << "\n";
        return 0;
    }

    // Số lượng phần tử n
    long long n = (B - A) / D + 1;
    // Phần tử cuối cùng trong dãy
    long long last = A + (n - 1) * D;

    // Tổng n * (A + last) / 2
    // Để an toàn tránh tràn số tích, nếu n chẵn chia 2 trước, nếu không chia (A + last)
    long long ans;
    if (n % 2 == 0) {
        ans = (n / 2) * (A + last);
    } else {
        ans = n * ((A + last) / 2);
    }

    cout << ans << "\n";
    return 0;
}
```

---

### BÀI 2: ĐẾM CẶP TỔNG BẰNG K (`PAIRSUM.cpp`)
```cpp
#include <iostream>
#include <vector>

using namespace std;

const int MAX_VAL = 2000005;
int cnt[MAX_VAL] = {0}; // Mảng đếm tần số toàn cục

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // freopen("PAIRSUM.INP", "r", stdin);
    // freopen("PAIRSUM.OUT", "w", stdout);

    int n, k;
    if (!(cin >> n >> k)) return 0;

    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    long long ans = 0;
    for (int i = 0; i < n; i++) {
        int target = k - a[i];
        if (target >= 0 && target < MAX_VAL) {
            ans += cnt[target];
        }
        if (a[i] >= 0 && a[i] < MAX_VAL) {
            cnt[a[i]]++;
        }
    }

    cout << ans << "\n";
    return 0;
}
```

---

### BÀI 3: TRUY VẤN TỔNG ĐOẠN LIÊN TỤC (`RANGESUM.cpp`)
```cpp
#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // freopen("RANGESUM.INP", "r", stdin);
    // freopen("RANGESUM.OUT", "w", stdout);

    int n, q;
    if (!(cin >> n >> q)) return 0;

    vector<long long> pref(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        long long val;
        cin >> val;
        pref[i] = pref[i - 1] + val;
    }

    while (q--) {
        int l, r;
        cin >> l >> r;
        cout << pref[r] - pref[l - 1] << "\n";
    }

    return 0;
}
```

---

### BÀI 4: TÌM CẶP CÓ HIỆU BẰNG K (`DIFFK.cpp`)
```cpp
#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // freopen("DIFFK.INP", "r", stdin);
    // freopen("DIFFK.OUT", "w", stdout);

    int n;
    long long k;
    if (!(cin >> n >> k)) return 0;

    vector<long long> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    int i = 0, j = 1;
    bool found = false;

    while (i < n && j < n) {
        if (i != j && a[j] - a[i] == k) {
            found = true;
            break;
        } else if (a[j] - a[i] < k) {
            j++;
        } else {
            i++;
        }
        if (i == j) j++;
    }

    if (found) cout << "YES\n";
    else cout << "NO\n";

    return 0;
}
```

---

## PHẦN 2: LỜI GIẢI 5 BÀI TẬP VỀ NHÀ

### BÀI 1: XÂU ĐỐI XỨNG NÂNG CAO (`PALIN.cpp`)
```cpp
#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // freopen("PALIN.INP", "r", stdin);
    // freopen("PALIN.OUT", "w", stdout);

    string s;
    if (!getline(cin, s)) return 0;

    string clean = "";
    for (char c : s) {
        if (isalnum(c)) {
            clean += tolower(c);
        }
    }

    int left = 0, right = (int)clean.length() - 1;
    bool is_palindrome = true;

    while (left < right) {
        if (clean[left] != clean[right]) {
            is_palindrome = false;
            break;
        }
        left++;
        right--;
    }

    if (is_palindrome) cout << "YES\n";
    else cout << "NO\n";

    return 0;
}
```

---

### BÀI 2: PHẦN TỬ ĐA SỐ (`MAJORITY.cpp`)
```cpp
#include <iostream>
#include <vector>

using namespace std;

const int MAX_VAL = 1000005;
int cnt[MAX_VAL] = {0};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // freopen("MAJORITY.INP", "r", stdin);
    // freopen("MAJORITY.OUT", "w", stdout);

    int n;
    if (!(cin >> n)) return 0;

    int ans = -1;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        cnt[x]++;
        if (cnt[x] > n / 2) {
            ans = x;
        }
    }

    cout << ans << "\n";
    return 0;
}
```

---

### BÀI 3: ĐOẠN CON CHIA HẾT CHO 3 (`DIV3.cpp`)
```cpp
#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // freopen("DIV3.INP", "r", stdin);
    // freopen("DIV3.OUT", "w", stdout);

    int n;
    if (!(cin >> n)) return 0;

    long long cnt_rem[3] = {0};
    cnt_rem[0] = 1; // Trường hợp đoạn bắt đầu từ chỉ số 1

    long long cur_sum = 0;
    long long ans = 0;

    for (int i = 0; i < n; i++) {
        long long val;
        cin >> val;
        cur_sum = (cur_sum + val) % 3;
        if (cur_sum < 0) cur_sum += 3;

        ans += cnt_rem[cur_sum];
        cnt_rem[cur_sum]++;
    }

    cout << ans << "\n";
    return 0;
}
```

---

### BÀI 4: ĐOẠN CON NGẮN NHẤT ĐẠT TỔNG S (`MINSUB.cpp`)
```cpp
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // freopen("MINSUB.INP", "r", stdin);
    // freopen("MINSUB.OUT", "w", stdout);

    int n;
    long long s;
    if (!(cin >> n >> s)) return 0;

    vector<long long> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    int left = 0;
    long long cur_sum = 0;
    int min_len = n + 1;

    for (int right = 0; right < n; right++) {
        cur_sum += a[right];

        while (cur_sum >= s) {
            min_len = min(min_len, right - left + 1);
            cur_sum -= a[left];
            left++;
        }
    }

    if (min_len > n) cout << -1 << "\n";
    else cout << min_len << "\n";

    return 0;
}
```

---

### BÀI 5: QUẢN LÝ ĐẶT BÀN NHÀ HÀNG (`RESTAURANT.cpp`)
```cpp
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int MAX_TIME = 1000005;
int diff_tbl[MAX_TIME] = {0};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // freopen("RESTAURANT.INP", "r", stdin);
    // freopen("RESTAURANT.OUT", "w", stdout);

    int n;
    if (!(cin >> n)) return 0;

    int max_r = 0;
    for (int i = 0; i < n; i++) {
        int l, r;
        cin >> l >> r;
        diff_tbl[l] += 1;
        diff_tbl[r + 1] -= 1;
        max_r = max(max_r, r);
    }

    int cur_tables = 0;
    int ans = 0;

    for (int t = 1; t <= max_r; t++) {
        cur_tables += diff_tbl[t];
        ans = max(ans, cur_tables);
    }

    cout << ans << "\n";
    return 0;
}
```
