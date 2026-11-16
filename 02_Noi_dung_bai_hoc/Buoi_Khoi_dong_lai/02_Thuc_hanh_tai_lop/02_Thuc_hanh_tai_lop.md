# PHIẾU THỰC HÀNH TẠI LỚP (IN-CLASS PRACTICE)
## CHỦ ĐỀ: CHUYỂN GIAO THI ĐẤU — VÀO RA TỆP, TRÁNH TLE VÀ KỸ THUẬT MẢNG $O(N)$

> **Đơn vị:** Trường Quốc tế Á Châu (The Asian International School) — Tổ Tin học  
> **Khối lớp:** Đội tuyển Olympic Tin học 11 (Năm học 2026 – 2027)  
> **Thời lượng thực hành:** 45 – 60 phút trực tiếp trên máy phòng Lab.  
> **Môi trường:** Code::Blocks / Dev-C++ / VS Code (Cờ biên dịch `-std=c++17`).  
> **Quy định chung:** Mỗi bài nộp là một file `.cpp`. Chương trình đọc dữ liệu từ file `.INP` và xuất kết quả ra file `.OUT` tương ứng.

---

### BÀI 1: TÍNH TỔNG DÃY CẤP SỐ CỘNG
* **Tên tệp chương trình:** `SUMSEQ.cpp`
* **Tệp vào:** `SUMSEQ.INP`
* **Tệp ra:** `SUMSEQ.OUT`
* **Giới hạn thời gian:** 1.0 giây / **Giới hạn bộ nhớ:** 256 MB

#### Đề bài:
Cho ba số nguyên dương $A, B, D$ ($1 \le A \le B \le 10^9, 1 \le D \le 10^5$). Dãy số cấp số cộng gồm các số có dạng:
$$A, A + D, A + 2D, \dots, A + kD \le B$$
Hãy tính tổng của tất cả các phần tử thuộc cấp số cộng này không vượt quá $B$.

#### Subtask:
* **Subtask 1 (50% số điểm):** $B \le 10^6$ (Có thể dùng vòng lặp `while/for`).
* **Subtask 2 (50% số điểm):** $B \le 10^9$ (Bắt buộc dùng công thức toán học $O(1)$ và xử lý `long long`).

#### Input mẫu:
```text
3 15 4
```
*(Các số trong dãy là: 3, 7, 11, 15)*

#### Output mẫu:
```text
36
```

#### Gợi ý kỹ thuật & Bẫy test:
* Số lượng phần tử $n = \frac{B - A}{D} + 1$.
* Phần tử cuối cùng là $Last = A + (n - 1) \cdot D$.
* Tổng là: $S = \frac{n \cdot (A + Last)}{2}$.
* **Cực kỳ cẩn thận:** Tích $n \cdot (A + Last)$ có thể lên tới $(10^9) \cdot (2 \cdot 10^9) = 2 \cdot 10^{18}$, vừa chạm ngưỡng cực đại của `long long`. Bắt buộc phải khai báo biến `long long` toàn bộ!

---

### BÀI 2: ĐẾM CẶP TỔNG BẰNG K BẰNG MẢNG ĐẾM $O(N)$
* **Tên tệp chương trình:** `PAIRSUM.cpp`
* **Tệp vào:** `PAIRSUM.INP`
* **Tệp ra:** `PAIRSUM.OUT`
* **Giới hạn thời gian:** 1.0 giây / **Giới hạn bộ nhớ:** 256 MB

#### Đề bài:
Cho mảng $A$ gồm $N$ số nguyên không âm ($1 \le N \le 10^5, 0 \le A_i \le 10^6$) và một số nguyên $K$ ($0 \le K \le 2 \cdot 10^6$).  
Hãy đếm số cặp chỉ số $(i, j)$ thỏa mãn $1 \le i < j \le N$ sao cho:
$$A_i + A_j = K$$

#### Subtask:
* **Subtask 1 (40% số điểm):** $N \le 1000$ (Duyệt 2 vòng lặp $O(N^2)$).
* **Subtask 2 (60% số điểm):** $N \le 10^5$ (Thuật toán $O(N)$ bằng mảng đếm tần số).

#### Input mẫu:
```text
6 8
3 5 3 5 4 4
```

#### Output mẫu:
```text
5
```
*(Giải thích: Các cặp hợp lệ là $(A_1, A_2)=3+5, (A_1, A_4)=3+5, (A_3, A_2)=3+5, (A_3, A_4)=3+5, (A_5, A_6)=4+4$)*

#### Khung code mẫu hướng dẫn học sinh:
```cpp
const int MAX_VAL = 2000005;
int cnt[MAX_VAL] = {0}; // Mảng đếm toàn cục

long long ans = 0;
for (int i = 0; i < n; i++) {
    int target = k - a[i];
    if (target >= 0 && target < MAX_VAL) {
        ans += cnt[target]; // Cộng số lượng phần tử trước đó kết hợp được
    }
    cnt[a[i]]++; // Nạp phần tử hiện tại vào mảng đếm
}
```

---

### BÀI 3: TRUY VẤN TỔNG ĐOẠN LIÊN TỤC (PREFIX SUM)
* **Tên tệp chương trình:** `RANGESUM.cpp`
* **Tệp vào:** `RANGESUM.INP`
* **Tệp ra:** `RANGESUM.OUT`
* **Giới hạn thời gian:** 1.0 giây / **Giới hạn bộ nhớ:** 256 MB

#### Đề bài:
Cho dãy số $A$ gồm $N$ số nguyên ($1 \le N \le 10^5, |A_i| \le 10^9$). Bạn được cho $Q$ truy vấn ($1 \le Q \le 10^5$), mỗi truy vấn là một cặp số $(L, R)$ ($1 \le L \le R \le N$).  
Với mỗi truy vấn, hãy in ra tổng các phần tử từ vị trí $L$ đến $R$: $A_L + A_{L+1} + \dots + A_R$.

#### Subtask:
* **Subtask 1 (30% số điểm):** $N, Q \le 1000$ (Vòng for tính tổng từng truy vấn $O(N \cdot Q)$).
* **Subtask 2 (70% số điểm):** $N, Q \le 10^5$ (Bắt buộc dùng Mảng cộng dồn $O(N + Q)$).

#### Input mẫu:
```text
5 3
2 -3 5 10 -4
1 3
2 4
1 5
```

#### Output mẫu:
```text
4
12
10
```

---

### BÀI 4: TÌM CẶP PHẦN TỬ BẰNG HAI CON TRỎ (TWO POINTERS)
* **Tên tệp chương trình:** `DIFFK.cpp`
* **Tệp vào:** `DIFFK.INP`
* **Tệp ra:** `DIFFK.OUT`
* **Giới hạn thời gian:** 1.0 giây / **Giới hạn bộ nhớ:** 256 MB

#### Đề bài:
Cho mảng $A$ gồm $N$ số nguyên ($2 \le N \le 10^5, |A_i| \le 10^9$) đã được **sắp xếp theo thứ tự tăng dần**, và một số nguyên dương $K$ ($1 \le K \le 10^9$).  
Hãy kiểm tra xem có tồn tại hai chỉ số $i \ne j$ sao cho hiệu của chúng bằng $K$ không:
$$A_j - A_i = K$$
Nếu có, in ra `YES`, ngược lại in ra `NO`.

#### Input mẫu 1:
```text
5 4
1 3 5 8 12
```
#### Output mẫu 1:
```text
YES
```
*(Giải thích: $5 - 1 = 4$ hoặc $12 - 8 = 4$)*

#### Input mẫu 2:
```text
4 10
2 4 8 11
```
#### Output mẫu 2:
```text
NO
```

#### Hướng dẫn kỹ thuật:
* Dùng 2 con trỏ `i = 0` và `j = 1`.
* Khi $A_j - A_i < K$, ta tăng `j++` để nới rộng hiệu.
* Khi $A_j - A_i > K$, ta tăng `i++` để thu hẹp hiệu.
* Nếu $i == j$, tăng `j++`.
* Độ phức tạp toàn bài: $O(N)$.
