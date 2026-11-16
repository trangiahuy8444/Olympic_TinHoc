# BÍ KÍP PHÒNG THI: TRÁNH TLE (QUÁ THỜI GIAN) VÀ TRÀN SỐ
## TÀI LIỆU ĐỌC BẮT BUỘC TRƯỚC MỌI KỲ THI OLYMPIC TIN HỌC

Trong các kỳ thi Olympic và Học sinh giỏi Tin học, **2 lỗi phổ biến nhất khiến học sinh bị mất điểm oan** là:
1. **TLE (Time Limit Exceeded - Chạy quá thời gian quy định, thường là 1.0 giây).**
2. **Tràn số nguyên (Integer Overflow - Kết quả ra số âm hoặc sai do dùng kiểu `int`).**

---

### 1. BẢNG QUY TẮC VÀNG: GIỚI HẠN DỮ LIỆU $\implies$ ĐỘ PHỨC TẠP CHO PHÉP

> **Quy tắc thực tế:** Trong 1.0 giây, máy chấm thi của kỳ thi Olympic xử lý được khoảng **$10^8$ phép tính** (đối với C++) và khoảng **$10^7$ phép tính** (đối với Python).

| Ràng buộc dữ liệu trong đề | Độ phức tạp tối đa cho phép | Thuật toán thường áp dụng |
| :--- | :--- | :--- |
| $N \le 10 \dots 11$ | $O(N!)$ hoặc $O(N^2 \cdot 2^N)$ | Quay lui hoán vị, vét cạn toàn bộ, DP Bitmask |
| $N \le 20 \dots 22$ | $O(2^N)$ hoặc $O(N \cdot 2^N)$ | Quay lui tập con, duyệt nhánh cận, Meet-in-the-middle |
| $N \le 100$ | $O(N^4)$ hoặc $O(N^3)$ | Floyd-Warshall, Quy hoạch động 3 chiều |
| $N \le 500$ | $O(N^3)$ | Nhân ma trận, DP trên đoạn, luồng cực đại |
| $N \le 2000 \dots 5000$ | $O(N^2)$ | DP 2 chiều (như bài THU HOẠCH), 2 vòng for lồng nhau |
| $N \le 10^5 \dots 2 \cdot 10^5$ | $O(N \log N)$ hoặc $O(N)$ | Sắp xếp, Chặt nhị phân, Two Pointers, Prefix Sum, DSU, Dijkstra |
| $N \le 10^6 \dots 10^7$ | $O(N)$ hoặc $O(N \log \log N)$ | Sàng Eratosthenes, Two Pointers, Mảng hiệu |
| $N \le 10^9 \dots 10^{18}$ | $O(\log N)$ hoặc $O(1)$ | Lũy thừa nhanh, Chặt nhị phân kết quả, Công thức toán |

---

### 2. HAI DÒNG LỆNH "BẤT LY THÂN" ĐỂ TRÁNH TLE TRONG C++

Khi chấm trên hệ thống tự động, nếu đọc dữ liệu bằng `cin/cout` thông thường mà không tắt đồng bộ với C I/O, thời gian vào ra tệp sẽ chiếm tới 70% tổng thời gian chạy!

**Luôn đặt đoạn code sau ở dòng đầu tiên của hàm `main()`:**
```cpp
ios_base::sync_with_stdio(false);
cin.tie(NULL);
```

**Tuyệt đối không dùng `endl` trong vòng lặp:**
```cpp
// SAI (Chậm gấp 10 lần vì bị flush đệm liên tục):
cout << ans << endl;

// ĐÚNG:
cout << ans << "\n";
```

---

### 3. QUY TẮC ÉP KIỂU TRÁNH TRÀN SỐ VỚI `1LL`

Trong C++, khi hai biến kiểu `int` nhân với nhau, kết quả tạm thời được lưu ở kiểu `int`. Nếu tích $> 2 \cdot 10^9$, nó sẽ bị tràn số **ngay trước khi** gán vào biến `long long`!

```cpp
int a = 1000000; // 10^6
int b = 1000000; // 10^6

// SAI: Biến tích vẫn bị tràn thành số âm mặc dù 'tich' là long long!
long long tich = a * b; 

// ĐÚNG: Ép kiểu một trong hai toán hạng về long long bằng '1LL' (1 Long Long):
long long tich_dung = 1LL * a * b; 
```

---

### 4. CHIẾN THUẬT "ĂN CHẮC TỪNG SUBTASK" TRONG PHÒNG THI

Đề thi Olympic luôn chia điểm theo từng Subtask rõ ràng. Khi chưa nghĩ ra thuật toán $100\%$ điểm:
1. **Viết ngay code vét cạn cho Subtask 1:** Đừng bỏ trống! Chỉ cần 2 vòng for hoặc đệ quy đơn giản, bạn đã nắm chắc **30% -- 50% số điểm của bài đó**.
2. **Tách nhánh theo điều kiện đề bài:**
   ```cpp
   if (n <= 1000) {
       solve_subtask1(); // Thuật toán O(N^2)
   } else {
       solve_subtask2(); // Thuật toán O(N log N)
   }
   ```
3. **Kiểm tra kỹ các trường hợp biên đặc biệt (Edge Cases):**
   * Mảng chỉ có $N = 1$ phần tử.
   * Dãy số có cả số âm, số 0 hoặc tất cả các phần tử bằng nhau.
   * Không tìm thấy đáp án: Đề bài yêu cầu in ra `-1` hay `0`?
