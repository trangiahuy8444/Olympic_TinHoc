// ==============================================================================
// BỘ BÀI TẬP TĂNG CƯỜNG TUẦN 01 -- BÀI 7: TỌA ĐỘ VÀ GÓC PHẦN TƯ (HỆ TỌA ĐỘ OXY)
// Tệp mã nguồn: bai7_toa_do.cpp
// ==============================================================================
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long x, y;
    if (!(cin >> x >> y)) return 0;

    if (x == 0 && y == 0) {
        cout << "GOC TOA DO\n";
    } else if (x == 0) {
        cout << "TRUC TUNG\n";
    } else if (y == 0) {
        cout << "TRUC HOANH\n";
    } else if (x > 0 && y > 0) {
        cout << "GOC I\n";
    } else if (x < 0 && y > 0) {
        cout << "GOC II\n";
    } else if (x < 0 && y < 0) {
        cout << "GOC III\n";
    } else {
        cout << "GOC IV\n";
    }

    return 0;
}
