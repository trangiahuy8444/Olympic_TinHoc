// ==============================================================================
// PHIẾU BÀI TẬP VỀ NHÀ BUỔI 01 -- BÀI 5: TÍNH LƯƠNG THỰC NHẬN (LUONG.INP / LUONG.OUT)
// Mã nguồn: LUONG.cpp (hoặc bai5_LUONG.cpp)
// ==============================================================================
// BÀI TẬP VỀ NHÀ 5: TÍNH LƯƠNG THỰC NHẬN (LUONG.cpp)
#include <iostream>
#include <iomanip>
#include <cstdio>

using namespace std;

int main() {
    freopen("LUONG.INP", "r", stdin);
    freopen("LUONG.OUT", "w", stdout);

    double l, p;
    if (cin >> l >> p) {
        double thuc_nhan = l + p - (l * 0.105);
        cout << fixed << setprecision(2) << thuc_nhan << "\n";
    }

    return 0;
}
