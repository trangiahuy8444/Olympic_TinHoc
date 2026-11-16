// ==============================================================================
// VÍ DỤ 2: KỸ THUẬT TỰ ĐỘNG NHẬN DIỆN TỆP THÔNG MINH VỚI if (fopen)
// Đề bài: Cho chiều dài a và chiều rộng b của hình chữ nhật.
//        Tính chu vi và diện tích, ghi mỗi kết quả trên một dòng.
// Tệp đọc: HCN.INP, Tệp xuất: HCN.OUT
// Tuyệt chiêu:
//   - Nếu có file HCN.INP trong thư mục -> Tự động đọc và ghi file.
//   - Nếu không có file HCN.INP (hoặc khi test ở nhà) -> Tự động nhập/xuất qua màn hình console.
//   => Học sinh KHÔNG BAO GIỜ phải lo lắng việc quên mở comment freopen trước khi nộp bài!
// ==============================================================================

#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    // Tự động nhận diện file thông minh
    if (fopen("HCN.INP", "r")) {
        freopen("HCN.INP", "r", stdin);
        freopen("HCN.OUT", "w", stdout);
    }

    long long a, b;
    if (cin >> a >> b) {
        long long chu_vi = (a + b) * 2;
        long long dien_tich = a * b;

        cout << chu_vi << "\n";
        cout << dien_tich << "\n";
    }

    return 0;
}
