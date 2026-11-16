// ==============================================================================
// BỘ BÀI TẬP TĂNG CƯỜNG TUẦN 01 -- BÀI 3: CHUYỂN ĐỔI ĐƠN VỊ THỜI GIAN (hh:mm:ss)
// Tệp mã nguồn: bai3_thoi_gian.cpp
// ==============================================================================
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long T;
    if (cin >> T) {
        long long gio = T / 3600;
        long long phut = (T % 3600) / 60;
        long long giay = T % 60;

        if (gio < 10) cout << "0";
        cout << gio << ":";
        if (phut < 10) cout << "0";
        cout << phut << ":";
        if (giay < 10) cout << "0";
        cout << giay << "\n";
    }
    return 0;
}
