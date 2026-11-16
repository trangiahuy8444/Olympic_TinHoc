# BỘ BÀI TẬP TĂNG CƯỜNG TUẦN 01 (DÀNH CHO HỌC SINH MỚI BẮT ĐẦU)
## CHỦ ĐỀ: THUẦN THỤC CÚ PHÁP C++ & RÈN LUYỆN TƯ DUY LOGIC CĂN BẢN

> **Đơn vị:** Trường Quốc tế Á Châu (The Asian International School) -- Tổ Tin học  
> **Khối lớp:** Đội tuyển Olympic Tin học 11 (Năm học 2026 -- 2027)  
> **Mục tiêu:** Giúp học sinh tự tin 100% với cú pháp C++, gõ quen tay không còn lỗi cú pháp (chấm phẩy, kiểu dữ liệu, thư viện), làm chủ vòng lặp và câu lệnh điều kiện trước khi học cấu trúc Mảng.

---

### CẤU TRÚC PHÂN TẦNG CỦA BỘ BÀI TẬP (10 BÀI)
* **Phần A (Bài 1 -- 4):** Cú pháp, Biến, Nhập xuất & Phép tính số học (Mức cơ bản -- Làm quen C++).
* **Phần B (Bài 5 -- 7):** Câu lệnh rẽ nhánh `if / else` & Tư duy logic điều kiện.
* **Phần C (Bài 8 -- 10):** Vòng lặp `for / while` & Tư duy giải thuật số học (Tách chữ số, ước số, tràn số).

---

## PHẦN A: CÚ PHÁP, BIẾN & NHẬP XUẤT CĂN BẢN

### BÀI 1: BẢNG CHÀO MỪNG ĐỘI TUYỂN (XUẤT KÝ TỰ ĐẶC BIỆT)
* **Đề bài:** Viết chương trình xuất ra màn hình một khung viền chào mừng có dạng sau:
  ```text
  **************************************************
  *     CHAO MUNG DEN VOI DOI TUYEN OLYMPIC 11     *
  *         TRUONG QUOC TE A CHAU (ASIANSCHOOL)    *
  *                 "QUYET TAM DOAT GIAI!"         *
  **************************************************
  ```
* **Lưu ý kỹ thuật:** Để in dấu nháy kép `"` trong C++, ta phải dùng dấu gạch chéo ngược: `\"`.
* **Gợi ý code:** Dùng nhiều lệnh `cout << "..." << "\n";`.

---

### BÀI 2: DIỆN TÍCH HÌNH THANG & BẪY TRÀN SỐ
* **Đề bài:** Nhập vào 3 số nguyên dương $a, b, h$ ($1 \le a, b, h \le 10^6$) lần lượt là đáy lớn, đáy nhỏ và chiều cao của một hình thang. Hãy tính diện tích hình thang:
  $$S = \frac{(a + b) \cdot h}{2}$$
* **Input:** Một dòng chứa 3 số nguyên $a, b, h$ cách nhau bởi dấu cách.
* **Output:** In ra diện tích hình thang. Nếu kết quả là số thập phân, in dạng số thực hoặc làm tròn phù hợp.
* **Ví dụ:**
  * **Input:** `5 3 4` $\to$ **Output:** `16`
  * **Input:** `1000000 1000000 1000000` $\to$ **Output:** `1000000000000`
* **Gợi ý thuật toán:**
  * Vì $a, b, h \le 10^6$, tích $(a + b) \cdot h$ có thể lên tới $2 \cdot 10^{12} > 2 \cdot 10^9$.
  * Nếu dùng kiểu `int`, phép nhân sẽ bị **tràn số** và cho kết quả sai!
  * **Bắt buộc:** Khai báo $a, b, h$ kiểu `long long`, hoặc dùng `1LL * (a + b) * h / 2.0`.

---

### BÀI 3: CHUYỂN ĐỔI ĐƠN VỊ THỜI GIAN
* **Đề bài:** Nhập vào số nguyên dương $T$ ($0 \le T \le 10^9$) là số giây. Hãy chuyển đổi $T$ sang định dạng `Giờ:Phút:Giây` chuẩn dạng: `hh:mm:ss` (mỗi đại lượng in 2 chữ số, nếu nhỏ hơn 10 thì chèn thêm số 0 ở đầu).
* **Input:** Một số nguyên dương $T$.
* **Output:** Chuỗi thời gian theo định dạng `hh:mm:ss`.
* **Ví dụ:**
  * **Input:** `3665` $\to$ **Output:** `01:01:05` (Vì 3665s = 1 giờ + 1 phút + 5 giây).
* **Gợi ý thuật toán:**
  * `gio = T / 3600;`
  * `phut = (T % 3600) / 60;`
  * `giay = T % 60;`

---

### BÀI 4: CHIA KẸO TRUNG THU
* **Đề bài:** Có $N$ cái kẹo được chia đều cho $K$ bạn học sinh ($1 \le N, K \le 10^9$). Mỗi bạn nhận được số lượng kẹo bằng nhau và nhiều nhất có thể, số kẹo còn dư sẽ để dành cho thầy cô giáo.
  Hãy in ra số kẹo mỗi bạn nhận được và số kẹo còn dư lại cho thầy cô.
* **Input:** Dòng duy nhất gồm 2 số nguyên $N$ và $K$.
* **Output:** Gồm 2 số nguyên trên một dòng cách nhau bởi khoảng trắng: Số kẹo mỗi bạn nhận và số kẹo còn thừa.
* **Ví dụ:**
  * **Input:** `25 4` $\to$ **Output:** `6 1`

---

## PHẦN B: CÂU LỆNH RẼ NHÁNH `if / else` & TƯ DUY LOGIC

### BÀI 5: PHÂN LOẠI TAM GIÁC
* **Đề bài:** Nhập vào 3 số nguyên dương $a, b, c$ ($1 \le a, b, c \le 10^6$). Kiểm tra 3 số trên có tạo thành 3 cạnh của một tam giác không?
  * Nếu không tạo thành tam giác, in ra `KHONG PHAI TAM GIAC`.
  * Nếu tạo thành tam giác, kiểm tra tiếp và in ra loại tam giác tương ứng:
    * `TAM GIAC DEU` (nếu cả 3 cạnh bằng nhau: $a = b = c$).
    * `TAM GIAC VUONG` (nếu thỏa mãn định lý Pytago: $a^2 + b^2 = c^2$ hoặc $a^2 + c^2 = b^2$ hoặc $b^2 + c^2 = a^2$).
    * `TAM GIAC CAN` (nếu có 2 cạnh bằng nhau).
    * `TAM GIAC THUONG` (các trường hợp còn lại).
* **Lưu ý bẫy thi đấu:** Khi tính $a^2 + b^2$, vì $a, b \le 10^6$ nên bình phương có thể lên tới $10^{12} \implies$ phải dùng `long long` khi bình phương.

---

### BÀI 6: TÍNH TIỀN CƯỚC TAXI LŨY TIẾN
* **Đề bài:** Giá cước taxi của một hãng xe được tính theo các bậc như sau:
  * **1 km đầu tiên:** Giá 15,000 đồng.
  * **Từ km thứ 2 đến km thứ 5 (4 km tiếp theo):** Giá 13,500 đồng/km.
  * **Từ km thứ 6 trở đi:** Giá 11,000 đồng/km.
  * **Khuyến mãi đường dài:** Nếu tổng quãng đường đi lớn hơn $30$ km, khách hàng được giảm giá $10\%$ trên tổng số tiền cước.
  Nhập vào số nguyên dương $X$ ($1 \le X \le 1000$) là tổng quãng đường di chuyển (tính bằng km). Hãy tính số tiền khách phải trả (làm tròn số nguyên).
* **Ví dụ:**
  * **Input:** `1` $\to$ **Output:** `15000`
  * **Input:** `3` $\to$ **Output:** `42000` (15000 + 2 * 13500)
  * **Input:** `35` $\to$ **Output:** `359100`

---

### BÀI 7: TỌA ĐỘ VÀ GÓC PHẦN TƯ
* **Đề bài:** Trong mặt phẳng tọa độ Oxy, cho điểm $M(x, y)$ với $x, y$ là các số nguyên ($-10^6 \le x, y \le 10^6$). Xác định vị trí của điểm $M$:
  * Nếu $x = 0$ và $y = 0$, in ra `GOC TOA DO`.
  * Nếu $x = 0$ và $y \ne 0$, in ra `TRUC TUNG`.
  * Nếu $y = 0$ và $x \ne 0$, in ra `TRUC HOANH`.
  * Nếu $x > 0$ và $y > 0$, in ra `GOC I`.
  * Nếu $x < 0$ và $y > 0$, in ra `GOC II`.
  * Nếu $x < 0$ và $y < 0$, in ra `GOC III`.
  * Nếu $x > 0$ và $y < 0$, in ra `GOC IV`.

---

## PHẦN C: VÒNG LẶP & TƯ DUY SỐ HỌC CƠ BẢN

### BÀI 8: TỔNG BÌNH PHƯƠNG CỦA DÃY SỐ
* **Đề bài:** Nhập vào số nguyên dương $N$ ($1 \le N \le 10^5$). Hãy tính tổng:
  $$S = 1^2 + 2^2 + 3^2 + \dots + N^2$$
* **Input:** Một số nguyên dương $N$.
* **Output:** Một số nguyên duy nhất là giá trị của tổng $S$.
* **Ví dụ:**
  * **Input:** `3` $\to$ **Output:** `14` (Vì $1^2 + 2^2 + 3^2 = 1 + 4 + 9 = 14$).
  * **Input:** `100000` $\to$ **Output:** `333338333350000`
* **Lưu ý:** Với $N = 10^5$, tổng $S \approx 3.33 \cdot 10^{14} > 2 \cdot 10^9$. Biến tổng bắt buộc dùng kiểu `long long`.

---

### BÀI 9: ĐẾM VÀ TÍNH TỔNG CÁC ƯỚC SỐ CỦA N
* **Đề bài:** Cho số nguyên dương $N$ ($1 \le N \le 10^6$). Một số nguyên dương $d$ được gọi là ước của $N$ nếu $N$ chia hết cho $d$ ($N \% d == 0$).
  Hãy đếm xem $N$ có bao nhiêu ước số nguyên dương và in ra tổng của tất cả các ước số đó.
* **Input:** Một dòng chứa số nguyên dương $N$.
* **Output:** Dòng 1 in số lượng ước số; Dòng 2 in tổng các ước số.
* **Ví dụ:**
  * **Input:** `6` $\to$ **Output:**
    ```text
    4
    12
    ```
    *(Các ước của 6 là: 1, 2, 3, 6 $\implies$ Số lượng: 4; Tổng: 1 + 2 + 3 + 6 = 12)*.

---

### BÀI 10: TÁCH CHỮ SỐ & KIỂM TRA SỐ ĐỐI XỨNG (PALINDROME)
* **Đề bài:** Một số nguyên dương được gọi là số đối xứng (Palindrome) nếu đọc từ trái sang phải hay từ phải sang trái đều thu được số giống nhau. Ví dụ: `121`, `88`, `12321` là số đối xứng; `123`, `100` không phải là số đối xứng.
  Nhập vào số nguyên dương $N$ ($1 \le N \le 10^{14}$).
  * Dòng 1 in ra tổng các chữ số của $N$.
  * Dòng 2 in ra số đảo ngược của $N$.
  * Dòng 3 in ra `YES` nếu $N$ là số đối xứng, ngược lại in `NO`.
* **Input:** Một số nguyên dương $N$.
* **Output:** Gồm 3 dòng theo yêu cầu đề bài.
* **Ví dụ:**
  * **Input:** `12321` $\to$ **Output:**
    ```text
    9
    12321
    YES
    ```
  * **Input:** `1250` $\to$ **Output:**
    ```text
    8
    521
    NO
    ```
* **Gợi ý kỹ thuật cốt lõi trong Competitive Programming:**
  ```cpp
  long long temp = N;
  long long tong = 0;
  long long dao = 0;
  while (temp > 0) {
      int d = temp % 10;      // Lay chu so hang don vi
      tong += d;              // Cong vao tong chu so
      dao = dao * 10 + d;     // Ghep vao so dao nguoc
      temp /= 10;             // Bo chu so hang don vi
  }
  ```
