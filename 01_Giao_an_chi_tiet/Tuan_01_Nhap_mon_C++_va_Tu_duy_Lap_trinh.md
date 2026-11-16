# KẾ HOẠCH BÀI DẠY CHI TIẾT TUẦN 01 (DÀNH CHO BUỔI HỌC 08/09)
## CHỦ ĐỀ: NHẬP MÔN C++ THI ĐẤU & XÂY DỰNG TƯ DUY LẬP TRÌNH CĂN BẢN
### TRƯỜNG QUỐC TẾ Á CHÂU -- BỘ PHẬN BỒI DƯỠNG OLYMPIC TIN HỌC 11 (2026 -- 2027)

> **Thời lượng:** 90 phút (1 buổi duy nhất trong tuần).  
> **Phương pháp sư phạm:** *"Dạy lại từ đầu -- Không mặc định học sinh đã biết -- Kết hợp mô phỏng ẩn dụ phần cứng, code live từng bước trên Code::Blocks và giải quyết triệt để tâm lý sợ lỗi cú pháp."*

---

### MỤC TIÊU BÀI HỌC (90 PHÚT)
1. **Về định hướng & Động lực:**
   * Học sinh hiểu rõ cấu trúc kỳ thi Olympic 11 TP.HCM, thể lệ 3 bài / 120 phút / 20 điểm, phổ điểm xét giải và mục tiêu chiến lược 12.0 -- 15.0 điểm (Huy chương Bạc / Đồng).
   * Hiểu lý do khoa học vì sao C++ là lựa chọn bắt buộc trong Lập trình thi đấu (chạy nhanh hơn Python 10 - 100 lần, không lo quá thời gian TLE).
2. **Về tư duy lập trình căn bản:**
   * Hiểu bản chất biến nhớ (RAM): khái niệm biến là chiếc hộp có nhãn, bắt buộc khai báo kiểu dữ liệu.
   * Khắc phục triệt để bẫy "giá trị rác" (uninitialized variable) bằng thói quen khởi tạo `tong = 0`, `dem = 0`.
   * Hiểu sâu sắc bẫy tràn số nguyên (`int` vs `long long`, kỹ thuật ép kiểu `1LL * a * b`).
   * Phân biệt rạch ròi phép chia nguyên (`/`) và phép chia dư (`%`) cùng các ứng dụng cốt lõi (kiểm tra chẵn lẻ, tách chữ số).
3. **Về kỹ năng cú pháp & Phòng thi:**
   * Nắm vững bộ khung một chương trình C++ hoàn chỉnh.
   * Sử dụng thành thạo `cin`, `cout`, `\n`, tăng tốc I/O.
   * Làm chủ cấu trúc rẽ nhánh `if / else`, logic điều kiện (`&&`, `||`, `!`), tránh bẫy toán học `1 <= x && x <= 10`.
   * Vòng lặp `for` cơ bản và kỹ năng lập bảng chạy từng bước bằng tay (*Dry Run*).
   * Sử dụng thành thạo Code::Blocks: tạo file (`Ctrl + Shift + N`), lưu file (`Ctrl + S`), phím tắt `F9` (Build & Run), đọc/xuất tệp `freopen` (`.INP` / `.OUT`).

---

## PHẦN I: TIẾN TRÌNH LÊN LỚP CHI TIẾT TỪNG PHÚT (90 PHÚT)

```
[00:00 - 00:15] KHỞI ĐỘNG, SETUP CODE::BLOCKS & FAST-TRACK DIAGNOSTIC (15 phút)
[00:15 - 00:45] CHUYÊN ĐỀ 1: BẢN CHẤT BIẾN NHỚ, KIỂU DỮ LIỆU & BẪY TRÀN SỐ (30 phút)
[00:45 - 01:15] CHUYÊN ĐỀ 2: TOÁN TỬ SỐ HỌC, RẼ NHÁNH IF/ELSE & VÒNG LẶP FOR (30 phút)
[01:15 - 01:30] THỰC HÀNH TẠI LỚP, GIAO BỘ CẨM NANG TỰ HỌC A-Z & BTVN (15 phút)
```

> [!TIP]
> **CHIẾN LƯỢC DẠY NHANH (FAST-TRACK DIAGNOSTIC):**  
> Trong 10 phút đầu, giáo viên chiếu nhanh **Bộ 3 câu hỏi trắc nghiệm chẩn đoán**:
> 1. `cout << 5 / 2;` in ra cái gì? *(Đáp án: `2`, không phải `2.5` do chia nguyên)*.
> 2. Biến kiểu `int` có lưu được giá trị $10^{10}$ (10 tỷ) không? *(Đáp án: Không, tràn số, phải dùng `long long`)*.
> 3. Trong C++, điều kiện "$x$ nằm trong đoạn từ 1 đến 10" viết thế nào? *(Đáp án: `1 <= x && x <= 10`, viết `1 <= x <= 10` là sai)*.  
> $\implies$ **Nếu học sinh trả lời đúng vanh vách:** Giáo viên lướt qua ngay các phần cú pháp lý thuyết cơ bản (tiết kiệm 20 phút), dồn thời gian hướng dẫn sâu về bẫy tràn số và kỹ thuật lập bảng Dry Run!
> $\implies$ **Nhiệm vụ tự học ở nhà:** Học sinh tự học và thực hành lại toàn bộ các bài từ 001 đến 032 trong **Cẩm nang Tự học C++ Tập 01**.

---

### [00:00 - 00:20] KHỞI ĐỘNG, ĐỊNH HƯỚNG & CÀI ĐẶT CODE::BLOCKS (20 phút)
* **Hoạt động của Giáo viên:**
  * Chiếu slide/tài liệu định hướng: Giới thiệu cuộc thi Olympic 11 TP.HCM (Tháng 04/2027), thời gian 120 phút, 3 bài toán.
  * Phân tích phổ điểm: *"Các em chỉ cần đạt từ 12.0 đến 15.0 / 20.0 điểm là đã nắm chắc Huy chương Bạc hoặc Đồng của Thành phố. Mỗi bài toán đều có nhiều subtask kiểm thử, thuật toán đơn giản nhất vẫn lấy trọn 30% đến 60% số điểm!"*
  * Giải thích vì sao chọn C++: So sánh trực quan tốc độ chạy $10^8$ phép tính (C++ mất 0.05s, Python mất hơn 4s $\implies$ Bị loại TLE).
* **Thao tác trực tiếp trên máy học sinh:**
  1. Hướng dẫn học sinh mở phần mềm **Code::Blocks** (đã cài sẵn bản MinGW).
  2. Cấu hình chuẩn C++17: Vào **Settings** $\to$ **Compiler...** $\to$ Tích chọn `Have g++ follow the C++17 ISO C++ language standard [-std=c++17]` và `Optimize generated code [-O2]` $\to$ Bấm **OK**.
  3. Dạy học sinh 3 phím tắt vàng:
     * `Ctrl + Shift + N`: Tạo file mới.
     * `Ctrl + S`: Lưu file đặt tên `chao.cpp`.
     * `F9`: **Build and Run** (Biên dịch và chạy tức thì).
  4. Yêu cầu học sinh tự tay gõ và bấm `F9` đoạn mã chào mừng:
     ```cpp
     #include <iostream>
     using namespace std;

     int main() {
         cout << "Chao mung den voi Doi tuyen Olympic Tin hoc Asian School!\n";
         return 0;
     }
     ```

---

### [00:20 - 00:45] CHUYÊN ĐỀ 1: BẢN CHẤT BIẾN NHỚ, KIỂU DỮ LIỆU & BẪY TRÀN SỐ (25 phút)

#### 1. Dạy bản chất Biến nhớ bằng hình ảnh trực quan
* **Lời giảng của giáo viên:**  
  *"Bộ nhớ RAM của máy tính như một chiếc tủ có hàng triệu ngăn kéo nhỏ. Khi muốn lưu một con số hay một chữ cái, ta xin máy tính một chiếc hộp đặt vào ngăn kéo đó. Chiếc hộp đó gọi là Biến (Variable). Khác với Python tự đoán, C++ bắt buộc các em phải nói rõ hình dáng chiếc hộp (Kiểu dữ liệu) và dán nhãn tên hộp (Tên biến) ngay từ đầu."*
* **Bẫy giá trị rác:** Giáo viên live-code ví dụ không khởi tạo biến:
  ```cpp
  int tong;
  cout << "Gia tri rac cua tong: " << tong << "\n"; // Hien ra so am ngau nhien!
  ```
  $\implies$ Khắc sâu nguyên tắc: Luôn khởi tạo `long long tong = 0;` và `int dem = 0;`.

#### 2. Hai kiểu số nguyên cốt lõi & Bẫy tràn số (Integer Overflow)
* **Quy tắc ghi nhớ:**
  * `int`: 4 bytes $\to$ Tối đa khoảng $2 \cdot 10^9$ ($2$ tỷ).
  * `long long`: 8 bytes $\to$ Tối đa khoảng $9 \cdot 10^{18}$ ($9$ tỷ tỷ).
* **Diễn giải bẫy tràn số khi nhân:**
  * Giáo viên viết lên bảng bài toán tính diện tích hình chữ nhật $a = 10^6, b = 10^6$.
  * Viết code sai: `long long s = a * b;` $\to$ Cho học sinh xem kết quả ra số âm!
  * Giải thích: Phép nhân `a * b` được CPU tính toán trong kiểu `int` tạm thời trước khi gán sang `s`. Vì $10^{12} > 2 \cdot 10^9$ nên đã bị tràn số ngay trong quá trình tính!
  * Cách sửa đúng: `long long s = 1LL * a * b;`.

---

### [00:45 - 01:15] CHUYÊN ĐỀ 2: TOÁN TỬ SỐ HỌC, RẼ NHÁNH IF/ELSE & VÒNG LẶP FOR (30 phút)

#### 1. Phép chia nguyên (`/`) và phép chia dư (`%`)
* **Lỗi học sinh yếu hay mắc:** Nghĩ rằng `5 / 2 = 2.5`.
* **Khẳng định:** Trong C++, số nguyên chia số nguyên **chỉ lấy phần nguyên**: `5 / 2 = 2`. Muốn ra số thực phải viết `5.0 / 2` hoặc `(double)a / b`.
* **Ứng dụng của `%` và `/`:**
  * `n % 2 == 0`: Số chẵn.
  * `n % 10`: Rút chữ số hàng đơn vị.
  * `n / 10`: Vứt bỏ chữ số hàng đơn vị.

#### 2. Cấu trúc rẽ nhánh `if / else` & Logic điều kiện
* **Phân biệt `==` (so sánh) và `=` (gán):** Lỗi kinh điển viết nhầm `if (a = b)`.
* **Bẫy điều kiện kẹp giữa:**
  * Trong toán: $1 \le x \le 10$.
  * Trong C++: Bắt buộc viết `if (1 <= x && x <= 10)`.

#### 3. Vòng lặp `for` & Bảng Dry Run (Chạy từng bước bằng tay)
* Hướng dẫn học sinh cơ chế 3 bước: `for (Khởi tạo; Điều kiện; Bước nhảy)`.
* Cho học sinh kẻ bảng Trace Dry Run tính tổng $S = 1 + 2 + 3 + 4$ lên vở để nhìn thấy tận mắt luồng chạy của từng vòng lặp.

---

### [01:15 - 01:30] THỰC HÀNH TẠI LỚP, XỬ LÝ LỖI BIÊN DỊCH & GIAO BTVN (15 phút)

#### 1. Thực hành tại lớp: Chuẩn tệp `.INP` / `.OUT`
* Hướng dẫn học sinh cấu hình mở file:
  ```cpp
  freopen("BAI1.INP", "r", stdin);
  freopen("BAI1.OUT", "w", stdout);
  ```
* Cho học sinh tạo file `BAI1.INP` chứa 2 số `15 20`, chạy chương trình và kiểm tra file `BAI1.OUT` tự động sinh ra số `35`.

#### 2. Dạy học sinh cách tự đọc lỗi biên dịch trên Code::Blocks
* `expected ';' before ...`: Thiếu dấu chấm phẩy ở dòng trên.
* `'x' was not declared`: Chưa khai báo kiểu cho biến `x` hoặc gõ sai chính tả hoa/thường.

#### 3. Giao Bộ bài tập tăng cường cú pháp Tuần 01
* Phát **Bộ bài tập tăng cường cú pháp C++** (10 bài tập phân tầng từ Khởi động đến Tư duy số học).
* Động viên tinh thần: *"Các em hãy kiên nhẫn tự tay gõ từng bài trên máy tính. Cứ gõ, cứ sai và sửa; sau 1 tuần các em sẽ thấy C++ dễ hiểu và kiểm soát tốt hơn rất nhiều!"*
