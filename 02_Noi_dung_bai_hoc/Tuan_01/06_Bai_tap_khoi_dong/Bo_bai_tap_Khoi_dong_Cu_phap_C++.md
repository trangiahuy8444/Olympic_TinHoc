# PHIẾU THỰC HÀNH TẠI LỚP -- TUẦN 01
## RÈN LUYỆN CÚ PHÁP C++ CỐT LÕI & THAO TÁC TRÊN CODE::BLOCKS

> **Đơn vị:** Trường Quốc tế Á Châu (The Asian International School) -- Tổ Tin học  
> **Thời lượng thực hành:** 30 -- 45 phút trực tiếp trên máy tính phòng thực hành.  
> **Mục tiêu:** Gõ thành thạo cú pháp C++, quen tay với dấu chấm phẩy `;`, phân biệt `int` vs `long long`, câu lệnh điều kiện `if/else`, vòng lặp `for` và làm quen chuẩn tệp thi đấu `freopen`.

---

### BÀI 1: TÍNH TOÁN HÌNH HỌC CƠ BẢN
* **Đề bài:** Nhập vào 2 số nguyên dương $a$ và $b$ ($1 \le a, b \le 10^6$) lần lượt là chiều dài và chiều rộng của một hình chữ nhật.
  * Dòng 1 in ra chu vi của hình chữ nhật: $P = (a + b) \times 2$.
  * Dòng 2 in ra diện tích của hình chữ nhật: $S = a \times b$.
* **Lưu ý:** Vì $a, b \le 10^6$, diện tích $S$ có thể lên tới $10^{12} > 2 \cdot 10^9$. Biến diện tích **bắt buộc dùng kiểu `long long`**.
* **Input mẫu:**
  ```text
  100000 200000
  ```
* **Output mẫu:**
  ```text
  600000
  20000000000
  ```

---

### BÀI 2: TÌM SỐ LỚN NHẤT TRONG BA SỐ (RÈN LUYỆN IF/ELSE)
* **Đề bài:** Nhập vào 3 số nguyên $a, b, c$ ($|a|, |b|, |c| \le 10^9$). Hãy in ra giá trị lớn nhất trong 3 số đó.
* **Gợi ý:** Khởi tạo biến `max_val = a`, sau đó so sánh lần lượt với $b$ và $c$.
* **Input mẫu:**
  ```text
  15 -7 28
  ```
* **Output mẫu:**
  ```text
  28
  ```

---

### BÀI 3: KIỂM TRA NĂM NHUẬN (TOÁN TỬ LOGIC)
* **Đề bài:** Nhập vào một năm nguyên dương $N$ ($1 \le N \le 10^5$). Một năm được coi là năm nhuận nếu:
  * Năm đó chia hết cho 400, HOẶC:
  * Năm đó chia hết cho 4 nhưng KHÔNG chia hết cho 100.  
  In ra `YES` nếu là năm nhuận, ngược lại in `NO`.
* **Gợi ý:** Sử dụng toán tử chia lấy dư `%`, toán tử `&&` và `||`.
* **Input mẫu 1:**
  ```text
  2024
  ```
* **Output mẫu 1:**
  ```text
  YES
  ```
* **Input mẫu 2:**
  ```text
  1900
  ```
* **Output mẫu 2:**
  ```text
  NO
  ```

---

### BÀI 4: TÍNH TỔNG CÁC SỐ CHẴN TỪ 1 ĐẾN N (VÒNG LẶP FOR)
* **Đề bài:** Nhập vào số nguyên dương $N$ ($1 \le N \le 10^6$). Hãy tính tổng tất cả các số chẵn trong khoảng từ 1 đến $N$.
* **Ví dụ:** Với $N = 6$, các số chẵn là $2, 4, 6 \implies$ Tổng $= 12$.
* **Lưu ý:** Biến lưu tổng phải dùng kiểu `long long`.
* **Input mẫu:**
  ```text
  10
  ```
* **Output mẫu:**
  ```text
  30
  ```

---

### BÀI 5: TẬP ĐỌC GHI FILE PHÒNG THI (TỔNG DÃY SỐ)
* **Quy cách:** Đọc từ file `TONG.INP`, ghi kết quả ra file `TONG.OUT`.
* **Đề bài:** 
  * Dòng đầu tiên chứa số nguyên dương $N$ ($1 \le N \le 10^5$).
  * Dòng thứ hai chứa $N$ số nguyên $A_1, A_2, \dots, A_N$ ($|A_i| \le 10^9$).  
  Hãy tính và in ra tổng của $N$ số đó.
* **Input (TONG.INP):**
  ```text
  4
  10 20 -5 100
  ```
* **Output (TONG.OUT):**
  ```text
  125
  ```
