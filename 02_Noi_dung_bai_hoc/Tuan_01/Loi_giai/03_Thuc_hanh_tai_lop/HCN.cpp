// ==============================================================================
// PHIẾU THỰC HÀNH TẠI LỚP BUỔI 01 -- BÀI 2: HÌNH CHỮ NHẬT (HCN.INP / HCN.OUT)
// Mã nguồn: HCN.cpp (hoặc bai2_HCN.cpp)
// ==============================================================================
// BÀI 2: HÌNH CHỮ NHẬT (HCN.cpp)
#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    freopen("HCN.INP", "r", stdin);
    freopen("HCN.OUT", "w", stdout);

    long long a, b;
    if (cin >> a >> b) {
        long long chu_vi = (a + b) * 2;
        long long dien_tich = a * b; // a, b <= 10^6 => diện tích <= 10^12 cần long long

        cout << chu_vi << "\n";
        cout << dien_tich << "\n";
    }

    return 0;
}
