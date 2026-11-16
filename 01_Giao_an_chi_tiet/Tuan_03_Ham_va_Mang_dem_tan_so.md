# GIÁO ÁN CHI TIẾT TUẦN 03: HÀM, TRUYỀN THAM CHIẾU & KỸ THUẬT MẢNG ĐẾM TẦN SỐ
## TRƯỜNG QUỐC TẾ Á CHÂU -- BỘ PHẬN BỒI DƯỠNG OLYMPIC TIN HỌC 11 (2026 -- 2027)

> **Thời lượng:** 90 phút (1 buổi duy nhất trong tuần).  
> **Hình thức giảng dạy:** Thuyết trình slide lý thuyết, vẽ mô hình ô nhớ RAM trên bảng, Code live trên Code::Blocks và học sinh tự gõ máy tại chỗ.  
> **Nguồn tư liệu sư phạm:** Trích xuất và phát triển từ `GA - C++` (`Section_09_ham` và kỹ thuật Counting Array thi HSG).  
> **Môi trường thực hành:** Code::Blocks 20.03.

---

### MỤC TIÊU BÀI HỌC (90 PHÚT)

1. **Về kiến thức:**
   * Nắm vững cú pháp hàm, kiểu trả về, lệnh `return` ngắt hàm.
   * Phân biệt bản chất bộ nhớ: Truyền tham trị (**Pass-by-value**) tạo bản sao và Truyền tham chiếu (**Pass-by-reference `&`**) dùng chung ô nhớ.
   * Hiểu sâu sắc kỹ thuật **Mảng đếm tần số (Counting Array / Mảng đánh dấu)**: Dùng giá trị phần tử làm chỉ số mảng.
2. **Về kỹ năng lập trình thi đấu (Competitive Programming):**
   * Biết cách tối ưu thuật toán từ duyệt cạn $O(N^2)$ (TLE) thành truy cập trực tiếp $O(N)$ trong chớp mắt.
   * Xử lý thuần thục kỹ thuật dời trục (Offset) khi dãy có chứa giá trị âm.
   * Thành thạo kỹ thuật đọc/ghi tệp chuẩn Olympic: `freopen`.
3. **Về phẩm chất & thái độ:**
   * Hình thành tư duy "Đổi bộ nhớ lấy thời gian" (Space-Time Tradeoff) -- cốt lõi của Olympic Tin học.

---

### TIẾN TRÌNH LÊN LỚP CHI TIẾT (90 PHÚT)

```
[00:00 - 00:15] KIỂM TRA BÀI CŨ & FAST-TRACK DIAGNOSTIC TUẦN 3 (15 phút)
[00:15 - 00:40] CHUYÊN ĐỀ 1: HÀM & TRUYỀN THAM CHIẾU & (25 phút)
[00:40 - 01:10] CHUYÊN ĐỀ 2: BƯỚC NGOẶT MẢNG ĐẾM TẦN SỐ O(N) (30 phút)
[01:10 - 01:30] THỰC HÀNH TẠI LỚP, GIAO BỘ CẨM NANG TỰ HỌC A-Z & BTVN (20 phút)
```

> [!TIP]
> **CHIẾN LƯỢC DẠY NHANH (FAST-TRACK DIAGNOSTIC TUẦN 3):**  
> Trong 10 phút đầu, giáo viên đặt nhanh **Bộ 3 câu hỏi chẩn đoán**:
> 1. Hàm `void` khác hàm có kiểu trả về (`int`, `bool`) ở điểm mấu chốt nào? *(Đáp án: `void` không có giá trị trả về, các hàm kia bắt buộc phải có lệnh `return`)*.
> 2. Cú pháp `void tang(int &x)` có dấu `&` khác gì với `void tang(int x)`? *(Đáp án: Có `&` là truyền tham chiếu làm thay đổi biến gốc; không có `&` là truyền tham trị chỉ đổi bản sao)*.
> 3. Thay vì 2 vòng for lồng nhau $O(N^2)$ tìm số xuất hiện nhiều nhất, ta dùng kỹ thuật gì để đạt $O(N)$? *(Đáp án: Mảng đếm tần số `cnt[x]++`)*.  
> $\implies$ **Nếu học sinh đã rõ:** Lướt nhanh lý thuyết cú pháp hàm, dồn toàn lực vào phân tích bài toán thực chiến mảng đếm và kỹ thuật dời trục Offset số âm!  
> $\implies$ **Nhiệm vụ tự học ở nhà:** Tự cày toàn bộ bài tập trong **Cẩm nang Tự học C++ Tập 04**.

---

### [00:00 - 00:15] KIỂM TRA BÀI CŨ & SỬA BÀI TẬP TUẦN 2 (15 phút)
* **Nội dung kiểm tra:**
  1. Kiểm tra học sinh đã khai báo mảng tĩnh toàn cục ở ngoài hàm `main()` hay chưa?
  2. Bẫy khởi tạo Min/Max: Hỏi học sinh *"Tại sao không được khởi tạo `max = 0`?"*.
  3. Lỗi chỉ số ngoài biên: `a[n]` đối với mảng 0-based hoặc `a[n+1]` đối với 1-based.

---

### [00:15 - 00:40] CHUYÊN ĐỀ 1: HÀM & TRUYỀN THAM CHIẾU (25 phút)
* **Giáo viên vẽ hình trên bảng:**
  * Minh họa hộp biến `a` ở ô nhớ `0x1000`.
  * Khi gọi `tang_mot(a)`: tạo hộp biến `x` mới ở ô `0x2000` (bản sao).
  * Khi gọi `tang_mot_that(int &x)`: con trỏ nhãn `x` trỏ thẳng vào ô nhớ `0x1000` của `a`.
* **Học sinh gõ thử nghiệm trên Code::Blocks:**
  * Tự viết hàm `my_swap(int &u, int &v)`. Chạy thử không có dấu `&` và có dấu `&` để tự rút ra kết luận.

---

### [00:40 - 01:10] CHUYÊN ĐỀ 2: BƯỚC NGOẶT MẢNG ĐẾM TẦN SỐ (30 phút)
* **Đặt bài toán kịch tính:**
  * Cho dãy $N = 100.000$ số. Tìm số xuất hiện nhiều nhất.
  * Giáo viên chạy thử code 2 vòng for lồng nhau: Code bị treo và đơ máy (quá 10 giây chưa ra kết quả).
  * Giới thiệu mảng `cnt[MAX_VAL]`: Chỉ cần 1 vòng lặp đọc `cin >> x; cnt[x]++;`. Kết quả hiện ra ngay lập tức sau 0.01 giây!
  * Phân tích cho học sinh: Đây chính là nguyên lý **"Đổi RAM lấy Tốc độ"**.

---

### [01:10 - 01:30] THỰC HÀNH TẠI LỚP & BTVN (20 phút)
* **Học sinh thực hành trực tiếp:** Bài toán `UNIQUE` (Tìm phần tử độc nhất và đếm số lượng giá trị phân biệt).
* **Giao bài tập về nhà:** Phiếu bài tập Tuần 03 (gồm các bài toán mảng đếm tần số, kiểm tra anagram, đếm cặp số).
