// ==============================================================================
// PHIẾU THỰC HÀNH TẠI LỚP BUỔI 01 -- BÀI 6: TÍCH BA SỐ NGUYÊN (TICH3SO.INP / TICH3SO.OUT)
// Mã nguồn: TICH3SO.cpp (hoặc bai6_TICH3SO.cpp)
// ==============================================================================
// BÀI 6: TÍCH BA SỐ NGUYÊN (TICH3SO.cpp)
#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    freopen("TICH3SO.INP", "r", stdin);
    freopen("TICH3SO.OUT", "w", stdout);

    long long a, b, c;
    if (cin >> a >> b >> c) {
        // Ép kiểu nhân 64-bit 1LL * a * b * c để tránh tràn số tuyệt đối
        long long p = 1LL * a * b * c;
        cout << p << "\n";
    }

    return 0;
}
