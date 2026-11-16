// ==============================================================================
// BỘ BÀI TẬP KHỞI ĐỘNG CÚ PHÁP C++ -- BÀI 1: TÍNH TOÁN HÌNH HỌC CƠ BẢN (CHU VI & DIỆN TÍCH HCN)
// Tệp mã nguồn: bai1_hinh_chu_nhat.cpp
// ==============================================================================
#include <iostream>
using namespace std;

int main() {
    long long a, b;
    if (!(cin >> a >> b)) return 0;

    long long chu_vi = (a + b) * 2;
    long long dien_tich = a * b; // a, b <= 10^6 nen a * b <= 10^12 (long long)

    cout << chu_vi << "\n";
    cout << dien_tich << "\n";

    return 0;
}
