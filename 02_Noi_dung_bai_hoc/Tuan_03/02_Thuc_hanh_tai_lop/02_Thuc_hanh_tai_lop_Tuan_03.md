# PHIẾU THỰC HÀNH TẠI LỚP -- TUẦN 03
## HÀM, TRUYỀN THAM CHIẾU & MẢNG ĐẾM TẦN SỐ (COUNTING ARRAY)

> **Đơn vị:** Trường Quốc tế Á Châu (The Asian International School) -- Tổ Tin học  
> **Thời lượng thực hành:** 30 -- 45 phút trực tiếp trên máy tính phòng thực hành.  
> **Môi trường:** Code::Blocks 20.03 (Phím tắt `F9` để Build & Run).  
> **Mục tiêu:** Nắm vững cấu trúc viết hàm, phân biệt sâu sắc giữa tham trị vs tham chiếu `&`, và thực hành kỹ thuật Mảng đếm tần số $O(N)$ phá vỡ bẫy thời gian $O(N^2)$ (TLE).

---

### BÀI 1: VIẾT HÀM TÍNH LŨY THỪA & KIỂM TRA SỐ NGUYÊN TỐ
* **Đề bài:** Viết chương trình gồm 2 hàm độc lập:
  1. Hàm `long long power(long long a, int b)` tính $a^b$ ($a \ge 1, 0 \le b \le 18, a^b \le 10^{18}$).
  2. Hàm `bool is_prime(long long n)` kiểm tra số nguyên tố trong độ phức tạp $O(\sqrt{n})$.
* Trong hàm `main()`, nhập số nguyên dương $x$ ($1 \le x \le 10^{12}$). In ra `YES` nếu $x$ là số nguyên tố, ngược lại in `NO`.
* **Input mẫu 1:**
  ```text
  999999999989
  ```
* **Output mẫu 1:**
  ```text
  YES
  ```
* **Input mẫu 2:**
  ```text
  1000000000000
  ```
* **Output mẫu 2:**
  ```text
  NO
  ```

---

### BÀI 2: VIẾT HÀM TỰ HOÁN ĐỔI & KIỂM CHỨNG THAM CHIẾU `&`
* **Đề bài:** Viết hàm `void my_swap(long long &u, long long &v)` hoán đổi giá trị 2 biến. Nhập vào 2 số nguyên $A, B$ ($|A|, |B| \le 10^{18}$). Gọi hàm `my_swap(A, B)` và in ra giá trị của $A, B$ sau khi hoán đổi.
* **Lưu ý sư phạm:** Hãy thử bỏ dấu `&` ở tham số để thấy giá trị $A, B$ ngoài `main()` không hề thay đổi (vì chỉ đổi trên bản sao)!
* **Input mẫu:**
  ```text
  100 200
  ```
* **Output mẫu:**
  ```text
  200 100
  ```

---

### BÀI 3: CÀI ĐẶT MẢNG ĐẾM TẦN SỐ TRỰC TIẾP $O(N)$
* **Đề bài:** Cho mảng $A$ gồm $N$ số nguyên không âm ($1 \le N \le 10^5, 0 \le A_i \le 10^6$). Hãy đếm số lần xuất hiện của từng giá trị trong mảng và in ra theo định dạng: `Giá_trị: Số_lần` theo thứ tự giá trị tăng dần (chỉ in các số có xuất hiện ít nhất 1 lần).
* **Khung thuật toán chuẩn phòng thi:**
  ```cpp
  const int MAX_VAL = 1000005;
  int cnt[MAX_VAL]; // Mảng đếm toàn cục trên vùng BSS (mặc định = 0)

  for (int i = 0; i < n; i++) {
      int x; cin >> x;
      cnt[x]++; // Chỉ số là giá trị, nội dung là số lần xuất hiện
  }
  ```
* **Input mẫu:**
  ```text
  7
  5 2 8 5 9 2 5
  ```
* **Output mẫu:**
  ```text
  2: 2
  5: 3
  8: 1
  9: 1
  ```

---

### BÀI 4: THỰC HÀNH TỆP OLYMPIC: ĐẾM PHẦN TỬ PHÂN BIỆT (UNIQUE)
* **Quy cách tệp phòng thi:** Đọc từ tệp `UNIQUE.INP`, ghi kết quả ra tệp `UNIQUE.OUT`.
* **Đề bài:** Cho dãy gồm $N$ số nguyên ($1 \le N \le 10^5, 0 \le A_i \le 10^6$). Hãy đếm xem trong dãy có bao nhiêu giá trị phân biệt (khác nhau đôi một).
* **Độ phức tạp yêu cầu:** $O(N)$ thời gian, $O(\max(A_i))$ bộ nhớ. Tuyệt đối không dùng 2 vòng for $O(N^2)$ vì sẽ bị loại TLE ngay lập tức!
* **Input (UNIQUE.INP):**
  ```text
  6
  10 20 10 30 20 50
  ```
* **Output (UNIQUE.OUT):**
  ```text
  4
  ```
