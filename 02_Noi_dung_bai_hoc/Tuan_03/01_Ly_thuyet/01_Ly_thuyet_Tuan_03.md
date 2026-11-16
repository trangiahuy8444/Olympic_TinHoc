# BÀI GIẢNG TUẦN 03 (NGÀY 22/09/2026)
## CHỦ ĐỀ: HÀM (FUNCTIONS), TRUYỀN THAM CHIẾU & KỸ THUẬT MẢNG ĐẾM TẦN SỐ (COUNTING ARRAY)

> **Thời lượng:** 90 phút.  
> **Đơn vị:** Trường Quốc tế Á Châu (The Asian International School) -- Tổ Tin học.  
> **Tài liệu tham khảo:** Giáo trình `GA - C++` (`Section_09_ham`, `Section_07_mang`) & Kỹ thuật mảng tần số Olympic.  
> **Đối tượng:** Học sinh Đội tuyển Olympic Tin học 11.  
> **Môi trường thực hành:** Code::Blocks 20.03 (MinGW GCC, `-std=c++17`, `-O2`).

---

## MỤC TIÊU BÀI HỌC CỐT LÕI

1. **Về tư duy lập trình cấu trúc & Module hóa:**
   * Hiểu lý do vì sao cần chia nhỏ chương trình thành các hàm chức năng: Tái sử dụng mã nguồn, dễ kiểm tra (debug), code rõ ràng và ngắn gọn.
   * Phân biệt rạch ròi giữa hàm không trả về giá trị (`void`) và hàm có giá trị trả về (`int`, `long long`, `bool`).
   * Hiểu bản chất cơ chế truyền tham số: Truyền giá trị (**Pass-by-value**) và Truyền tham chiếu (**Pass-by-reference `&`**) thông qua địa chỉ ô nhớ RAM.
2. **Về bước ngoặt tối ưu hóa thuật toán (Từ $O(N^2)$ sang $O(N)$):**
   * Làm chủ **Kỹ thuật Mảng đếm tần số (Counting Array / Mảng đánh dấu)**: Dùng chính giá trị của phần tử làm chỉ số mảng (`cnt[x]++`).
   * Tối ưu hóa từ thuật toán vét cạn 2 vòng lặp $O(N^2)$ (dễ dính TLE) xuống thuật toán tuyến tính $O(N)$ chạy trong $0.01$ giây.
   * Nhận diện giới hạn và cạm bẫy của mảng đếm: Giới hạn kích thước RAM ($MAX \le 10^7$) và kỹ thuật dời trục tọa độ (Offset) khi dãy có chứa số âm.

---

## PHẦN 1: HÀM TRONG C++ (FUNCTIONS) & TƯ DUY MODULE HÓA

### 1.1. Khái niệm & Cấu trúc hàm
Hàm là một khối lệnh độc lập được đặt tên, thực hiện một nhiệm vụ cụ thể và có thể được gọi nhiều lần từ bất kỳ vị trí nào trong chương trình.

```cpp
kieu_tra_ve ten_ham(kieu_tham_so tham_so_1, kieu_tham_so tham_so_2, ...) {
    // Các câu lệnh xử lý
    return gia_tri; // Nếu kieu_tra_ve khác void
}
```

* **Hàm `void`:** Không trả về kết quả, thường dùng để thực hiện các thao tác in ấn, mở tệp.
* **Hàm có giá trị trả về (`bool`, `int`, `long long`):** Bắt buộc phải có lệnh `return` để trả kết quả về nơi gọi hàm. Lệnh `return` cũng lập tức kết thúc hàm.

```cpp
// Hàm kiểm tra một số có phải là số chẵn hay không
bool is_even(long long x) {
    if (x % 2 == 0) return true;
    return false;
    // Hoặc viết ngắn gọn: return (x % 2 == 0);
}
```

---

## PHẦN 2: CƠ CHẾ TRUYỀN THAM SỐ: THAM TRỊ VS. THAM CHIẾU (`&`)

Đây là một trong những khái niệm quan trọng nhất trong C++ quyết định việc biến ngoài hàm có bị thay đổi hay không:

### 2.1. Truyền tham trị (Pass-by-value) -- "Photo copy"
Khi truyền một biến vào hàm bình thường, máy tính sẽ **tạo ra một bản sao mới** của biến đó trên vùng nhớ Stack của hàm:
```cpp
void tang_mot(int x) {
    x = x + 1; // Chỉ làm thay đổi bản sao x bên trong hàm!
}

int main() {
    int a = 5;
    tang_mot(a);
    cout << a << "\n"; // Vẫn in ra 5! Biến a ngoài main không hề đổi!
    return 0;
}
```

### 2.2. Truyền tham chiếu (Pass-by-reference `&`) -- "Dùng chung ô nhớ"
Khi thêm dấu `&` vào trước tên tham số, hàm sẽ không sao chép mà **nhận trực tiếp địa chỉ ô nhớ gốc** của biến truyền vào. Mọi thay đổi bên trong hàm sẽ tác động trực tiếp lên biến bên ngoài:
```cpp
void tang_mot_that(int &x) { // Có dấu &
    x = x + 1; // Làm thay đổi trực tiếp ô nhớ của a ngoài main!
}

int main() {
    int a = 5;
    tang_mot_that(a);
    cout << a << "\n"; // In ra 6!
    return 0;
}
```

* **Ứng dụng kinh điển: Tự viết hàm hoán đổi 2 số (`my_swap`):**
```cpp
void my_swap(long long &u, long long &v) {
    long long temp = u;
    u = v;
    v = temp;
}
```

---

## PHẦN 3: BƯỚC NGOẶT THUẬT TOÁN: KỸ THUẬT MẢNG ĐẾM TẦN SỐ (COUNTING ARRAY)

### 3.1. Bài toán đặt ra
Cho dãy số gồm $N$ số nguyên dương ($1 \le N \le 10^5$, các số $0 \le A_i \le 10^6$).  
**Yêu cầu:** Tìm số xuất hiện nhiều lần nhất trong dãy và số lần xuất hiện của nó.

### 3.2. Cách tiếp cận ngây thơ (Học sinh yếu thường làm)
Duyệt qua từng phần tử, với mỗi phần tử lại dùng một vòng lặp chạy từ đầu đến cuối để đếm số lần xuất hiện của nó:
```cpp
// CÁCH NÀY BỊ TLE CHẮC CHẮN KHI N = 10^5!
int max_freq = 0;
long long ans = -1;
for (int i = 1; i <= n; i++) {
    int dem = 0;
    for (int j = 1; j <= n; j++) {
        if (a[j] == a[i]) dem++;
    }
    if (dem > max_freq) {
        max_freq = dem;
        ans = a[i];
    }
}
```
* **Độ phức tạp:** $O(N^2) = (10^5)^2 = 10^{10}$ phép tính $\implies$ Chạy mất $\approx 100$ giây $\rightarrow$ **0 ĐIỂM (TLE)!**

---

### 3.3. Đột phá tư duy: Mảng đếm tần số $O(N)$
* Thay vì chạy đi tìm xem số $x$ xuất hiện bao nhiêu lần, ta tạo ra một mảng `cnt` (viết tắt của *count*).
* Ý nghĩa: **Chỉ số của mảng chính là giá trị của phần tử, còn giá trị ô nhớ `cnt[x]` là số lần số `x` xuất hiện!**
* Mỗi khi đọc vào một số `x`, ta chỉ cần tăng ô tương ứng: `cnt[x]++;`.

```text
Dãy số A:       [ 3,  5,  3,  2,  5,  3 ]
Mảng cnt:
Chỉ số (x):      0   1   2   3   4   5
Giá trị cnt[x]: [0] [0] [1] [3] [0] [2]  (Số 3 xuất hiện 3 lần, số 5 xuất hiện 2 lần!)
```

* **Độ phức tạp:**
  * Đọc mảng và đếm: đúng $N$ bước $\implies O(N)$.
  * Tìm giá trị có `cnt[x]` lớn nhất: duyệt qua dải giá trị từ $0$ đến $\max(A_i) \le 10^6 \implies O(\max(A_i))$.
  * Tổng thời gian: Dưới **$0.02$ giây** $\implies$ **Ăn trọn 100% điểm số!**

```cpp
#include <iostream>
using namespace std;

// Khai báo mảng đếm toàn cục kích thước 1 triệu, tự động gán toàn bộ = 0
const int MAX_VAL = 1000005;
int cnt[MAX_VAL];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;

    int max_val_input = 0;
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        cnt[x]++; // Tăng tần số của số x lên 1
        if (x > max_val_input) max_val_input = x;
    }

    // Tìm số có tần số xuất hiện lớn nhất
    int max_freq = 0;
    int best_val = 0;
    for (int v = 0; v <= max_val_input; v++) {
        if (cnt[v] > max_freq) {
            max_freq = cnt[v];
            best_val = v;
        }
    }

    cout << "Gia tri xuat hien nhieu nhat: " << best_val << "\n";
    cout << "So lan xuat hien: " << max_freq << "\n";

    return 0;
}
```

---

### 3.4. Hai lưu ý kinh điển khi dùng Counting Array

1. **Giới hạn giá trị phần tử:** Kỹ thuật này chỉ áp dụng khi giá trị các số $A_i$ nằm trong khoảng RAM cho phép ($A_i \le 10^6$ hoặc $10^7$). Nếu đề bài cho $A_i \le 10^9$ hoặc $10^{18}$, ta không thể khai báo mảng `cnt[1000000000]` được (sẽ bị lỗi bộ nhớ). Khi đó phải dùng kỹ thuật Nén số hoặc `std::map` (sẽ học ở các tuần sau).
2. **Kỹ thuật dời trục (Offset) khi có số âm:**
   * Nếu đề bài cho $-10^5 \le A_i \le 10^5$, chỉ số mảng trong C++ không thể là số âm (`cnt[-5]` gây sập chương trình!).
   * **Giải pháp:** Cộng thêm một hằng số dời trục `const int OFFSET = 100000;`. Khi đọc số `x`, ta lưu vào ô: `cnt[x + OFFSET]++;`.

---

## PHẦN 4: BÀI TOÁN MẪU THỰC CHIẾN OLYMPIC (PHÒNG THI)

### Đề bài: Phần tử độc nhất (Dãy `UNIQUE.INP` / `UNIQUE.OUT`)
Cho tệp `UNIQUE.INP` gồm:
* Dòng 1: Số nguyên dương $N$ ($1 \le N \le 10^5$).
* Dòng 2: $N$ số nguyên $A_1, A_2, \dots, A_N$ ($0 \le A_i \le 10^6$).

**Yêu cầu:**
1. Đếm xem có bao nhiêu số khác nhau trong dãy.
2. In ra các số chỉ xuất hiện **đúng 1 lần duy nhất** theo thứ tự tăng dần.

### Code C++ chuẩn chỉnh:
```cpp
#include <iostream>
using namespace std;

const int MAX_VAL = 1000005;
int cnt[MAX_VAL]; // Mảng đếm toàn cục trên vùng Data segment (tự động = 0)

int main() {
    // Luồng vào/ra tệp chuẩn Olympic
    freopen("UNIQUE.INP", "r", stdin);
    freopen("UNIQUE.OUT", "w", stdout);

    // Bộ đôi tăng tốc vào/ra (Fast I/O)
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;

    int max_val = 0;
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        cnt[x]++;
        if (x > max_val) max_val = x;
    }

    // 1. Dem so luong gia tri khac nhau
    int dem_phan_biet = 0;
    for (int v = 0; v <= max_val; v++) {
        if (cnt[v] > 0) dem_phan_biet++;
    }
    cout << dem_phan_biet << "\n";

    // 2. In ra cac so chi xuat hien dung 1 lan duy nhat
    bool co_so_doc_nhat = false;
    for (int v = 0; v <= max_val; v++) {
        if (cnt[v] == 1) {
            cout << v << " ";
            co_so_doc_nhat = true;
        }
    }
    if (!co_so_doc_nhat) cout << "-1";
    cout << "\n";

    return 0;
}
```

### Bí kíp phòng thi: Giải thích bộ đôi tăng tốc vào/ra (Fast I/O)

Trong các bài toán thi Olympic và HSG, lượng dữ liệu kiểm thử (test case) rất lớn (thường lên tới $N \ge 10^5$ hoặc $10^6$ số). Nếu chỉ sử dụng `cin` và `cout` mặc định, chi phí thời gian cho việc nhập/xuất dữ liệu có thể chiếm hơn **50% -- 70%** tổng thời gian thực thi, dễ khiến bài nộp bị loại đáng tiếc vì lỗi vượt quá giới hạn thời gian (**TLE - Time Limit Exceeded**).

Hai câu lệnh sau là "bùa hộ mệnh" bắt buộc phải có ở ngay đầu hàm `main()`:

```cpp
ios_base::sync_with_stdio(false);
cin.tie(NULL);
```

#### 1. Lệnh `ios_base::sync_with_stdio(false);`
* **Cơ chế mặc định:** Trong C++, các luồng I/O chuẩn (`cin`, `cout`) mặc định được **đồng bộ hóa** (synchronized) với các luồng I/O của ngôn ngữ C (`scanf`, `printf`). Mục đích là để lập trình viên có thể gọi xen kẽ cả `cin` lẫn `scanf`, hoặc `cout` lẫn `printf` mà thứ tự dữ liệu xuất hiện trên màn hình/tệp vẫn được bảo đảm chính xác. Để làm được điều này, C++ phải liên tục đồng bộ bộ đệm dùng chung, dẫn đến tốc độ vào/ra của `cin/cout` bị chậm đi đáng kể (thường chậm hơn từ 5 đến 10 lần).
* **Tác dụng khi tắt:** `sync_with_stdio(false)` ra lệnh **hủy bỏ cơ chế đồng bộ hóa** này. Khi đó, `cin` và `cout` sở hữu bộ đệm độc lập với thuật toán đọc đệm khối tối ưu, giúp tốc độ đọc/ghi dữ liệu tăng vọt, nhanh tương đương hoặc thậm chí vượt trội so với `scanf/printf`.
* **LƯU Ý SỐNG CÒN:** Khi đã gọi `sync_with_stdio(false)`, **tuyệt đối không được dùng xen kẽ** `cin/cout` với `scanf/printf` trong cùng một chương trình. Việc pha trộn hai luồng lúc này sẽ dẫn đến hành vi không xác định (*Undefined Behavior*), khiến dữ liệu vào/ra bị đảo lộn thứ tự.

#### 2. Lệnh `cin.tie(NULL);` (hoặc `cin.tie(0);`)
* **Cơ chế mặc định:** Luồng vào `cin` mặc định được "buộc chặt" (**tied**) với luồng ra `cout`. Nghĩa là trước mỗi thao tác đọc dữ liệu bằng `cin`, hệ thống sẽ tự động ép xả sạch (**flush**) toàn bộ dữ liệu đang chờ trong bộ đệm của `cout` ra tệp hoặc màn hình. Cơ chế này sinh ra cho các ứng dụng tương tác giao diện (ví dụ in dòng nhắc `"Nhap n: "` rồi mới dừng đợi người dùng gõ vào biến `n`).
* **Tác dụng khi gỡ buộc:** Trong lập trình thi đấu Olympic, toàn bộ dữ liệu được đọc tự động qua tệp hoặc chấm gián tiếp qua Online Judge mà không cần tương tác người dùng. Việc ép xả đệm `cout` liên tục trước mỗi lần đọc `cin` trong vòng lặp $10^5$ lần là hoàn toàn dư thừa và gây tắc nghẽn I/O nghiêm trọng. `cin.tie(NULL)` giúp **gỡ bỏ mối liên kết** này, cho phép `cin` đọc dữ liệu liên tục từ bộ đệm mà không cần bận tâm đến trạng thái của `cout`.

#### 3. Quy tắc song hành bắt buộc: Dùng `"\n"` thay vì `endl`
* Luôn in dấu xuống dòng bằng `"\n"` hoặc `'\n'`, **tuyệt đối tránh dùng `endl`** trong các vòng lặp in nhiều lần.
* **Lý do:** Bản thân `endl` không chỉ in ký tự xuống dòng mà còn kích hoạt lệnh xả đệm (`flush`), điều này sẽ vô hiệu hóa hoàn toàn công sức tăng tốc của bộ đôi Fast I/O ở trên.

