# KẾ HOẠCH CHI TIẾT ÔN LUYỆN OLYMPIC TIN HỌC KHỐI 11 (2026 – 2027)

> **Đối tượng:** Học sinh khối 11 bắt đầu học và sử dụng trực tiếp C++ thi đấu.  
> **Thời gian đào tạo:** Từ ngày **08/09/2026** đến kỳ thi Olympic (khoảng tháng 04/2027) (~28 đến 30 tuần).  
> **Thời lượng:** 
> * **Trên lớp:** 01 buổi/tuần (90 phút/buổi).
> * **Tự học & Thực hành tại nhà:** Hoàn thành đầy đủ phiếu bài tập hàng tuần (học sinh chủ động sắp xếp thời gian hợp lý).

---

## I. MỤC TIÊU ĐÀO TẠO

1. **Mục tiêu điểm số trong kỳ thi Olympic TP.HCM (Thang điểm 20):**
   * **Bài 1 (6 điểm):** Đạt trọn vẹn **6.0 / 6.0 điểm** (Dạng Xử lý xâu, mảng, prefix sum, two pointers, số học cơ bản).
   * **Bài 2 (7 điểm):** Đạt tối thiểu **4.0 – 5.0 / 7.0 điểm** (Ăn trọn các subtask cơ bản & trung bình của Quy hoạch động / Tham lam / Toán).
   * **Bài 3 (7 điểm):** Đạt tối thiểu **2.0 – 3.0 / 7.0 điểm** (Viết subtask vét cạn / cấu trúc dữ liệu / mô phỏng chính xác).
   * **Tổng điểm kỳ vọng:** **12.0 – 15.0 / 20.0 điểm** (Đủ điều kiện tranh giải Nhì / Ba cấp Thành phố).

2. **Mục tiêu kỹ năng:**
   * Sử dụng thành thạo **C++ Competitive Programming** từ cú pháp căn bản đến C++ STL (`vector`, `string`, `pair`, `set`, `map`, `sort`).
   * Nắm vững kỹ thuật phân tích độ phức tạp thời gian (\(O(N), O(N \log N), O(N^2)\)) để chọn thuật toán phù hợp với từng subtask.

---

## II. CƠ CẤU 1 BUỔI HỌC (90 PHÚT) TRÊN LỚP

* **15 phút đầu:** **Review & Code Audit:** Sửa bài tập về nhà của tuần trước, kiểm tra các lỗi cú pháp, bẫy tràn số và tối ưu thời gian chạy.
* **45 phút giữa:** **Chuyên đề trọng tâm:** Giới thiệu kỹ thuật/thuật toán mới + Giáo viên cùng học sinh live-code bài toán mẫu trên Code::Blocks.
* **30 phút cuối:** **Luyện tư duy & Thực hành:** Hướng dẫn học sinh giải bài tập áp dụng, phân tích subtask và hướng dẫn phiếu bài tập về nhà.

---

## III. LỘ TRÌNH 28 TUẦN THEO TỪNG GIAI ĐOẠN

### GIAI ĐOẠN 1: C++ CĂN BẢN & XÂY DỰNG TƯ DUY NỀN TẢNG (Tuần 1 – Tuần 8)
*Mục tiêu: Dạy C++ bài bản từ con số 0, giúp học sinh rèn luyện phản xạ lập trình vững vàng, nắm chắc thao tác Mảng, Xâu, Số học và kỹ thuật tiền xử lý trước khi vào thuật toán chuyên sâu.*

* **Tuần 1 (08/09 – 14/09): Khởi động đội tuyển, Cài đặt Code::Blocks & Cú pháp C++ cốt lõi** *(Đã hoàn thành)*
  * Định hướng kỳ thi, cơ cấu giải thưởng, thống nhất quy định học tập.
  * Cài đặt IDE Code::Blocks (bản tích hợp MinGW GNU GCC), cấu hình cờ biên dịch `-std=c++17`, phím tắt `F9` (Build & Run), và `freopen` vào/ra tệp `.INP` / `.OUT`.
  * Cú pháp căn bản: Kiểu dữ liệu `int`, `long long` (bẫy tràn số), lệnh `cin`/`cout`, rẽ nhánh `if/else`, vòng lặp `for` đơn.
  * Giao phiếu bài tập rèn luyện cú pháp căn bản (10 bài).

* **Tuần 2 (15/09 – 21/09): Vòng lặp lồng nhau & Kỹ thuật Mảng 1 chiều toàn diện**
  * Vòng lặp `while`, `do-while` và vòng lặp lồng nhau (`nested loops`).
  * Mảng 1 chiều trong C++: Khai báo mảng tĩnh, mảng toàn cục vs cục bộ, chỉ số 0-based vs 1-based.
  * Các bài toán kinh điển: Tìm Min/Max và vị trí, tính tổng/tích mảng, đếm số chẵn/lẻ/nguyên tố, đảo ngược mảng.
  * Hệ thống bài tập về nhà: 10 bài tập phân tầng (từ siêu cơ bản đến tư duy mảng).

* **Tuần 3 (22/09 – 28/09): Xây dựng Hàm (Function), Tham chiếu (`&`) & Kỹ thuật Mảng đếm tần số (Counting Array)**
  * Xây dựng hàm tự định nghĩa, phạm vi biến, truyền tham trị vs truyền tham chiếu (`&`).
  * Kỹ thuật Mảng đếm tần số (Counting Array / Mảng đánh dấu): Chuyển hóa tư duy từ $O(N^2)$ sang $O(N)$.
  * Giải quyết bài toán: Đếm số lần xuất hiện trong $O(N)$, đếm số cặp có tổng bằng $K$, tìm phần tử đa số.

* **Tuần 4 (29/09 – 05/10): Xử lý Ký tự (`char`) & Xâu ký tự (`std::string`)**
  * Bảng mã ASCII, các hàm ký tự: `isdigit`, `isalpha`, `tolower`, `toupper`.
  * Thư viện `std::string`: `length()`, `substr()`, duyệt ký tự, ghép xâu, đảo xâu.
  * Dạng bài kinh điển Bài 1 Olympic: Đếm từ, chuẩn hóa xâu họ tên, xâu đối xứng (Palindrome), nén xâu ký tự, trích xuất số trong xâu.

* **Tuần 5 (06/10 – 12/10): Số học căn bản trong Lập trình thi đấu**
  * Ước số, kiểm tra số nguyên tố tối ưu trong $O(\sqrt{N})$, phân tích thừa số nguyên tố.
  * Thuật toán Euclid tìm Ước chung lớn nhất (GCD / `__gcd`), Bội chung nhỏ nhất (LCM).
  * Sàng số nguyên tố Eratosthenes ($O(N \log \log N)$), ứng dụng sàng mảng lớn.
  * Kỹ thuật tách chữ số của số nguyên lớn ($N \% 10, N / 10$).

* **Tuần 6 (13/10 – 19/10): Kỹ thuật Tiền xử lý: Mảng cộng dồn (Prefix Sum) & Mảng hiệu (Difference Array)**
  * Sau khi học sinh đã vững mảng: Tiếp cận Mảng cộng dồn $P[i]$ cực kỳ tự nhiên.
  * Kỹ thuật tính tổng đoạn $[L, R]$ trong $O(1)$ thay vì lặp $O(N)$.
  * Kỹ thuật Mảng hiệu (Difference Array): Cập nhật tăng đoạn $[L, R]$ thêm giá trị $V$ trong $O(1)$.

* **Tuần 7 (20/10 – 26/10): Sắp xếp (`std::sort`), Mảng động `std::vector` & Kỹ thuật Hai con trỏ (Two Pointers)**
  * Giới thiệu hàm sắp xếp `std::sort`, cấu trúc mảng động `std::vector`.
  * Kỹ thuật Hai con trỏ ngược chiều (Two Sum) và cùng chiều (Cửa sổ trượt / Sliding Window).
  * Thực chiến giải mã trọn vẹn 100% điểm bài toán **NGHE NHẠC** (Đề thi thật Olympic 11 TP.HCM 2024–2025).

* **Tuần 8 (27/10 – 02/11): Tìm kiếm nhị phân căn bản & Mini-Contest Đánh giá Giai đoạn 1**
  * Tìm kiếm nhị phân trên mảng đã sắp xếp: Bản chất thuật toán và hàm có sẵn `binary_search`, `lower_bound`.
  * **Mini-Contest 1** (Thời gian 120 phút, 3 bài): Đánh giá toàn diện kiến thức Giai đoạn 1 (Xử lý xâu, Mảng cộng dồn, Hai con trỏ).

---

### GIAI ĐOẠN 2: CẤU TRÚC DỮ LIỆU C++ STL NÂNG CAO & TÌM KIẾM (Tuần 9 – Tuần 13)
* **Tuần 9 (03/11 – 09/11):** Cấu trúc dữ liệu nâng cao: `pair`, `struct`, hàm so sánh tùy biến (Custom Comparator) trong `sort`.
* **Tuần 10 (10/11 – 16/11):** Cấu trúc Tập hợp & Ánh xạ: `std::set`, `std::map`. Ứng dụng mô phỏng và đếm phân phối (Bài toán **ROBOT**).
* **Tuần 11 (17/11 – 23/11):** Hàng đợi ưu tiên (`priority_queue`), Ngăn xếp (`stack`), Hàng đợi hai đầu (`deque`).
* **Tuần 12 (24/11 – 30/11):** Kỹ thuật Chặt nhị phân kết quả (Binary Search on Answer) — chìa khóa ăn điểm Bài 2 Olympic.
* **Tuần 13 (01/12 – 07/12):** Đệ quy căn bản & Thuật toán Quay lui (Backtracking) sinh tập con, sinh hoán vị vét cạn subtask.

---

### GIAI ĐOẠN 3: TRỌNG TÂM QUY HOẠCH ĐỘNG (DP) (Tuần 14 – Tuần 19)
* **Tuần 14 (08/12 – 14/12):** Nhập môn Quy hoạch động: Bảng phương án, bài toán Bậc thang, Đổi tiền (Coin Change).
* **Tuần 15 (15/12 – 21/12):** Dãy con tăng dài nhất (LIS): Từ $O(N^2)$ lên $O(N \log N)$, kỹ thuật truy vết phương án.
* **Tuần 16 (22/12 – 28/12):** Bài toán Balo (Knapsack 0/1 và Unbounded): Kỹ thuật tối ưu không gian mảng 1 chiều.
* **Tuần 17 (29/12 – 04/01):** Quy hoạch động trên Lưới / Ma trận: Giải bài toán **LOCO** (Olympic 30/4 năm 2023).
* **Tuần 18 (05/01 – 11/01):** Quy hoạch động Phân đoạn: Chọn $K$ đoạn không giao nhau. Giải bài **THU HOẠCH** (Olympic TP.HCM 2025–2026).
* **Tuần 19 (12/01 – 18/01):** Quy hoạch động Xâu: Xâu con chung dài nhất (LCS), Xâu đối xứng & **Mini-Contest 2 (Chuyên đề DP)**.

---

### GIAI ĐOẠN 4: LÝ THUYẾT ĐỒ THỊ CƠ BẢN (Tuần 20 – Tuần 23)
* **Tuần 20 (19/01 – 25/01):** Biểu diễn đồ thị bằng Danh sách kề, duyệt BFS và DFS, đếm số thành phần liên thông.
* **Tuần 21 (26/01 – 01/02):** Ứng dụng BFS/DFS: Kiểm tra chu trình, đồ thị hai phía. Phân tích bài **SLTPLT** (Olympic 30/4 năm 2023).
* **Tuần 22 (02/02 – 08/02):** Cấu trúc DSU (Disjoint Set Union) & Thuật toán Kruskal tìm Cây khung nhỏ nhất (MST).
* **Tuần 23 (09/02 – 15/02):** Đường đi ngắn nhất Dijkstra với `priority_queue` trong $O((V+E)\log V)$ & **Mini-Contest 3 (Tổng kết Đồ thị)**.

---

### GIAI ĐOẠN 5: LUYỆN ĐỀ THỰC CHIẾN & CHIẾN THUẬT PHÒNG THI (Tuần 24 – Tuần 28)
* **Tuần 24 – 25:** Luyện giải toàn diện các bộ đề Olympic chính thức TP.HCM và Olympic 30/4 các năm (120 phút / 3 bài).
* **Tuần 26 – 27:** Rèn luyện kỹ thuật Stress Test (viết script sinh test ngẫu nhiên để phát hiện test sai sót và bẫy TLE).
* **Tuần 28 (Sát ngày thi):** Tổng duyệt chiến thuật phân bổ thời gian: 40 phút Bài 1 (trọn 6đ), 50 phút Bài 2 (ăn 5-6đ), 30 phút vét điểm subtask Bài 3 (ăn 2-3đ) $\to$ Chắc chắn đạt 13 – 15 điểm.
