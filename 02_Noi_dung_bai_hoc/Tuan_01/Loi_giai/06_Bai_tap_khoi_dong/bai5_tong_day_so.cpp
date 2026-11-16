// ==============================================================================
// BỘ BÀI TẬP KHỞI ĐỘNG CÚ PHÁP C++ -- BÀI 5: TẬP ĐỌC GHI FILE PHÒNG THI (TỔNG DÃY SỐ)
// Tệp dữ liệu: TONG.INP / TONG.OUT
// Tệp mã nguồn: bai5_tong_day_so.cpp
// ==============================================================================
#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    // Chuyển hướng luồng dữ liệu sang tệp theo quy cách đề bài
    freopen("TONG.INP", "r", stdin);
    freopen("TONG.OUT", "w", stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (cin >> n) {
        long long sum = 0;
        for (int i = 0; i < n; i++) {
            long long val;
            cin >> val;
            sum += val;
        }
        cout << sum << "
";
    }

    return 0;
}
