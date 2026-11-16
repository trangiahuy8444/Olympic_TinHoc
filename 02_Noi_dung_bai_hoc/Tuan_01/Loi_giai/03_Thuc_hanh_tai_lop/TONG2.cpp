// ==============================================================================
// PHIẾU THỰC HÀNH TẠI LỚP BUỔI 01 -- BÀI 1: TỔNG HAI SỐ NGUYÊN (TONG2.INP / TONG2.OUT)
// Mã nguồn: TONG2.cpp (hoặc bai1_TONG2.cpp)
// ==============================================================================
// BÀI 1: TỔNG HAI SỐ NGUYÊN (TONG2.cpp)
#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    // Chuyển hướng luồng dữ liệu sang tệp
    freopen("TONG2.INP", "r", stdin);
    freopen("TONG2.OUT", "w", stdout);

    long long a, b;
    if (cin >> a >> b) {
        cout << a + b << "\n";
    }

    return 0;
}
