// ==============================================================================
// PHIẾU BÀI TẬP VỀ NHÀ BUỔI 01 -- BÀI 4: TỔNG BA SỐ CỰC LỚN (TONG3SO.INP / TONG3SO.OUT)
// Mã nguồn: TONG3SO.cpp (hoặc bai4_TONG3SO.cpp)
// ==============================================================================
// BÀI TẬP VỀ NHÀ 4: TỔNG BA SỐ CỰC LỚN (TONG3SO.cpp)
#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    freopen("TONG3SO.INP", "r", stdin);
    freopen("TONG3SO.OUT", "w", stdout);

    // Giới hạn 10^17 bắt buộc dùng long long
    long long a, b, c;
    if (cin >> a >> b >> c) {
        long long s = a + b + c;
        cout << s << "\n";
    }

    return 0;
}
