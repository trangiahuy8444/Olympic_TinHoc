# BỘ GIÁO ÁN & BÀI TẬP TUẦN 01 (08/09 – 14/09/2026)
## CHUYÊN ĐỀ: NHẬP MÔN C++ COMPETITIVE CHO NGƯỜI BIẾT PYTHON & MẢNG CỘNG DỒN

---

### PHẦN I: GIÁO ÁN 90 PHÚT TRÊN LỚP

#### 1. Bảng đối chiếu cú pháp cốt lõi: Python vs C++
*Học sinh đã có tư duy logic từ Python, chỉ cần ánh xạ cú pháp sang C++ như bảng sau:*

| Thành phần | Python | C++ (Competitive) | Lưu ý quan trọng |
| :--- | :--- | :--- | :--- |
| **Kiểu số nguyên** | `a = 10` (tự mở rộng vô hạn) | `int a = 10;` hoặc `long long a = 10;` | `int` chỉ chứa đến $\approx 2 \cdot 10^9$. Nếu tổng mảng hoặc tích vượt $2 \cdot 10^9$ **bắt buộc dùng `long long`**. |
| **Nhập xuất cơ bản** | `n = int(input())` | `cin >> n;` / `cout << n << "\n";` | Dùng `\n` thay vì `endl` để chạy nhanh hơn. |
| **Vòng lặp đếm** | `for i in range(n):` | `for (int i = 0; i < n; i++)` | C++ tính chỉ số từ 0 hoặc 1 tùy thói quen bài toán. |
| **Câu lệnh rẽ nhánh**| `if a > b and b > 0:` | `if (a > b && b > 0) { ... }` | `and` $\to$ `&&`, `or` $\to$ `\|\|`, `not` $\to$ `!`. |
| **Mảng / Danh sách** | `a = [0] * n` | `vector<int> a(n);` hoặc `int a[100005];` | Khai báo mảng tĩnh kích thước lớn nên để **toàn cục (ngoài hàm main)**. |
| **Khai báo hàm** | `def calc(x, y): return x + y`| `long long calc(int x, int y) { return x + y; }` | C++ cần định nghĩa kiểu dữ liệu trả về và tham số. |

---

#### 2. Template C++ chuẩn phòng thi Olympic (Đọc file .INP, xuất .OUT)
*Trong kỳ thi Olympic TP.HCM, chương trình phải đọc từ `<TÊN_BÀI>.INP` và ghi vào `<TÊN_BÀI>.OUT`.*

```cpp
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    // Viết thuật toán chính ở đây
    int n;
    if (!(cin >> n)) return;
    cout << "Ket qua: " << n << "\n";
}

int main() {
    // 1. Tối ưu tốc độ đọc ghi dữ liệu (cực kỳ quan trọng để không bị TLE)
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // 2. Chuyển hướng nhập xuất file (thay TÊN_BÀI bằng tên trong đề)
    #ifndef ONLINE_JUDGE
    freopen("BAITHI.INP", "r", stdin);
    freopen("BAITHI.OUT", "w", stdout);
    #endif

    solve();

    return 0;
}
```

---

#### 3. Kỹ thuật Mảng cộng dồn (Prefix Sum) - "Chìa khóa" giải Bài 1 Olympic

**Bài toán dẫn nhập:** Cho mảng $A$ gồm $N$ phần tử ($N \le 10^5$). Cần trả lời $Q$ câu hỏi ($Q \le 10^5$), mỗi câu hỏi yêu cầu tính tổng các phần tử từ vị trí $L$ đến $R$ ($1 \le L \le R \le N$).

* **Cách làm ngây thơ (Vét cạn $O(Q \cdot N)$):**
  * Mỗi câu hỏi, duyệt từ $L$ đến $R$ để cộng dồn.
  * *Hậu quả:* $10^5 \times 10^5 = 10^{10}$ phép tính $\implies$ Cháy thời gian (TLE) ngay lập tức!
* **Cách làm tối ưu bằng Mảng cộng dồn ($O(N + Q)$):**
  * Xây dựng mảng $P$ với:  
    $$P[0] = 0$$  
    $$P[i] = P[i-1] + A[i] \quad (1 \le i \le N)$$
  * Khi đó, tổng đoạn $[L, R]$ tính ngay trong $O(1)$:  
    $$\sum_{k=L}^{R} A[k] = P[R] - P[L-1]$$

*Code minh họa C++ so sánh với Python:*

```cpp
// C++ Code: Prefix Sum
#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, q;
    cin >> n >> q;
    vector<long long> a(n + 1);
    vector<long long> prefix(n + 1, 0);

    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        prefix[i] = prefix[i - 1] + a[i]; // Chuẩn bị trong O(N)
    }

    while (q--) {
        int L, R;
        cin >> L >> R;
        cout << prefix[R] - prefix[L - 1] << "\n"; // Trả lời trong O(1)
    }

    return 0;
}
```

---

### PHẦN II: BỘ BÀI TẬP TỰ LUYỆN TẠI NHÀ (4 – 6 TIẾNG)

*Học sinh cài đặt và nộp bài trên [VNOI OJ](https://oj.vnoi.info/) hoặc nộp trực tiếp cho giáo viên bằng file `.cpp`.*

#### Bài 1: Chuyển đổi cú pháp (Làm quen C++)
* **Đề bài:** Cho số nguyên dương $N$ và dãy số $A_1, A_2, \dots, A_N$ ($N \le 10^5, |A_i| \le 10^9$). Hãy đếm số lượng số chẵn và tính tổng tất cả các số dương trong dãy.
* **Yêu cầu:** Viết bằng C++, chú ý dùng kiểu `long long` cho biến tổng.
* **Test mẫu:**
  ```text
  Input:
  5
  -2 3 4 5 -1
  Output:
  2
  12
  ```

#### Bài 2: Tổng đoạn con truy vấn (CSES - Static Range Sum Queries)
* **Đề bài:** Cho mảng gồm $N$ số nguyên dương và $Q$ truy vấn ($1 \le N, Q \le 2 \cdot 10^5$). Mỗi truy vấn gồm 2 số $a, b$ ($1 \le a \le b \le N$). Hãy in ra tổng các số từ vị trí $a$ đến vị trí $b$.
* **Mục tiêu:** Áp dụng thuần thục mảng cộng dồn `prefix[b] - prefix[a - 1]`.
* **Link nộp thực hành online:** [CSES Static Range Sum Queries](https://cses.fi/problemset/task/1646)

#### Bài 3: Đoạn con liên tiếp có tổng bằng $K$ (Subarray Sums I)
* **Đề bài:** Cho mảng gồm $N$ số nguyên dương ($N \le 2 \cdot 10^5$) và số nguyên $X$. Đếm số lượng đoạn con liên tiếp có tổng đúng bằng $X$.
* **Gợi ý 1 (Two Pointers):** Vì các phần tử là số nguyên dương, khi mở rộng đoạn thì tổng tăng, thu hẹp đoạn thì tổng giảm. Dùng 2 con trỏ `left` và `right` để duy trì tổng hiện tại.
* **Link nộp thực hành online:** [CSES Subarray Sums I](https://cses.fi/problemset/task/1660)

#### Bài 4: Bài thi thật Olympic TP.HCM 2024–2025 (Bài 1: NGHE NHẠC)
* **Tóm tắt đề:** An có $N$ bài hát, bài thứ $i$ dài $m_i$ phút. An có $K$ phút rảnh rỗi. An muốn nghe **một dãy liên tiếp** các bài hát sao cho số lượng bài hát là nhiều nhất và tổng thời gian không vượt quá $K$ ($1 \le N \le 10^5, 1 \le K \le 10^9, 1 \le m_i \le 10^4$).
* **Ràng buộc subtask:**
  * Subtask 1 (60% điểm): $N \le 10^3$.
  * Subtask 2 (40% điểm): $N \le 10^5$.
* **Nhiệm vụ của học sinh:**
  1. Thử viết code bằng C++ giải quyết subtask 1 bằng 2 vòng for ($O(N^2)$).
  2. Nâng cấp lên thuật toán Hai con trỏ (Two Pointers) chạy trong $O(N)$ để ăn trọn vẹn 100% số điểm (6.0 / 6.0 điểm).
* **Test mẫu:**
  ```text
  NGHENHAC.INP:
  5 20
  9 3 5 4 7

  NGHENHAC.OUT:
  4
  (Giải thích: Chọn 4 bài liên tiếp 3, 5, 4, 7 có tổng thời gian 19 <= 20).
  ```

---

### PHẦN III: HƯỚNG DẪN DÀNH CHO GIÁO VIÊN TRONG BUỔI ĐẦU TIÊN (08/09)
1. **Trước buổi học (10 phút):** Kiểm tra máy tính của học sinh đã cài đặt Code::Blocks (bản tích hợp MinGW), hướng dẫn các em tạo file mới (`Ctrl + Shift + N`) và test biên dịch thử bằng phím tắt `F9`.
2. **Trong buổi học:**
   * Cho học sinh xem một bài toán các em từng code bằng Python. Sau đó giáo viên gõ bài đó bằng C++ ngay trước mắt các em để các em thấy: C++ không đáng sợ, chỉ thêm dấu `;` và khai báo kiểu `int`/`long long`.
   * Hướng dẫn trực tiếp kỹ thuật mảng cộng dồn.
   * Giao 4 bài tập trên và hẹn deadline nộp code trước buổi học tuần sau.
