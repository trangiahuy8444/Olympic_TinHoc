// ==============================================================================
// VÍ DỤ 1: KỸ THUẬT ĐỌC/GHI FILE CƠ BẢN VỚI freopen (DÀNH CHO HỌC SINH MỚI)
// Đề bài: Cho hai số nguyên A và B từ tệp TONG.INP. Tính và ghi tổng A + B ra TONG.OUT.
// Thao tác trên Code::Blocks 20.03:
//   1. Lưu file mã nguồn này: TONG.cpp (hoặc Vi_du_1_freopen_Co_ban.cpp)
//   2. Tạo file text cùng thư mục đặt tên: TONG.INP (chứa: 15 25)
//   3. Nhấn F9 (Build and Run) -> Mở thư mục sẽ thấy file TONG.OUT xuất hiện kết quả: 40
// ==============================================================================

#include <iostream>
#include <cstdio> // Thư viện chứa hàm freopen

using namespace std;

int main() {
    // Chuyển hướng luồng dữ liệu chuẩn sang tệp
    freopen("TONG.INP", "r", stdin);   // "r" = read (đọc từ tệp TONG.INP thay vì bàn phím)
    freopen("TONG.OUT", "w", stdout);  // "w" = write (ghi vào tệp TONG.OUT thay vì màn hình)

    // Khai báo biến (sử dụng long long để tránh tràn số)
    long long a, b;

    // Đọc dữ liệu (vẫn dùng lệnh cin bình thường như khi nhập bàn phím!)
    if (cin >> a >> b) {
        // Xử lý và xuất kết quả (vẫn dùng cout bình thường!)
        cout << a + b << "\n";
    }

    return 0;
}
