// ==============================================================================
// BỘ BÀI TẬP KHỞI ĐỘNG CÚ PHÁP C++ -- BÀI 3: KIỂM TRA NĂM NHUẬN (TOÁN TỬ LOGIC)
// Tệp mã nguồn: bai3_nam_nhuan.cpp
// ==============================================================================
#include <iostream>
using namespace std;

int main() {
    int year;
    if (!(cin >> year)) return 0;

    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}
