# TÀI LIỆU ĐỊNH HƯỚNG & HƯỚNG DẪN SETUP BUỔI 01
## KHỞI ĐỘNG ĐỘI TUYỂN OLYMPIC TIN HỌC KHỐI 11 (2026 – 2027)

> **Mục đích:** Tài liệu này được dùng trong **30 – 40 phút đầu tiên** của Buổi 1 (08/09) để:
> 1. Phổ biến toàn bộ thông tin kỳ thi (ngày thi, thể lệ, cấu trúc đề, tiêu chí xét giải).
> 2. Thống nhất mục tiêu và tinh thần học tập của đội tuyển.
> 3. Từng bước thiết lập môi trường C++ trên Code::Blocks cho học sinh.

---

## PHẦN I: THÔNG TIN KỲ THI OLYMPIC TIN HỌC 11 (CHIẾU CHO HỌC SINH XEM)

### 1. Thông tin chung về kỳ thi
* **Tên kỳ thi:** Cuộc thi Olympic Truyền thống Thành phố Hồ Chí Minh dành cho học sinh THPT (Khối 11).
* **Thời gian tổ chức dự kiến:** Khoảng **tuần đầu tháng 04/2027** (như các năm trước: ngày 09/04 hoặc 11/04).
* **Thời gian làm bài:** **120 phút** (2 tiếng liên tục).
* **Số lượng bài thi:** **3 bài toán**, tổng điểm là **20 điểm** (cơ cấu thường là: 6đ – 7đ – 7đ).

### 2. Thể lệ thi & Quy cách nộp bài (Cực kỳ quan trọng)
* **Hình thức thi:** Thí sinh làm bài trên máy tính cá nhân trong phòng thi, độc lập, không dùng internet.
* **Quy định ngôn ngữ:**
  * Được phép sử dụng **C++ (`.cpp`)**, **Python (`.py`)** hoặc **Pascal (`.pas`)**.
  * **Đặc quyền linh hoạt:** Mỗi bài toán nộp một tệp riêng. Thí sinh **hoàn toàn có thể dùng Python cho Bài 1** (xử lý chuỗi, mô phỏng) và **dùng C++ cho Bài 2, Bài 3** (cần tốc độ cao, quy hoạch động, mảng lớn).
* **Cơ chế đọc / ghi dữ liệu:**
  * Chương trình **bắt buộc đọc từ tệp văn bản `<TENBAI>.INP`** và **ghi ra tệp `<TENBAI>.OUT`**. (Không dùng bàn phím và màn hình thông thường).
* **Hình thức chấm:**
  * Hệ thống chấm tự động (Themis).
  * Mỗi bài thi được chia thành nhiều **Subtask (ràng buộc)**: Làm đúng thuật toán ngây thơ (vét cạn) vẫn được 30% – 60% số điểm của bài đó!

### 3. Tiêu chí xét giải thưởng & Phổ điểm chuẩn dự kiến (Thang 20 điểm)
Tổng số thí sinh đạt giải chiếm khoảng **50% – 60%** tổng số thí sinh dự thi toàn Thành phố:

| Hạng giải thưởng | Điểm chuẩn dự kiến | Yêu cầu làm bài phòng thi | Tỷ lệ xét giải |
| :--- | :---: | :--- | :--- |
| **Huy chương Vàng** (Giải Nhất) | **16.0 -- 20.0 đ** | Trọn vẹn Bài 1 (6đ) + Trọn vẹn Bài 2 (7đ) + Ăn 3--4đ subtask Bài 3 | Top 5% -- 10% thí sinh cao nhất |
| **Huy chương Bạc** (Giải Nhì) | **13.0 -- 15.5 đ** | Trọn vẹn Bài 1 (6đ) + Ăn 5--6đ Bài 2 + Ăn 1--2đ subtask Bài 3 | Top 15% -- 20% thí sinh tiếp theo |
| **Huy chương Đồng** (Giải Ba) | **10.0 -- 12.5 đ** | Trọn vẹn Bài 1 (6đ) + Ăn 4--5đ subtask cơ bản Bài 2 | Top 20% -- 25% thí sinh tiếp theo |
| **Giải Khuyến khích** | **8.0 -- 9.5 đ** | Trọn vẹn Bài 1 (6đ) + Ăn 2--3đ subtask vét cạn Bài 2 | Khoảng 10% thí sinh kế tiếp |

> $\implies$ **Mục tiêu Đội tuyển Asian School: 12.0 -- 15.0 điểm** là vùng điểm chiến lược nắm chắc **Giải Ba / Giải Nhì (Huy chương Đồng / Bạc)**!

---

## PHẦN II: THỐNG NHẤT MỤC TIÊU & QUY ĐỊNH ĐỘI TUYỂN

Vì lịch học trực tiếp với thầy/cô chỉ có **1 buổi/tuần (90 phút)**, sự thành bại phụ thuộc rất lớn vào tinh thần tự giác và niềm yêu thích môn học của các em:

1. **Kỷ luật thời gian:**
   * Buổi học trực tiếp chỉ có 90 phút nên vào lớp đúng giờ để tận dụng tối đa thời gian trao đổi, giải đáp thắc mắc và sửa bài tập.
2. **Làm bài tập rèn luyện tại nhà (Bắt buộc):**
   * Các em chủ động sắp xếp thời gian hợp lý trong tuần để hoàn thành phiếu bài tập được giao.
   * **Không bắt buộc hay gò bó số giờ cụ thể**, điều quan trọng nhất là tinh thần kiên trì, tự tay viết code và nộp bài trước buổi học kế tiếp để thầy/cô kịp nhận xét.
3. **Quy tắc giải quyết bế tắc (Khi gặp bài khó):**
   * *Bước 1:* Tự suy nghĩ và nháp thuật toán trên giấy ít nhất **20 – 30 phút**.
   * *Bước 2:* Nếu bế tắc, đọc kỹ lại bảng ràng buộc subtask để viết code "trâu" (vét cạn) lấy điểm nhỏ trước.
   * *Bước 3:* Nhắn tin trao đổi với bạn cùng đội tuyển hoặc hỏi thầy/cô trên nhóm học tập. **Tuyệt đối không chép code giải trên mạng mà không hiểu bản chất!**
4. **Tâm thế với C++:**
   * Không sợ sai cú pháp (quên dấu `;`, sai kiểu dữ liệu). Sau 2–3 tuần gõ liên tục, việc gõ C++ sẽ tự nhiên như gõ Python.

---

## PHẦN III: HƯỚNG DẪN SETUP C++ TRÊN CODE::BLOCKS TỪNG BƯỚC

> **Lý do chọn Code::Blocks:** Code::Blocks là IDE tiêu chuẩn, gọn nhẹ và được cài đặt mặc định trên các máy thi Học sinh giỏi Tin học các cấp (từ cấp Quận/Huyện, cấp Thành phố TP.HCM đến cấp Quốc gia). Code::Blocks tích hợp sẵn trình biên dịch GCC/G++ (MinGW), thao tác phím tắt nhanh và không đòi hỏi cấu hình phức tạp.

Giáo viên hướng dẫn trực tiếp học sinh thao tác trên laptop của các em:

### Bước 1: Tải và cài đặt Code::Blocks (Bản tích hợp sẵn MinGW)
1. Truy cập trang tải chính thức: `https://www.codeblocks.org/downloads/binaries/` (hoặc link Google Drive nội bộ của giáo viên).
2. **Quan trọng:** Chọn bản cài đặt có tích hợp sẵn trình biên dịch MinGW:
   * File cài đặt: **`codeblocks-20.03mingw-setup.exe`** (tránh tải bản không có chữ `mingw` vì sẽ thiếu bộ biên dịch).
3. Chạy file cài đặt, chọn các tùy chọn mặc định (Next $\to$ I Agree $\to$ Next $\to$ Install). Khi cài đặt xong, chọn **Yes** để mở Code::Blocks.
4. Ở lần khởi động đầu tiên, Code::Blocks sẽ tự động phát hiện compiler: **GNU GCC Compiler** $\to$ Chọn **Set as default** $\to$ Bấm **OK**.

*(Lưu ý: Đối với học sinh dùng macOS, có thể tải Code::Blocks cho Mac hoặc dùng Xcode Command Line Tools / CLion / Code::Blocks chạy qua máy ảo/Wine).*

---

### Bước 2: Cấu hình chuẩn C++14/C++17 trong Code::Blocks
Để Code::Blocks hỗ trợ đầy đủ các hàm và cú pháp C++ hiện đại dùng trong thi đấu:
1. Trên thanh menu trên cùng, vào: **Settings** $\to$ **Compiler...**
2. Tại tab **Compiler Flags**, tìm và tích chọn:
   * `Have g++ follow the C++17 ISO C++ language standard [-std=c++17]` (hoặc `[-std=c++14]`).
   * Tùy chọn tăng tốc: `Optimize generated code (for speed) [-O2]`.
3. Bấm nút **OK** ở góc dưới để lưu thiết lập.

---

### Bước 3: Phím tắt vàng khi lập trình trên Code::Blocks
Học sinh cần ghi nhớ các phím tắt cực nhanh sau:
* **`Ctrl + Shift + N`**: Tạo nhanh một file mã nguồn trống mới (Empty file).
* **`Ctrl + S`**: Lưu file (luôn lưu tên file có đuôi `.cpp`, ví dụ: `bai1.cpp`).
* **`F9`**: **Build and Run** (Biên dịch và chạy chương trình ngay lập tức -- Phím tắt quan trọng nhất!).
* **`Ctrl + F9`**: Build (Chỉ biên dịch để kiểm tra lỗi cú pháp mà không chạy).
* **`Ctrl + Lăn chuột giữa`**: Phóng to hoặc thu nhỏ cỡ chữ trong khung soạn thảo code.

---

### Bước 4: Chạy thử chương trình C++ đầu tiên
1. Bấm **`Ctrl + Shift + N`** để tạo file mới.
2. Bấm **`Ctrl + S`**, chọn thư mục lưu (ví dụ thư mục `Olympic11` trên máy) và đặt tên file: `hello.cpp`.
3. Gõ đoạn mã nguồn sau:
   ```cpp
   #include <iostream>
   using namespace std;

   int main() {
       cout << "Xin chao! Doi tuyen Olympic Tin hoc 11 san sang!\n";
       return 0;
   }
   ```
4. Bấm phím **`F9`**. Cửa sổ Console nền đen hiện ra in dòng chữ trên kèm dòng thông báo:  
   `Process returned 0 (0x0) execution time : ... s`  
   $\implies$ Chúc mừng các em đã thiết lập thành công môi trường lập trình thi đấu chuẩn!
