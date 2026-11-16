// ==============================================================================
// PHIẾU THỰC HÀNH TẠI LỚP BUỔI 01 -- BÀI 4: DIỆN TÍCH TAM GIÁC (TAMGIAC.INP / TAMGIAC.OUT)
// Mã nguồn: TAMGIAC.cpp (hoặc bai4_TAMGIAC.cpp)
// ==============================================================================
// BÀI 4: DIỆN TÍCH TAM GIÁC (TAMGIAC.cpp)
#include <iostream>
#include <iomanip>
#include <cstdio>

using namespace std;

int main() {
    freopen("TAMGIAC.INP", "r", stdin);
    freopen("TAMGIAC.OUT", "w", stdout);

    double a, h;
    if (cin >> a >> h) {
        double s = (a * h) / 2.0;
        cout << fixed << setprecision(2) << s << "\n";
    }

    return 0;
}
