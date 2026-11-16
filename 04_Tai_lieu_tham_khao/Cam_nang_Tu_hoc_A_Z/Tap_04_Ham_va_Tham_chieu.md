# CẨM NANG TỰ HỌC C++ TỪ A ĐẾN Z -- TẬP 04
## CHUYÊN ĐỀ: HÀM (FUNCTIONS), TRUYỀN THAM SỐ & THAM CHIẾU `&`
*(Dành riêng cho học sinh Đội tuyển Olympic Tin học 11 tự học và thực hành tại nhà)*

> **Đơn vị biên soạn:** Trường Quốc tế Á Châu (The Asian International School) -- Tổ Tin học  
> **Nguồn tư liệu gốc:** Giáo trình C++ CodeLearn & LearnCpp (`Section 09`)  
> **Môi trường thực hành:** Code::Blocks 20.03  
> **Mục tiêu:** Giúp học sinh nắm vững cách viết hàm, module hóa chương trình thành từng khối chức năng gọn gàng, hiểu rạch ròi bản chất truyền tham trị vs tham chiếu `&`.

---

# PHẦN 1: HÀM CĂN BẢN TRONG C++ (BÀI 077 -- 082)

## 1.1. Tại sao phải viết hàm?
Khi chương trình dài hàng trăm dòng, nếu viết tất cả vào trong `main()` thì code sẽ vô cùng rối rắm và khó sửa lỗi. Hàm giúp ta:
1. **Chia để trị:** Tách bài toán lớn thành các nhiệm vụ nhỏ độc lập.
2. **Tái sử dụng:** Viết một lần, dùng nhiều lần ở bất cứ đâu.

## 1.2. Cấu trúc hàm tổng quát
```cpp
kieu_tra_ve ten_ham(kieu_1 tham_so_1, kieu_2 tham_so_2, ...) {
    // Khối lệnh xử lý
    return gia_tri; // Nếu kieu_tra_ve khác void
}
```

* **Hàm `void`:** Không trả về kết quả:
```cpp
void say_hello(string name) {
    cout << "Xin chao ban " << name << "!\n";
}
```

* **Hàm có giá trị trả về:** Bắt buộc có `return`:
```cpp
// Hàm tính lũy thừa bậc 2 (bình phương)
long long binh_phuong(long long x) {
    return x * x;
}

// Hàm kiểm tra một số có phải số nguyên tố không
bool is_prime(long long n) {
    if (n < 2) return false;
    for (long long i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}
```

---

# PHẦN 2: THAM TRỊ VS. THAM CHIẾU `&` (BÀI 083 -- 086)

## 2.1. Truyền tham trị (Pass-by-value)
Khi truyền biến vào hàm không có dấu `&`, hàm tạo ra một bản sao mới. Thay đổi bản sao không làm thay đổi biến gốc ngoài `main()`:
```cpp
void tang(int x) {
    x++;
}
int main() {
    int a = 10;
    tang(a);
    cout << a; // Vẫn in ra 10!
    return 0;
}
```

## 2.2. Truyền tham chiếu (Pass-by-reference `&`)
Khi có dấu `&`, hàm nhận trực tiếp địa chỉ ô nhớ của biến gốc. Thay đổi trong hàm sẽ làm thay đổi biến gốc:
```cpp
void tang_that(int &x) { // Có dấu &
    x++;
}
int main() {
    int a = 10;
    tang_that(a);
    cout << a; // In ra 11!
    return 0;
}
```

* **Ứng dụng kinh điển: Hàm tự đổi chỗ 2 biến:**
```cpp
void my_swap(long long &x, long long &y) {
    long long temp = x;
    x = y;
    y = temp;
}
```

---

## Bài tập tự luyện Tập 4:
* **Bài 4.1:** Viết hàm `long long tim_max(long long a, long long b, long long c)` trả về số lớn nhất trong 3 số.
* **Bài 4.2:** Viết hàm `long long tong_uoc(long long n)` tính tổng tất cả các ước số của $N$.
* **Bài 4.3:** Viết hàm `void sap_xep_3_so(long long &a, long long &b, long long &c)` sắp xếp 3 số $a, b, c$ theo thứ tự tăng dần bằng cách sử dụng hàm `my_swap`.
