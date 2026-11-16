// ==============================================================================
// BỘ BÀI TẬP KHỞI ĐỘNG CÚ PHÁP C++ -- BÀI 4: TỔNG CÁC SỐ CHẴN TỪ 1 ĐẾN N (VÒNG LẶP FOR)
// Tệp mã nguồn: bai4_tong_chan.cpp
// ==============================================================================
#include <iostream>
using namespace std;

int main() {
    int n;
    if (!(cin >> n)) return 0;

    long long sum_even = 0;
    for (int i = 2; i <= n; i += 2) {
        sum_even += i;
    }

    cout << sum_even << "\n";
    return 0;
}
