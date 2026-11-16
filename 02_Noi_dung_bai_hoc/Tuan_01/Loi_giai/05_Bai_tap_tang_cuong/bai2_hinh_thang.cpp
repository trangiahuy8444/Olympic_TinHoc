// ==============================================================================
// BỘ BÀI TẬP TĂNG CƯỜNG TUẦN 01 -- BÀI 2: DIỆN TÍCH HÌNH THANG & BẪY TRÀN SỐ
// Tệp mã nguồn: bai2_hinh_thang.cpp
// ==============================================================================
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long a, b, h;
    if (cin >> a >> b >> h) {
        // Tich (a + b) * h co the dat 2 * 10^12 -> can dung long long
        long long tu = (a + b) * h;
        if (tu % 2 == 0) {
            cout << tu / 2 << "\n";
        } else {
            cout << tu / 2 << ".5\n";
        }
    }
    return 0;
}
