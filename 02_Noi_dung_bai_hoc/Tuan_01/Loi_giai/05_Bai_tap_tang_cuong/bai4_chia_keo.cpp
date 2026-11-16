// ==============================================================================
// BỘ BÀI TẬP TĂNG CƯỜNG TUẦN 01 -- BÀI 4: CHIA KẸO TRUNG THU (CHIA LẤY NGUYÊN VÀ DƯ)
// Tệp mã nguồn: bai4_chia_keo.cpp
// ==============================================================================
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, k;
    if (cin >> n >> k) {
        long long moi_ban = n / k;
        long long con_du = n % k;
        cout << moi_ban << " " << con_du << "\n";
    }
    return 0;
}
