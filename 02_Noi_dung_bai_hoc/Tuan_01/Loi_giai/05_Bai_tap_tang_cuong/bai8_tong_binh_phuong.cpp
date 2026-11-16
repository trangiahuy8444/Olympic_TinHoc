// ==============================================================================
// BỘ BÀI TẬP TĂNG CƯỜNG TUẦN 01 -- BÀI 8: TỔNG BÌNH PHƯƠNG CỦA DÃY SỐ (1^2 + 2^2 + ... + N^2)
// Tệp mã nguồn: bai8_tong_binh_phuong.cpp
// ==============================================================================
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    if (!(cin >> n)) return 0;

    long long s = 0;
    for (long long i = 1; i <= n; ++i) {
        s += i * i;
    }

    // Luu y: Cung co the dung cong thuc toan hoc:
    // s = n * (n + 1) * (2 * n + 1) / 6;

    cout << s << "\n";
    return 0;
}
