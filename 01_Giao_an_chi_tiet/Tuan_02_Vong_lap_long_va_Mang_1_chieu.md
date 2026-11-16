# GIÁO ÁN CHI TIẾT TUẦN 02: VÒNG LẶP NÂNG CAO & KỸ THUẬT MẢNG 1 CHIỀU
## TRƯỜNG QUỐC TẾ Á CHÂU -- BỘ PHẬN BỒI DƯỠNG OLYMPIC TIN HỌC 11 (2026 -- 2027)

> **Thời lượng:** 90 phút (1 buổi duy nhất trong tuần).  
> **Hình thức giảng dạy:** Kết hợp trình chiếu slide lý thuyết, code live trực tiếp trên Code::Blocks và hướng dẫn học sinh thao tác từng bước trên máy.  
> **Nguồn tư liệu sư phạm:** Trích xuất và phát triển từ hệ thống bài giảng `GA - C++` (`Section_06_vong-lap-while-va-do-while` và `Section_07_mang`).

---

### MỤC TIÊU BÀI HỌC (90 PHÚT)
1. **Về kiến thức:**
   * Nắm vững cơ chế hoạt động của `while`, `do-while`, vòng lặp lồng nhau và các lệnh điều khiển luồng `break`, `continue`.
   * Hiểu rõ cấu trúc bộ nhớ của Mảng 1 chiều trong C++, quản lý chỉ số $0$-based và $1$-based.
   * Nắm chắc các thao tác kinh điển: duyệt mảng, tìm kiếm Max/Min, đếm tần số, kiểm tra tính chất mảng.
2. **Về kỹ năng lập trình thi đấu (Competitive Programming):**
   * Biết cách khai báo mảng kích thước lớn ngoài hàm `main` (tránh tràn ngăn xếp Stack Overflow).
   * Khắc phục triệt để lỗi tràn số (`long long`) khi tính toán tổng, tích, hiệu phần tử.
   * Làm chủ kỹ thuật vào/ra bằng tệp (`freopen`) chuẩn kỳ thi HSG cấp Thành phố.
3. **Về phẩm chất & thái độ:**
   * Rèn luyện tính cẩn thận, tỉ mỉ khi xử lý các chỉ số biên (`0`, `N-1`, `1`, `N`).
   * Tự tin gõ code, không còn sợ lỗi cú pháp C++.

---

## PHẦN I: TIẾN TRÌNH LÊN LỚP CHI TIẾT TỪNG PHÚT (90 PHÚT)

```
[00:00 - 00:15] KIỂM TRA BÀI CŨ & FAST-TRACK DIAGNOSTIC TUẦN 2 (15 phút)
[00:15 - 00:40] CHUYÊN ĐỀ 1: VÒNG LẶP NÂNG CAO & VÒNG LẶP LỒNG NHAU (25 phút)
[00:40 - 01:10] CHUYÊN ĐỀ 2: KỸ THUẬT MẢNG 1 CHIỀU TOÀN DIỆN TRONG C++ (30 phút)
[01:10 - 01:30] THỰC HÀNH TẠI LỚP, GIAO BỘ CẨM NANG TỰ HỌC A-Z & BTVN (20 phút)
```

> [!TIP]
> **CHIẾN LƯỢC DẠY NHANH (FAST-TRACK DIAGNOSTIC TUẦN 2):**  
> Trong 10 phút đầu, giáo viên đặt nhanh **Bộ 3 câu hỏi chẩn đoán**:
> 1. Cho $N = 2026$, dùng phép toán nào để lấy ra chữ số hàng đơn vị và rút gọn số? *(Đáp án: `cs = n % 10; n /= 10;`)*.
> 2. Mảng khai báo `int a[5];` có phần tử `a[5]` hay không? *(Đáp án: Không! Chỉ có `a[0]` đến `a[4]`, truy cập `a[5]` là lỗi Out-of-bounds)*.
> 3. Khai báo `int a[1000000];` trong hàm `main()` sẽ bị lỗi gì? *(Đáp án: Sập chương trình do Stack Overflow, bắt buộc phải khai báo ngoài hàm `main`)*.  
> $\implies$ **Nếu học sinh đã rõ:** Giáo viên lướt nhanh phần nhập/xuất mảng cơ bản (tiết kiệm 20 phút), dồn thời lượng cho kỹ thuật đảo mảng đối xứng 2 con trỏ và thực hành Debug/Watches trên Code::Blocks!  
> $\implies$ **Nhiệm vụ tự học ở nhà:** Tự cày toàn bộ bài tập trong **Cẩm nang Tự học C++ Tập 02 & Tập 03**.

---

### [00:00 - 00:15] KIỂM TRA BÀI CŨ & SỬA BÀI TẬP TUẦN 1 (15 phút)
* **Mục đích:** Khắc phục triệt để các lỗi học sinh thường mắc trong tuần đầu chuyển từ Python sang C++.
* **Các lỗi tiêu biểu cần chỉnh sửa:**
  1. *Lỗi quên dấu chấm phẩy `;`:* Nhắc nhở C++ là ngôn ngữ kết thúc lệnh bằng `;`.
  2. *Lỗi tràn số trong phép tính:* Trong bài diện tích hình thang, học sinh viết `int S = (a + b) * h / 2;` $\implies$ Tràn số kiểu `int` khi $a, b, h \approx 10^6$. Sửa lại: Dùng `long long` hoặc `1LL * (a + b) * h / 2`.
  3. *Lỗi chia nguyên:* Trong C++, `5 / 2 = 2`. Muốn ra số thực phải viết `5.0 / 2` hoặc ép kiểu `(double)a / b`.
  4. *Tách chữ số số nguyên:* Sửa nhanh bài kiểm tra Palindrome số lớn $N \le 10^{14}$ bằng vòng lặp `while (N > 0)`.

---

### [00:15 - 00:40] CHUYÊN ĐỀ 1: VÒNG LẶP NÂNG CAO (25 phút)

#### 1. Vòng lặp `while` và `do-while`
* **So sánh cơ chế:**
  * `while (điều_kiện)`: Kiểm tra điều kiện **trước**, nếu đúng mới thực hiện thân vòng lặp. Có thể không chạy lần nào.
  * `do { ... } while (điều_kiện);`: Thực hiện thân vòng lặp **ít nhất 1 lần**, sau đó mới kiểm tra điều kiện.
* **Lệnh điều khiển luồng:**
  * `break`: Lập tức thoát khỏi vòng lặp trong cùng gần nhất.
  * `continue`: Bỏ qua các câu lệnh còn lại trong vòng lặp hiện tại, nhảy ngay sang lần lặp tiếp theo.

#### 2. Kỹ thuật Vòng lặp lồng nhau (Nested Loops) & Vẽ hình tư duy
* **Bản chất:** Với mỗi lần chạy của vòng lặp ngoài (chỉ số $i$), vòng lặp trong (chỉ số $j$) sẽ chạy hết một chu kỳ.
* **Ví dụ mẫu: In tam giác sao vuông góc trái kích thước $N$:**
  ```cpp
  for (int i = 1; i <= n; ++i) {
      for (int j = 1; j <= i; ++j) {
          cout << "*";
      }
      cout << "\n";
  }
  ```
* **Kỹ thuật Cờ hiệu (Flag / Boolean Checking):**
  * Dùng biến `bool found = false;` để ghi nhận trạng thái khi duyệt vòng lặp.
  * Khi tìm thấy phần tử thỏa mãn, đặt `found = true; break;`.

---

### [00:40 - 01:10] CHUYÊN ĐỀ 2: KỸ THUẬT MẢNG 1 CHIỀU TOÀN DIỆN (30 phút)

#### 1. Bản chất Mảng trong bộ nhớ máy tính
* Mảng là một dãy các ô nhớ **liên tiếp** có cùng kiểu dữ liệu.
* Khi khai báo `int a[100];`, máy tính cấp phát $100 \times 4$ byte liên tục.
* Truy cập `a[i]` có độ phức tạp thời gian **$O(1)$** vì CPU chỉ cần tính địa chỉ: $\text{Địa\_chỉ}(a[i]) = \text{Địa\_chỉ\_gốc} + i \times \text{kích\_thước\_kiểu}$.

#### 2. Quy tắc khai báo mảng trong Lập trình thi đấu
* **Quy tắc ngăn xếp (Stack):** Biến khai báo trong hàm `main` được đặt trong bộ nhớ Stack (giới hạn thường chỉ từ 1MB đến 8MB). Nếu khai báo `int a[1000000];` trong `main()`, chương trình sẽ bị lỗi **Stack Overflow** (sập ngay lập tức)!
* **Giải pháp chuẩn:**
  1. Khai báo mảng tĩnh toàn cục (bên ngoài hàm `main`):
     ```cpp
     const int MAXN = 100005;
     long long a[MAXN]; // Dat ngoai main, vao vung nho BSS / Data (thoai mai toi vai tram MB)
     ```
  2. Hoặc sử dụng `std::vector<long long> a(n);` (cấp phát động trên Heap).

#### 3. Bộ mẫu thuật toán cơ bản trên Mảng 1 chiều (Core Templates)
* **Mẫu 1: Tìm Min / Max và vị trí:**
  ```cpp
  long long max_val = a[0];
  int pos = 0;
  for (int i = 1; i < n; ++i) {
      if (a[i] > max_val) {
          max_val = a[i];
          pos = i;
      }
  }
  ```
* **Mẫu 2: Đếm tần số xuất hiện của giá trị $K$:**
  ```cpp
  int cnt = 0;
  for (int i = 0; i < n; ++i) {
      if (a[i] == k) cnt++;
  }
  ```
* **Mẫu 3: Đảo ngược mảng tại chỗ (In-place Reversal):**
  ```cpp
  for (int i = 0; i < n / 2; ++i) {
      swap(a[i], a[n - 1 - i]);
  }
  ```

---

### [01:10 - 01:30] THỰC HÀNH TẠI LỚP & HƯỚNG DẪN BTVN (20 phút)

#### 1. Bài tập thực hành trực tiếp trên máy: Chuẩn tệp `.INP` và `.OUT`
* **Đánh giá tại lớp:** Học sinh gõ thành công bài toán đảo ngược mảng có đọc xuất file `.INP` / `.OUT` trên Code::Blocks (bấm `F9` chạy chuẩn xác).
* Hướng dẫn học sinh gõ đoạn mã mở tệp:
  ```cpp
  freopen("DAO.INP", "r", stdin);
  freopen("DAO.OUT", "w", stdout);
  ```
* Yêu cầu học sinh nạp dữ liệu và kiểm tra kết quả tự động ghi ra `DAO.OUT`.

#### 2. Giới thiệu sơ bộ Thuật toán Kadane (Đoạn con liên tiếp có tổng lớn nhất)
* Đặt câu hỏi kích thích tư duy: "Nếu có $N = 10^5$ số, duyệt 2 vòng for hết $O(N^2) = 10^{10}$ phép tính (chạy mất 10 giây $\implies$ Bị loại TLE). Làm sao làm được trong 1 vòng for $O(N)$?"
* Giải thích tư duy: Khi tổng cộng dồn đang âm, giữ nó lại chỉ làm giảm các phần tử phía sau $\implies$ Reset về 0.

#### 3. Giao nhiệm vụ tự học ở nhà
* Giao Phiếu bài tập Tuần 02 (10 bài tập phân tầng từ Khởi động đến Olympic).
* Yêu cầu: Hoàn thành tối thiểu 8/10 bài, tự tay gõ trên máy, chú ý khai báo kiểu `long long`.
