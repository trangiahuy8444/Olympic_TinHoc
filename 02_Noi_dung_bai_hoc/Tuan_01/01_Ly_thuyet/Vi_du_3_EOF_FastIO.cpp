// ==============================================================================
// VÍ DỤ 3: KỸ THUẬT ĐỌC ĐẾN HẾT TỆP (EOF) VÀ TỐI ƯU TỐC ĐỘ FAST I/O
// Đề bài: Tệp DAYSO.INP chứa một dãy gồm nhiều số nguyên phân cách bởi dấu cách hoặc
//        xuống dòng (đề bài KHÔNG cho trước số lượng phần tử N).
//        Hãy tính tổng tất cả các số và tìm giá trị lớn nhất trong dãy.
// Tệp đọc: DAYSO.INP, Tệp xuất: DAYSO.OUT
// ==============================================================================

#include <iostream>
#include <cstdio>
#include <algorithm> // Thư viện chứa hàm max

using namespace std;

int main() {
    // 1. Tối ưu hóa tốc độ nhập xuất (bắt buộc khi dữ liệu lên tới 10^5 - 10^6 phần tử)
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // 2. Tự động nhận diện file phòng thi
    if (fopen("DAYSO.INP", "r")) {
        freopen("DAYSO.INP", "r", stdin);
        freopen("DAYSO.OUT", "w", stdout);
    }

    // 3. Đọc dữ liệu đến khi hết tệp (End of File - EOF)
    long long x;
    long long tong = 0;
    long long max_val = -2e18; // Khởi tạo giá trị cực nhỏ
    long long dem = 0;

    // Vòng lặp while (cin >> x) sẽ tự động dừng lại khi con trỏ file chạm mốc kết thúc file!
    while (cin >> x) {
        tong += x;
        if (x > max_val) {
            max_val = x;
        }
        dem++;
    }

    // 4. Xuất kết quả
    if (dem > 0) {
        cout << "Tong: " << tong << "\n";
        cout << "Max: " << max_val << "\n";
        cout << "So luong phan tu: " << dem << "\n";
    }

    return 0;
}
