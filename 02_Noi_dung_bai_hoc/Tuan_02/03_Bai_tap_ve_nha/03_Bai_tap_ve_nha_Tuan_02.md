# BỘ BÀI TẬP VỀ NHÀ TUẦN 02: MẢNG 1 CHIỀU & VÒNG LẶP NÂNG CAO
## TRƯỜNG QUỐC TẾ Á CHÂU -- ĐỘI TUYỂN OLYMPIC TIN HỌC 11 (2026 -- 2027)

> **Mục tiêu học tập:**  
> 1. Thành thạo kỹ năng khai báo, nhập xuất và duyệt mảng 1 chiều chỉ số `0` hoặc `1`.  
> 2. Rèn luyện tư duy tìm kiếm (Max, Min, đếm tần số, kiểm tra tính chất mảng).  
> 3. Làm quen chuẩn tệp thi đấu Competitive Programming (`.INP` / `.OUT`).  
> 4. Rèn luyện phân tích độ phức tạp thời gian và tránh bẫy tràn số (`long long`).

---

### CẤU TRÚC PHÂN TẦNG (10 BÀI TẬP)
* **Phần A (Bài 1 -- 4):** Nhập xuất & Thao tác căn bản trên Mảng (Khởi động).
* **Phần B (Bài 5 -- 8):** Duyệt mảng, Đếm tần số, Kiểm tra tính chất & Vào ra tệp.
* **Phần C (Bài 9 -- 10):** Vòng lặp lồng nhau & Thử thách tư duy Olympic.

---

## PHẦN A: THAO TÁC CĂN BẢN TRÊN MẢNG (MỨC 1)

### BÀI 1: LIỆT KÊ CÁC PHẦN TỬ CHẴN
* **Đề bài:** Nhập vào số nguyên dương $N$ ($1 \le N \le 10^5$) và mảng gồm $N$ số nguyên $A_1, A_2, \dots, A_N$ ($|A_i| \le 10^9$).
  Hãy in ra tất cả các số chẵn trong mảng theo đúng thứ tự xuất hiện, mỗi số cách nhau một dấu cách. Nếu không có số chẵn nào, in ra `-1`.
* **Input:**
  * Dòng 1: Số nguyên dương $N$.
  * Dòng 2: $N$ số nguyên cách nhau một khoảng trắng.
* **Output:** Dãy các số chẵn tìm được, hoặc `-1`.
* **Ví dụ:**
  * **Input:**
    ```text
    6
    1 4 7 8 10 3
    ```
  * **Output:**
    ```text
    4 8 10
    ```

---

### BÀI 2: TÌM MAX, MIN VÀ ĐỘ CHÊNH LỆCH
* **Đề bài:** Cho mảng $A$ gồm $N$ số nguyên ($1 \le N \le 10^5$, $|A_i| \le 10^9$).
  Hãy tìm giá trị lớn nhất ($Max$), giá trị nhỏ nhất ($Min$) và hiệu số $(Max - Min)$ của mảng.
* **Input:**
  * Dòng 1: Số nguyên $N$.
  * Dòng 2: $N$ số nguyên của mảng $A$.
* **Output:** In ra trên 1 dòng gồm 3 số nguyên: $Max$, $Min$ và $Max - Min$.
* **Ví dụ:**
  * **Input:**
    ```text
    5
    -3 7 2 15 -8
    ```
  * **Output:**
    ```text
    15 -8 23
    ```
* **Lưu ý:** Độ chênh lệch $(Max - Min)$ có thể lên tới $2 \cdot 10^9$, dùng `long long` cho an toàn tuyệt đối. Khởi tạo `max_val = -2e18` hoặc `A[0]`.

---

### BÀI 3: TỔNG ĐẦU, CUỐI VÀ TRUNG TÂM
* **Đề bài:** Cho số nguyên dương lẻ $N$ ($3 \le N \le 10^5$, $N$ là số lẻ) và dãy số $A_1, A_2, \dots, A_N$ ($|A_i| \le 10^9$).
  Hãy tính tổng của:
  1. Phần tử đầu tiên ($A_1$).
  2. Phần tử ở chính giữa dãy ($A_{(N+1)/2}$).
  3. Phần tử cuối cùng ($A_N$).
* **Input:** Dòng 1 chứa số $N$; Dòng 2 chứa $N$ số nguyên.
* **Output:** Một số nguyên duy nhất là tổng 3 phần tử trên.
* **Ví dụ:**
  * **Input:**
    ```text
    5
    10 20 30 40 50
    ```
  * **Output:**
    ```text
    90
    ```
    *(Vì 10 + 30 + 50 = 90)*.

---

### BÀI 4: ĐẾM VÀ TÍNH TỔNG CÁC SỐ DƯƠNG
* **Đề bài:** Cho mảng $A$ gồm $N$ số nguyên ($1 \le N \le 10^5$, $|A_i| \le 10^9$). Hãy đếm số lượng các phần tử có giá trị lớn hơn hẳn 0 ($A_i > 0$) và tính tổng của các phần tử dương đó.
* **Input:** Dòng 1 là số $N$; Dòng 2 là $N$ phần tử của mảng.
* **Output:** Gồm 2 số trên một dòng: số lượng phần tử dương và tổng các phần tử dương.
* **Ví dụ:**
  * **Input:**
    ```text
    6
    -2 5 0 8 -4 10
    ```
  * **Output:**
    ```text
    3 23
    ```
    *(Các số dương là: 5, 8, 10 $\implies$ Số lượng: 3; Tổng: 5 + 8 + 10 = 23)*.

---

## PHẦN B: DUYỆT MẢNG, ĐẾM TẦN SỐ & CHUẨN TỆP (MỨC 2)

### BÀI 5: ĐẾM SỐ LẦN XUẤT HIỆN CỦA K
* **Đề bài:** Cho mảng $A$ gồm $N$ số nguyên và một số nguyên $K$ ($1 \le N \le 10^5$, $|A_i|, |K| \le 10^9$).
  Hãy đếm xem giá trị $K$ xuất hiện bao nhiêu lần trong mảng $A$. Đồng thời in ra vị trí xuất hiện đầu tiên (chỉ số tính từ 1) của $K$. Nếu $K$ không có trong mảng, vị trí in ra `-1`.
* **Input:**
  * Dòng 1: Hai số nguyên $N$ và $K$.
  * Dòng 2: $N$ số nguyên của mảng $A$.
* **Output:** Dòng 1 in số lần xuất hiện; Dòng 2 in vị trí xuất hiện đầu tiên.
* **Ví dụ:**
  * **Input:**
    ```text
    7 3
    1 3 5 3 7 3 9
    ```
  * **Output:**
    ```text
    3
    2
    ```

---

### BÀI 6: ĐẢO NGƯỢC MẢNG (CHUẨN TỆP DAO.INP / DAO.OUT)
* **Đề bài:** Để làm quen với format thi đấu chính thức của HSG Tin học, bài này yêu cầu đọc dữ liệu từ tệp `DAO.INP` và ghi kết quả vào tệp `DAO.OUT`.
  Cho mảng gồm $N$ số nguyên ($1 \le N \le 10^5$). Hãy in mảng theo thứ tự đảo ngược từ phần tử cuối cùng về phần tử đầu tiên.
* **Tệp đầu vào (`DAO.INP`):**
  * Dòng 1: Số nguyên dương $N$.
  * Dòng 2: $N$ số nguyên.
* **Tệp đầu ra (`DAO.OUT`):**
  * Ghi ra mảng sau khi đảo ngược, các phần tử cách nhau một dấu cách.
* **Ví dụ:**
  * `DAO.INP`:
    ```text
    4
    1 2 3 4
    ```
  * `DAO.OUT`:
    ```text
    4 3 2 1
    ```
* **Kỹ thuật C++ cần dùng:**
  ```cpp
  freopen("DAO.INP", "r", stdin);
  freopen("DAO.OUT", "w", stdout);
  ```

---

### BÀI 7: KIỂM TRA DÃY SỐ TĂNG DẦN
* **Đề bài:** Dãy số $A_1, A_2, \dots, A_N$ được gọi là dãy tăng dần nếu $A_i < A_{i+1}$ với mọi $1 \le i \le N-1$.
  Cho mảng $N$ phần tử ($2 \le N \le 10^5$, $|A_i| \le 10^9$). Hãy kiểm tra dãy số có phải là dãy tăng dần hay không?
* **Input:** Dòng 1 là $N$; Dòng 2 là $N$ phần tử.
* **Output:** In ra `YES` nếu dãy tăng dần, ngược lại in `NO`.
* **Ví dụ:**
  * **Input:**
    ```text
    5
    1 3 7 9 12
    ```
  * **Output:** `YES`
  * **Input:**
    ```text
    4
    2 5 5 9
    ```
  * **Output:** `NO` *(Vì có 2 phần tử bằng nhau, không thỏa mãn tăng ngặt)*.

---

### BÀI 8: ĐẾM SỐ NGUYÊN TỐ TRONG MẢNG
* **Đề bài:** Cho mảng $A$ gồm $N$ số nguyên dương ($1 \le N \le 10^4$, $1 \le A_i \le 10^6$).
  Hãy đếm số lượng các số nguyên tố có mặt trong mảng và tính tổng của chúng.
* **Input:** Dòng 1: Số $N$. Dòng 2: $N$ số nguyên dương.
* **Output:** Dòng 1: Số lượng số nguyên tố. Dòng 2: Tổng các số nguyên tố.
* **Ví dụ:**
  * **Input:**
    ```text
    6
    1 2 3 4 5 6
    ```
  * **Output:**
    ```text
    3
    10
    ```
    *(Các số nguyên tố: 2, 3, 5 $\implies$ Số lượng: 3; Tổng: 2 + 3 + 5 = 10; Số 1 không phải số nguyên tố)*.

---

## PHẦN C: VÒNG LẶP LỒNG NHAU & THỬ THÁCH OLYMPIC (MỨC 3)

### BÀI 9: ĐẾM SỐ CẶP CÓ TỔNG BẰNG S
* **Đề bài:** Cho mảng $A$ gồm $N$ số nguyên và một số nguyên $S$ ($2 \le N \le 2000$, $|A_i|, |S| \le 10^9$).
  Hãy đếm số lượng cặp chỉ số $(i, j)$ thỏa mãn $1 \le i < j \le N$ sao cho:
  $$A_i + A_j = S$$
* **Input:**
  * Dòng 1: Hai số nguyên $N$ và $S$.
  * Dòng 2: $N$ số nguyên của mảng $A$.
* **Output:** Số lượng cặp thỏa mãn.
* **Ví dụ:**
  * **Input:**
    ```text
    5 8
    3 5 2 6 5
    ```
  * **Output:**
    ```text
    3
    ```
    *(Các cặp chỉ số thỏa mãn: $(1, 2)$ vì $3 + 5 = 8$; $(1, 5)$ vì $3 + 5 = 8$; $(3, 4)$ vì $2 + 6 = 8$)*.
* **Tư duy thuật toán:** Dùng 2 vòng lặp lồng nhau duyệt mọi cặp $(i, j)$ với $j > i$:
  ```cpp
  int dem = 0;
  for (int i = 0; i < n; ++i) {
      for (int j = i + 1; j < n; ++j) {
          if (1LL * a[i] + a[j] == s) dem++;
      }
  }
  ```
  Số phép tính: $\approx \frac{N^2}{2} = \frac{2000^2}{2} = 2 \cdot 10^6$ phép tính $\implies$ Chạy mất $\approx 0.01$ giây (Rất an toàn).

---

### BÀI 10: ĐOẠN CON LIÊN TIẾP CÓ TỔNG LỚN NHẤT
* **Đề bài (Bài toán kinh điển Kadane Algorithm):**
  Cho mảng $A$ gồm $N$ số nguyên ($1 \le N \le 10^5$, $|A_i| \le 10^6$).
  Một đoạn con liên tiếp của mảng $A$ là dãy các phần tử $A_i, A_{i+1}, \dots, A_j$ ($1 \le i \le j \le N$).
  Hãy tìm một đoạn con liên tiếp có tổng các phần tử lớn nhất.
* **Input:** Dòng 1 chứa số nguyên $N$; Dòng 2 chứa $N$ số nguyên.
* **Output:** Một số nguyên duy nhất là tổng lớn nhất của đoạn con liên tiếp tìm được.
* **Ví dụ:**
  * **Input:**
    ```text
    8
    -2 -3 4 -1 -2 1 5 -3
    ```
  * **Output:**
    ```text
    7
    ```
    *(Đoạn con liên tiếp có tổng lớn nhất là $[4, -1, -2, 1, 5]$ với tổng $4 + (-1) + (-2) + 1 + 5 = 7$)*.
* **Tư duy giải thuật:**
  * Với $N \le 10^5$, thuật toán duyệt 2 vòng lặp $O(N^2)$ sẽ bị **TLE** (vì $10^{10}$ phép tính).
  * Thuật toán Kadane $O(N)$: Duyệt qua từng phần tử, duy trì tổng hiện tại `cur_sum`. Nếu `cur_sum < 0`, ta đặt lại `cur_sum = 0`. Cập nhật `max_sum = max(max_sum, cur_sum)`.
  * Khởi tạo `max_sum = A[0]` để xử lý trường hợp mảng toàn số âm.
