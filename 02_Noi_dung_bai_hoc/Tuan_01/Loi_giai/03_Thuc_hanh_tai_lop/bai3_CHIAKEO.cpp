// ==============================================================================
// PHIẾU THỰC HÀNH TẠI LỚP BUỔI 01 -- BÀI 3: CHIA PHẦN KẸO (CHIAKEO.INP / CHIAKEO.OUT)
// Mã nguồn: CHIAKEO.cpp (hoặc bai3_CHIAKEO.cpp)
// ==============================================================================
// BÀI 3: CHIA PHẦN KẸO (CHIAKEO.cpp)
#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    freopen("CHIAKEO.INP", "r", stdin);
    freopen("CHIAKEO.OUT", "w", stdout);

    long long n, k;
    if (cin >> n >> k) {
        long long moi_ban = n / k;
        long long con_du = n % k;

        cout << moi_ban << " " << con_du << "\n";
    }

    return 0;
}
