// ==============================================================================
// PHIẾU THỰC HÀNH TẠI LỚP BUỔI 01 -- BÀI 5: ĐỔI ĐƠN VỊ THỜI GIAN (THOIGIAN.INP / THOIGIAN.OUT)
// Mã nguồn: THOIGIAN.cpp (hoặc bai5_THOIGIAN.cpp)
// ==============================================================================
// BÀI 5: ĐỔI ĐƠN VỊ THỜI GIAN (THOIGIAN.cpp)
#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    freopen("THOIGIAN.INP", "r", stdin);
    freopen("THOIGIAN.OUT", "w", stdout);

    long long t;
    if (cin >> t) {
        long long h = t / 3600;
        long long m = (t % 3600) / 60;
        long long s = t % 60;

        cout << h << " " << m << " " << s << "\n";
    }

    return 0;
}
