// ==============================================================================
// PHIẾU BÀI TẬP VỀ NHÀ BUỔI 01 -- BÀI 3: HÌNH TRÒN (HINHTRON.INP / HINHTRON.OUT)
// Mã nguồn: HINHTRON.cpp (hoặc bai3_HINHTRON.cpp)
// ==============================================================================
// BÀI TẬP VỀ NHÀ 3: HÌNH TRÒN (HINHTRON.cpp)
#include <iostream>
#include <iomanip>
#include <cstdio>

using namespace std;

const double PI = 3.141592653589793;

int main() {
    freopen("HINHTRON.INP", "r", stdin);
    freopen("HINHTRON.OUT", "w", stdout);

    double r;
    if (cin >> r) {
        double chu_vi = 2.0 * PI * r;
        double dien_tich = PI * r * r;

        cout << fixed << setprecision(2);
        cout << chu_vi << "\n";
        cout << dien_tich << "\n";
    }

    return 0;
}
