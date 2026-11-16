# CẨM NANG KHAI THÁC TÀI NGUYÊN ONLINE & HƯỚNG DẪN TỰ HỌC
## DÀNH CHO HỌC SINH ĐỘI TUYỂN OLYMPIC TIN HỌC 11
**Đơn vị:** Trường Quốc tế Á Châu (The Asian International School) -- Tổ Tin học  
**Tài liệu đọc chính:** *Competitive Programmer's Handbook* (Antti Laaksonen)

---

## I. LỘ TRÌNH ĐỌC SÁCH "COMPETITIVE PROGRAMMER'S HANDBOOK"

Cuốn sách **Competitive Programmer's Handbook** (tác giả Antti Laaksonen) dày 286 trang gồm 30 chương. Đối với kỳ thi **Olympic Tin học khối 11 (Thời gian làm bài 120 phút, 3 bài toán)**, các em **không cần đọc hết toàn bộ 30 chương**, mà cần tập trung đọc có trọng tâm theo 3 nhóm chương dưới đây:

### 1. Nhóm chương CỐT LÕI (Bắt buộc phải đọc và làm chủ)
Đây là các chương chiếm tới **85% - 90% khối lượng kiến thức** xuất hiện trong đề thi Olympic 11:

| Tuần học | Tên chương & Số trang | Nội dung trọng tâm cần nắm | Mục tiêu phòng thi |
| :--- | :--- | :--- | :--- |
| **Tuần 1 -- 2** | **Chapter 1: Introduction** (Trang 3 -- 16) | • C++ Template chuẩn thi đấu.<br>• Fast I/O (`ios::sync_with_stdio(0); cin.tie(0);`).<br>• Xử lý số lớn với `long long`, bẫy tràn số.<br>• Đọc ghi tệp bằng `freopen`. | Cài đặt chương trình chuẩn, không bị mất điểm oan do I/O chậm hoặc tràn số. |
| **Tuần 3 -- 4** | **Chapter 2: Time complexity** (Trang 17 -- 24) | • Cách tính độ phức tạp thời gian: $O(1)$, $O(N)$, $O(N \log N)$, $O(N^2)$.<br>• Bảng ước lượng số phép tính cho phép trong 1.0 giây.<br>• Bài toán tìm dãy con có tổng lớn nhất (Thuật toán Kadane $O(N)$). | Nhìn vào giới hạn $N$ của đề bài để biết ngay thuật toán nào ăn trọn điểm. |
| **Tuần 5 -- 6** | **Chapter 3: Sorting** (Trang 25 -- 34) | • Hàm `sort(v.begin(), v.end())` của C++ STL.<br>• Viết hàm so sánh tự định nghĩa (Custom Comparator).<br>• Thuật toán Tìm kiếm nhị phân (`binary_search`, `lower_bound`, `upper_bound`). | Làm chủ các bài toán sắp xếp và tìm kiếm nhị phân kết quả. |
| **Tuần 7 -- 8** | **Chapter 4: Data structures** (Trang 35 -- 46) | • Mảng động `vector`, Chuỗi `string`.<br>• Tập hợp tự cân bằng `std::set`, `std::multiset`.<br>• Bảng ánh xạ `std::map`.<br>• Hàng đợi ưu tiên `priority_queue` (Max-heap / Min-heap). | Tối ưu hóa cài đặt bài toán với các cấu trúc dữ liệu kinh điển. |
| **Tuần 9 -- 10** | **Chapter 5: Complete search** (Trang 47 -- 56) | • Sinh tập con và sinh hoán vị (`next_permutation`).<br>• Kỹ thuật đệ quy quay lui (Backtracking).<br>• Kỹ thuật tỉa nhánh cận (Pruning) giúp code vét cạn chạy nhanh gấp hàng ngàn lần. | **Bí quyết ăn điểm tuyệt đối các Subtask 1 & 2** (30% - 60% tổng điểm đề thi). |
| **Tuần 11 -- 12** | **Chapter 6: Greedy algorithms** (Trang 57 -- 64) | • Tư duy thuật toán tham lam (Greedy).<br>• Bài toán đổi tiền, chọn lịch hoạt động không giao nhau. | Xử lý bài toán tối ưu hóa trong thời gian $O(N \log N)$. |
| **Tuần 13 -- 16** | **Chapter 7: Dynamic programming** (Trang 65 -- 76) | • Công thức truy hồi & Kỹ thuật nhớ (Memoization).<br>• Bài toán Cái túi (Knapsack Problem 0/1 và không giới hạn).<br>• Dãy con tăng dài nhất (LIS - Longest Increasing Subsequence).<br>• Đường đi tối ưu trên lưới (Paths in a grid). | **Chuyên đề quyết định giải Nhì / giải Nhất** của kỳ thi Olympic 11. |
| **Tuần 17 -- 18** | **Chapter 8: Amortized analysis** (Trang 77 -- 82) | • Phương pháp Hai con trỏ (Two Pointers method).<br>• Bài toán tìm 2 số có tổng bằng $X$ (2SUM).<br>• Cửa sổ trượt (Sliding Window Minimum). | Kỹ thuật tối ưu độ phức tạp từ $O(N^2) \to O(N)$, cực kỳ phổ biến trong đề thi TP.HCM. |
| **Tuần 19 -- 20** | **Chapter 9: Range queries** (Trang 83 -- 94) | • Mảng cộng dồn tĩnh (Prefix Sum 1D & 2D).<br>• Mảng hiệu (Difference Array).<br>• Cây chỉ số nhị phân Fenwick Tree (BIT).<br>• Cây phân đoạn cơ bản (Segment Tree). | Xử lý các truy vấn tính tổng, tìm Min/Max trên đoạn liên tục. |
| **Tuần 21 -- 23** | **Chapter 11, 12, 13, 15: Graph Theory** (Trang 109 -- 148) | • Biểu diễn đồ thị bằng danh sách kề `vector<int> adj[N]`.<br>• Duyệt đồ thị theo chiều sâu (DFS) và chiều rộng (BFS).<br>• Thuật toán tìm đường đi ngắn nhất Dijkstra.<br>• Cây khung nhỏ nhất Kruskal & Disjoint Set Union (DSU). | Xử lý trọn vẹn bài toán Đồ thị (thường là bài số 3 trong đề thi). |
| **Tuần 24 -- 25** | **Chapter 21: Number theory** (Trang 197 -- 206) | • Kiểm tra số nguyên tố $O(\sqrt{N})$.<br>• Sàng nguyên tố Eratosthenes.<br>• Thuật toán Euclid tìm Ước chung lớn nhất (GCD).<br>• Lũy thừa nhị phân nhanh tính $(a^b) \pmod M$. | Ăn trọn điểm câu Số học / Xử lý dãy số (Câu 1 trong đề thi). |

---

### 2. Nhóm chương NÂNG CAO (Đọc bổ trợ khi đã vững nhóm cốt lõi)
* **Chapter 10: Bit manipulation** (Trang 95 -- 106): Làm quen với toán tử bit (`&`, `|`, `^`, `<<`, `>>`), hàm `__builtin_popcount`, và Quy hoạch động trạng thái (Bitmask DP).
* **Chapter 14 & 18: Tree algorithms & LCA** (Trang 133 -- 140, 163 -- 172): Đệ quy trên cây, tìm đường kính của cây, và tìm Tổ tiên chung thấp nhất (Lowest Common Ancestor).
* **Chapter 26: String algorithms** (Trang 243 -- 250): Băm xâu (String Hashing), mảng Z-algorithm.

### 3. Nhóm chương NÊN BỎ QUA (Không cần thiết cho Olympic 11 TP.HCM)
Các chương này thuộc chương trình Chuyên sâu thi Quốc tế (IOI) hoặc thi Đại học (ICPC), các em **không nên dành thời gian đọc** để tránh quá tải:
* *Chapter 17 (2SAT), Chapter 19 (Eulerian/Hamiltonian paths), Chapter 20 (Flows & Cuts - Luồng).*
* *Chapter 22 -- 25 (Tổ hợp cao cấp, Ma trận cấp cao, Xác suất Markov, Lý thuyết trò chơi nâng cao).*
* *Chapter 27 -- 30 (Thuật toán Căn Mo's algorithm, Persistent Segment Tree, Hình học tính toán đa giác phức tạp).*

---

## II. HƯỚNG DẪN CHI TIẾT 3 KHO TÀI NGUYÊN TRỰC TUYẾN

Để việc đọc sách của Antti Laaksonen không bị khô khan, các em hãy kết hợp đồng thời với **3 địa chỉ web "vàng"** sau:

```
                  ┌──────────────────────────────────────────────────────────┐
                  │ SÁCH: Competitive Programmer's Handbook (Antti Laaksonen) │
                  │            (Nắm vững lý thuyết C++ cốt lõi)              │
                  └────────────────────────────┬─────────────────────────────┘
                                               │
             ┌─────────────────────────────────┼─────────────────────────────────┐
             ▼                                 ▼                                 ▼
┌──────────────────────────┐     ┌──────────────────────────┐     ┌──────────────────────────┐
│       VISUALGO.NET       │     │      WIKI.VNOI.INFO      │     │       USACO.GUIDE        │
│   Mô phỏng hình ảnh động │     │  Lý thuyết Tiếng Việt    │     │  Lộ trình luyện bài tập  │
│   Xem thuật toán "chạy"  │     │  & Nộp bài trên VNOJ     │     │  Cấp độ Bronze & Silver  │
└──────────────────────────┘     └──────────────────────────┘     └──────────────────────────┘
```

---

### 1. VisuAlgo -- Website Trực quan hóa Thuật toán
* **Địa chỉ truy cập:** [https://visualgo.net/](https://visualgo.net/) (Có hỗ trợ chọn giao diện Tiếng Việt ở góc trên bên phải).
* **Mục đích sử dụng:** Giúp các em **"nhìn thấy"** thuật toán hoạt động từng bước bằng đồ họa sinh động thay vì chỉ tưởng tượng các dòng code trừu tượng.
* **Cách sử dụng khi học:**
  1. Khi đọc về **Sorting (Sắp xếp)**: Mở mục `Sorting` $\to$ Chọn `Bubble Sort` hoặc `Merge Sort` $\to$ Bấm `Sort` và kéo thanh trượt tốc độ chậm lại để quan sát các phần tử đổi chỗ cho nhau.
  2. Khi đọc về **Cây nhị phân & `std::set`**: Mở mục `BST` (Binary Search Tree) $\to$ Thử `Insert` một vài số và bấm `Search` để thấy con trỏ rẽ trái/rẽ phải tìm số như thế nào.
  3. Khi đọc về **Đồ thị (Graph)**: Mở mục `Graph Traversal` $\to$ Bấm chạy thử thuật toán `BFS` (loang theo từng lớp sóng) và `DFS` (đi sâu hết cỡ rồi quay lui).
  4. Khi đọc về **Dijkstra & Cây khung**: Mở mục `SSSP` (Single-Source Shortest Path) và `MST` (Minimum Spanning Tree).

---

### 2. VNOI Wiki -- Bách khoa toàn thư Thuật toán Tiếng Việt
* **Địa chỉ truy cập:** [https://wiki.vnoi.info/](https://wiki.vnoi.info/)
* **Nền tảng thực hành:** [https://oj.vnoi.info/](https://oj.vnoi.info/) (VNOI Online Judge - VNOJ).
* **Mục đích sử dụng:**
  * Đọc lý thuyết giải thích chi tiết bằng tiếng Việt trong trường hợp đọc sách tiếng Anh của Antti Laaksonen gặp thuật ngữ khó hiểu.
  * Tự tạo một tài khoản miễn phí trên VNOJ để nộp bài làm thử và nhận kết quả chấm tự động (Accepted, Wrong Answer, Time Limit Exceeded).
* **Các bài viết khuyên đọc trên VNOI Wiki:**
  * Chuyên đề C++ STL: `wiki.vnoi.info/algo/basic/c++-stl`
  * Chuyên đề Kỹ thuật Hai con trỏ: `wiki.vnoi.info/algo/basic/two-pointers`
  * Chuyên đề Mảng cộng dồn: `wiki.vnoi.info/algo/basic/prefix-sum`
  * Chuyên đề Quy hoạch động cơ bản: `wiki.vnoi.info/algo/dp/basic-dp`

---

### 3. USACO Guide -- Giáo trình luyện thi Olympic Hoa Kỳ
* **Địa chỉ truy cập:** [https://usaco.guide/](https://usaco.guide/)
* **Mục đích sử dụng:** Rèn luyện phản xạ giải đề thi thật theo từng dạng bài chuẩn hóa quốc tế.
* **Cách thiết lập tài khoản:**
  1. Truy cập trang web và đăng nhập nhanh bằng tài khoản Google.
  2. Ở góc giao diện chọn ngôn ngữ mặc định là **C++17** (tất cả code gợi ý và lời giải mẫu sẽ tự động hiển thị bằng C++).
  3. Chọn mục **Bronze** (Hạng Đồng) trong 2 tháng đầu. Mỗi bài học đều có danh sách bài tập kèm mức độ từ `Easy` đến `Hard`.
  4. Sau khi hoàn thành Bronze, chuyển sang mục **Silver** (Hạng Bạc) -- đây chính là độ khó tương đương với các câu 2 và 3 của đề thi Olympic 11 TP.HCM.

---

## III. BẢNG TRA CỨU TỔNG HỢP (THE ULTIMATE STUDY MATRIX)

Khi học từng chuyên đề, các em chỉ cần tra cứu bảng dưới đây để biết chính xác: **Đọc sách ở đâu $\to$ Xem mô phỏng ở đâu $\to$ Làm bài tập ở đâu:**

| Chuyên đề thi Olympic 11 | Chương trong sách Antti Laaksonen | Mô phỏng trực quan trên VisuAlgo | Đọc thêm trên VNOI Wiki | Luyện bài tập trên USACO Guide |
| :--- | :--- | :--- | :--- | :--- |
| **C++ Căn bản & STL** | Chapter 1 & 4 (Trang 3, 35) | BST, Stack/Queue | `algo/basic/c++-stl` | Bronze $\to$ Getting Started |
| **Độ phức tạp & Hai con trỏ** | Chapter 2 & 8 (Trang 17, 77) | Sorting / Arrays | `algo/basic/two-pointers` | Silver $\to$ Two Pointers |
| **Tìm kiếm nhị phân** | Chapter 3.3 (Trang 31) | BST $\to$ Binary Search | `algo/basic/binary-search` | Silver $\to$ Binary Search |
| **Quy hoạch động (DP)** | Chapter 7 (Trang 65) | DP $\to$ Max Subarray, Knapsack | `algo/dp/basic-dp` | Silver $\to$ Introduction to DP |
| **Mảng cộng dồn (Prefix Sum)** | Chapter 9.1 (Trang 84) | Array Manipulation | `algo/basic/prefix-sum` | Silver $\to$ Prefix Sums |
| **Duyệt đồ thị (BFS / DFS)** | Chapter 11 & 12 (Trang 109, 117) | `Graph Traversal` (BFS/DFS) | `algo/graph/dfs-bfs` | Silver $\to$ Graph Traversal |
| **Đường đi ngắn nhất (Dijkstra)** | Chapter 13 (Trang 123) | `SSSP` $\to$ Dijkstra | `algo/graph/shortest-path` | Gold $\to$ Shortest Paths |
| **Cây khung & DSU** | Chapter 15 (Trang 141) | `MST` (Kruskal) & `UFDS` (DSU) | `algo/data-structures/disjoint-set-union` | Gold $\to$ Disjoint Set Union |
| **Số học & Nguyên tố** | Chapter 21 (Trang 197) | Math algorithms | `algo/math/number-theory` | Bronze $\to$ Divisibility & Simulation |
