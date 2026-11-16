# PHIẾU THỰC HÀNH TẠI LỚP -- TUẦN 02
## KỸ THUẬT MẢNG 1 CHIỀU & CẤU HÌNH TỆP PHÒNG THI OLYMPIC

> **Đơn vị:** Trường Quốc tế Á Châu (The Asian International School) -- Tổ Tin học  
> **Thời lượng thực hành:** 30 -- 45 phút trực tiếp trên máy tính phòng thực hành.  
> **Môi trường:** Code::Blocks 20.03 (Phím tắt `F9` để Build & Run).  
> **Mục tiêu:** Thuần thục thao tác khai báo mảng tĩnh toàn cục (tránh Stack Overflow), nhập xuất mảng, tìm Max/Min, kỹ thuật 2 con trỏ đảo mảng tại chỗ và cấu hình vào/ra tệp `.INP` / `.OUT`.

---

### BÀI 1: NHẬP XUẤT MẢNG & TÍNH TRUNG BÌNH CỘNG SỐ DƯƠNG
* **Đề bài:** Cho mảng $A$ gồm $N$ số nguyên ($1 \le N \le 10^5, |A_i| \le 10^9$). Hãy tính và in ra trung bình cộng của các số dương ($A_i > 0$) trong mảng, định dạng lấy 2 chữ số thập phân sau dấu phẩy. Nếu mảng không có số dương nào, in ra `-1`.
* **Gợi ý kỹ thuật:** 
  * Biến tổng các số dương dùng kiểu `long long` để tránh tràn số.
  * Biến đếm số lượng số dương dùng kiểu `int`.
  * Khi tính trung bình, ép kiểu sang `double`: `(double)tong / dem`.
* **Input mẫu:**
  ```text
  5
  -3 4 8 -1 6
  ```
* **Output mẫu:**
  ```text
  6.00
  ```

---

### BÀI 2: TÌM MAX, MIN VÀ VỊ TRÍ ĐẦU TIÊN XUẤT HIỆN
* **Đề bài:** Cho mảng $A$ gồm $N$ số nguyên ($1 \le N \le 10^5, |A_i| \le 10^9$). Hãy tìm:
  * Giá trị lớn nhất ($Max$) và vị trí chỉ số $1$-based đầu tiên của $Max$.
  * Giá trị nhỏ nhất ($Min$) và vị trí chỉ số $1$-based đầu tiên của $Min$.
* **Cạm bẫy:** Tuyệt đối không khởi tạo `max = 0` vì mảng có thể toàn số âm! Khởi tạo `max_val = a[0]; pos_max = 1;`.
* **Input mẫu:**
  ```text
  6
  2 5 9 1 9 -4
  ```
* **Output mẫu:**
  ```text
  Max: 9 tai vi tri 3
  Min: -4 tai vi tri 6
  ```

---

### BÀI 3: ĐẢO NGƯỢC MẢNG TẠI CHỖ (TWO POINTERS IN-PLACE)
* **Đề bài:** Cho mảng $A$ gồm $N$ phần tử ($1 \le N \le 10^5$). Hãy đảo ngược thứ tự các phần tử của mảng $A$ mà **không dùng thêm bất kỳ mảng phụ nào** (tối ưu bộ nhớ phụ trợ $O(1)$).
* **Khung thuật toán chuẩn (Hai con trỏ):**
  ```cpp
  for (int i = 0; i < n / 2; i++) {
      swap(a[i], a[n - 1 - i]);
  }
  ```
* **Input mẫu:**
  ```text
  5
  2 4 6 8 10
  ```
* **Output mẫu:**
  ```text
  10 8 6 4 2
  ```

---

### BÀI 4: THỰC HÀNH ĐỌC XUẤT TỆP CHUẨN OLYMPIC (DAO.INP / DAO.OUT)
* **Quy cách tệp phòng thi:**
  * Tệp đầu vào: `DAO.INP`
  * Tệp kết quả: `DAO.OUT`
* **Đề bài:** Đọc từ tệp `DAO.INP` gồm số nguyên $N$ ($1 \le N \le 10^5$) và $N$ số nguyên của mảng $A$. Đảo ngược toàn bộ mảng và ghi ra tệp `DAO.OUT` trên một dòng duy nhất, mỗi phần tử cách nhau một khoảng trắng.
* **Hướng dẫn thao tác trên Code::Blocks:**
  1. Tạo file mã nguồn `DAO.cpp` (`Ctrl+Shift+N`, `Ctrl+S`).
  2. Tạo file dữ liệu `DAO.INP` trong cùng thư mục với `DAO.cpp`.
  3. Đặt cặp lệnh `freopen` ở đầu hàm `main()`:
     ```cpp
     freopen("DAO.INP", "r", stdin);
     freopen("DAO.OUT", "w", stdout);
     ```
  4. Nhấn `F9` để chạy chương trình. Mở file `DAO.OUT` vừa được sinh ra để kiểm tra kết quả.
* **Input (DAO.INP):**
  ```text
  6
  10 20 30 40 50 60
  ```
* **Output (DAO.OUT):**
  ```text
  60 50 40 30 20 10
  ```
