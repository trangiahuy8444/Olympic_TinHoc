# SỔ TAY TRA CỨU C++ STL DÀNH CHO NGƯỜI DÙNG PYTHON
## TÀI LIỆU ĐỌC THAM KHẢO CHO ĐỘI TUYỂN OLYMPIC TIN HỌC 11

Tài liệu này được biên soạn nhằm giúp các bạn học sinh đã quen thuộc với Python nhanh chóng tra cứu và ánh xạ các cấu trúc dữ liệu, hàm có sẵn sang **C++ STL (Standard Template Library)**.

---

### 1. CÁC KIỂU DỮ LIỆU CƠ BẢN & BẪY TRÀN SỐ

| Đặc điểm | Python | C++ | Chú ý khi thi Olympic |
| :--- | :--- | :--- | :--- |
| Số nguyên thường | `int` (vô hạn độ lớn) | `int` ($-2 \cdot 10^9 \dots 2 \cdot 10^9$) | Dùng cho chỉ số vòng lặp, kích thước mảng $N \le 10^6$. |
| Số nguyên lớn | `int` | `long long` ($-9 \cdot 10^{18} \dots 9 \cdot 10^{18}$) | Dùng khi tính tổng, tích, thời gian, tiền tệ $\ge 10^9$. |
| Phép nhân tránh tràn | `a * b` | `1LL * a * b` | Nếu `a, b` là `int`, phép nhân `a * b` sẽ tràn số **trước khi** gán vào biến `long long`. Bắt buộc ép kiểu: `1LL * a * b`. |
| Số thực | `float` | `double` | Định dạng in số thực 2 chữ số: `cout << fixed << setprecision(2) << ans;` |
| Boolean | `True`, `False` | `true`, `false` | Có thể dùng `1` và `0`. |

---

### 2. BẢNG TRA CỨU CẤU TRÚC DỮ LIỆU TƯƠNG ĐƯƠNG

#### 2.1. Danh sách (List vs Vector)

```python
# PYTHON
a = []
a.append(10)
x = a.pop()
n = len(a)
a.sort()
a.reverse()
first = a[0]
last = a[-1]
```

```cpp
// C++ EQUIVALENT
#include <vector>
#include <algorithm>

vector<int> a;
a.push_back(10);
int x = a.back(); a.pop_back();
int n = a.size();
sort(a.begin(), a.end());
reverse(a.begin(), a.end());
int first = a[0];
int last = a.back();
```

---

#### 2.2. Tập hợp (Set vs std::set)

```python
# PYTHON
s = set()
s.add(5)
if 5 in s:
    s.remove(5)
n = len(s)
# Duyệt tập hợp
for x in s:
    print(x)
```

```cpp
// C++ EQUIVALENT
#include <set>

set<int> s; // Tự động sắp xếp tăng dần, các phần tử duy nhất
s.insert(5);
if (s.count(5)) { // hoặc s.find(5) != s.end()
    s.erase(5);
}
int n = s.size();
// Duyệt tập hợp
for (int x : s) {
    cout << x << " ";
}
```

---

#### 2.3. Từ điển / Bảng băm (Dict vs std::map / unordered_map)

```python
# PYTHON
d = {}
d["apple"] = 3
d["banana"] = 5
if "apple" in d:
    d["apple"] += 1
# Đếm tần số phần tử
from collections import defaultdict
freq = defaultdict(int)
for x in arr:
    freq[x] += 1
```

```cpp
// C++ EQUIVALENT
#include <map>
#include <string>

map<string, int> d; // Tự động sắp xếp key theo thứ tự từ điển, tìm kiếm O(log N)
d["apple"] = 3;
d["banana"] = 5;
if (d.count("apple")) {
    d["apple"]++;
}

// Đếm tần số phần tử mảng trong C++ (tự động khởi tạo 0)
map<int, int> freq;
for (int x : arr) {
    freq[x]++;
}
```

---

#### 2.4. Cặp giá trị (Tuple 2 phần tử vs std::pair)

```python
# PYTHON
p = (10, 20)
x, y = p
points = [(1, 2), (0, 5), (1, 1)]
points.sort() # Tự động so sánh phần tử đầu, nếu bằng thì so phần tử sau
```

```cpp
// C++ EQUIVALENT
#include <utility>
#include <vector>
#include <algorithm>

pair<int, int> p = {10, 20};
int x = p.first;
int y = p.second;

vector<pair<int, int>> points = { {1, 2}, {0, 5}, {1, 1} };
sort(points.begin(), points.end()); // C++ tự động so sánh first rồi đến second!
```

---

#### 2.5. Hàng đợi hai đầu (collections.deque vs std::deque)

```python
# PYTHON
from collections import deque
dq = deque()
dq.append(1)       # thêm vào cuối
dq.appendleft(2)   # thêm vào đầu
dq.pop()           # lấy ra ở cuối
dq.popleft()       # lấy ra ở đầu
```

```cpp
// C++ EQUIVALENT
#include <deque>

deque<int> dq;
dq.push_back(1);   // thêm vào cuối
dq.push_front(2);  // thêm vào đầu
dq.pop_back();     // xóa ở cuối
dq.pop_front();    // xóa ở đầu
int front_val = dq.front();
int back_val = dq.back();
```

---

### 3. CÁC HÀM TOÁN HỌC & TIỆN ÍCH CỐT LÕI

| Chức năng | Python | C++ |
| :--- | :--- | :--- |
| Ước chung lớn nhất | `math.gcd(a, b)` | `std::gcd(a, b)` (thư viện `<numeric>`) |
| Căn bậc hai nguyên | `math.isqrt(n)` | `sqrt(n)` (thư viện `<cmath>`) |
| Lũy thừa | `pow(a, b)` hoặc `a**b` | `pow(a, b)` hoặc tự viết hàm lũy thừa nhanh |
| Giá trị tuyệt đối | `abs(x)` | `abs(x)` (hoặc `llabs(x)` cho `long long`) |
| Giá trị lớn nhất / nhỏ nhất | `max(a, b)`, `min(a, b)` | `max(a, b)`, `min(a, b)` (thư viện `<algorithm>`) |
| Tìm nhị phân | `bisect.bisect_left(a, x)` | `lower_bound(a.begin(), a.end(), x) - a.begin()` |
| Tìm nhị phân trên | `bisect.bisect_right(a, x)` | `upper_bound(a.begin(), a.end(), x) - a.begin()` |
