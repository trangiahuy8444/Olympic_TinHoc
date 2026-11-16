# PHIẾU BÀI TẬP VỀ NHÀ -- TUẦN 03
## CHỦ ĐỀ: HÀM, TRUYỀN THAM CHIẾU & KỸ THUẬT MẢNG ĐẾM TẦN SỐ (COUNTING ARRAY)

> **Đơn vị:** Trường Quốc tế Á Châu (The Asian International School) -- Tổ Tin học  
> **Khối lớp:** Đội tuyển Olympic Tin học 11 (Năm học 2026 -- 2027)  
> **Mục tiêu:** Giúp học sinh thành thạo viết hàm, làm chủ truyền tham chiếu `&` và chuyển hóa tư duy từ duyệt cạn $O(N^2)$ sang kỹ thuật mảng đếm tần số $O(N)$.

---

### BÀI 1: HÀM KIỂM TRA SỐ NGUYÊN TỐ
* **Tệp mã nguồn:** `bai1_nguyen_to.cpp`
* **Đề bài:** Viết hàm `bool is_prime(long long n)` kiểm tra số nguyên tố trong $O(\sqrt{N})$. Áp dụng: Nhập mảng $A$ gồm $N$ số ($N \le 10^5, A_i \le 10^9$), đếm xem trong mảng có bao nhiêu số nguyên tố.
* **Input mẫu:**
  ```text
  5
  2 4 7 9 11
  ```
* **Output mẫu:**
  ```text
  3
  ```

---

### BÀI 2: TỰ VIẾT HÀM ĐỔI CHỖ & SẮP XẾP
* **Tệp mã nguồn:** `bai2_hoan_doi.cpp`
* **Đề bài:** Viết hàm `void my_swap(long long &a, long long &b)` dùng tham chiếu `&`. Áp dụng sắp xếp một mảng $N$ phần tử ($N \le 1000$) theo thứ tự tăng dần.
* **Input mẫu:**
  ```text
  5
  9 3 7 1 5
  ```
* **Output mẫu:**
  ```text
  1 3 5 7 9
  ```

---

### BÀI 3: TÌM GIÁ TRỊ XUẤT HIỆN NHIỀU NHẤT (MODE)
* **Tệp mã nguồn:** `bai3_mode.cpp`
* **Đề bài:** Cho mảng $A$ gồm $N$ số nguyên ($N \le 10^5, 0 \le A_i \le 10^6$). Hãy tìm số xuất hiện nhiều lần nhất trong dãy bằng kỹ thuật mảng đếm $O(N)$. Nếu có nhiều số cùng xuất hiện nhiều nhất, in ra số nhỏ nhất trong chúng.
* **Input mẫu:**
  ```text
  7
  1 5 3 5 3 2 5
  ```
* **Output mẫu:**
  ```text
  5 3
  ```
  *(Số 5 xuất hiện 3 lần)*

---

### BÀI 4: ĐẾM SỐ LƯỢNG GIÁ TRỊ PHÂN BIỆT
* **Tệp mã nguồn:** `bai4_dem_phan_biet.cpp`
* **Đề bài:** Cho dãy $N$ số nguyên ($N \le 10^5, 0 \le A_i \le 10^6$). Đếm xem dãy có bao nhiêu giá trị khác nhau đôi một bằng mảng đánh dấu `visited` hoặc mảng đếm `cnt`.
* **Input mẫu:**
  ```text
  6
  2 7 2 3 7 2
  ```
* **Output mẫu:**
  ```text
  3
  ```
  *(Có 3 giá trị phân biệt là 2, 3, 7)*

---

### BÀI 5: PHẦN TỬ XUẤT HIỆN ĐÚNG K LẦN
* **Tệp mã nguồn:** `bai5_dung_k_lan.cpp`
* **Đề bài:** Cho dãy $N$ số ($N \le 10^5, 0 \le A_i \le 10^6$) và số nguyên dương $K$. Hãy in ra tất cả các số xuất hiện đúng $K$ lần trong dãy theo thứ tự tăng dần. Nếu không có số nào thỏa mãn, in `-1`.
* **Input mẫu:**
  ```text
  8 2
  3 5 2 3 7 5 8 5
  ```
* **Output mẫu:**
  ```text
  3
  ```
  *(Số 3 xuất hiện đúng 2 lần; số 5 xuất hiện 3 lần; số 2, 7, 8 xuất hiện 1 lần)*

---

### BÀI 6: ĐẾM CẶP SỐ CÓ TỔNG BẰNG S (BƯỚC NGOẶT O(N))
* **Tệp mã nguồn:** `bai6_tong_s.cpp`
* **Đề bài:** Cho dãy $A$ gồm $N$ số nguyên không âm ($N \le 10^5, 0 \le A_i \le 10^5$) và số nguyên $S$. Hãy đếm số cặp chỉ số $(i, j)$ với $1 \le i < j \le N$ sao cho $A_i + A_j = S$.
* **Gợi ý tối ưu $O(N)$:** Khi duyệt đến phần tử $A_j$, số lượng phần tử $A_i$ ($i < j$) thỏa mãn $A_i + A_j = S$ chính là `cnt[S - A_j]`! Sau đó ta cập nhật `cnt[A_j]++`.
* **Input mẫu:**
  ```text
  5 8
  3 5 3 5 4
  ```
* **Output mẫu:**
  ```text
  4
  ```
  *(Các cặp: (A[1], A[2]), (A[1], A[4]), (A[3], A[2]), (A[3], A[4]))*

---

### BÀI 7: MẢNG ĐẾM VỚI SỐ ÂM (KỸ THUẬT DỜI TRỤC OFFSET)
* **Tệp mã nguồn:** `bai7_so_am_offset.cpp`
* **Đề bài:** Cho dãy $N$ số nguyên ($N \le 10^5, -10^5 \le A_i \le 10^5$). Hãy in ra số âm có số lần xuất hiện nhiều nhất trong dãy. Nếu không có số âm nào, in `0`.
* **Input mẫu:**
  ```text
  6
  -3 5 -7 -3 2 -7
  ```
* **Output mẫu:**
  ```text
  -7
  ```
  *(Cả -7 và -3 đều xuất hiện 2 lần, in số nhỏ hơn là -7)*
