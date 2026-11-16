// ==============================================================================
// BỘ BÀI TẬP TĂNG CƯỜNG TUẦN 01 -- BÀI 9: ĐẾM VÀ TÍNH TỔNG CÁC ƯỚC SỐ CỦA N
// Tệp mã nguồn: bai9_uoc_so.cpp
// ==============================================================================
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    if (!(cin >> n)) return 0;

    long long dem = 0;
    long long tong = 0;

    // Duyet toi can bac hai de dat do phuc tap O(sqrt(N))
    for (long long i = 1; i * i <= n; ++i) {
        if (n % i == 0) {
            dem++;
            tong += i;
            if (i * i != n) {
                dem++;
                tong += n / i;
            }
        }
    }

    cout << dem << "\n";
    cout << tong << "\n";

    return 0;
}
