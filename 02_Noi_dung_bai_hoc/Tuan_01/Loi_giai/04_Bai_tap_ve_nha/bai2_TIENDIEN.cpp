// ==============================================================================
// PHIẾU BÀI TẬP VỀ NHÀ BUỔI 01 -- BÀI 2: TÍNH TIỀN ĐIỆN (TIENDIEN.INP / TIENDIEN.OUT)
// Mã nguồn: TIENDIEN.cpp (hoặc bai2_TIENDIEN.cpp)
// ==============================================================================
// BÀI TẬP VỀ NHÀ 2: TÍNH TIỀN ĐIỆN (TIENDIEN.cpp)
#include <iostream>
#include <iomanip>
#include <cstdio>

using namespace std;

int main() {
    freopen("TIENDIEN.INP", "r", stdin);
    freopen("TIENDIEN.OUT", "w", stdout);

    double k;
    if (cin >> k) {
        // Đơn giá 2500.5 đồng/kWh + 10% VAT => x 1.1
        double tien = k * 2500.5 * 1.1;
        cout << fixed << setprecision(2) << tien << "\n";
    }

    return 0;
}
