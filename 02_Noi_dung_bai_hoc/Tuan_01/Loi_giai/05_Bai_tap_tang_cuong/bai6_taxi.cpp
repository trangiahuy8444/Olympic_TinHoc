// ==============================================================================
// BỘ BÀI TẬP TĂNG CƯỜNG TUẦN 01 -- BÀI 6: TÍNH TIỀN CƯỚC TAXI LŨY TIẾN
// Tệp mã nguồn: bai6_taxi.cpp
// ==============================================================================
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long x;
    if (!(cin >> x)) return 0;

    long long tong_tien = 0;
    if (x == 1) {
        tong_tien = 15000;
    } else if (x <= 5) {
        tong_tien = 15000 + (x - 1) * 13500;
    } else {
        tong_tien = 15000 + 4 * 13500 + (x - 5) * 11000;
    }

    if (x > 30) {
        tong_tien = (long long)(tong_tien * 0.9);
    }

    cout << tong_tien << "\n";
    return 0;
}
