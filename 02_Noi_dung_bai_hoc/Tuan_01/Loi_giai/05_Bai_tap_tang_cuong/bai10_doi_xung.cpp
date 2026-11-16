// ==============================================================================
// BỘ BÀI TẬP TĂNG CƯỜNG TUẦN 01 -- BÀI 10: TÁCH CHỮ SỐ & KIỂM TRA SỐ ĐỐI XỨNG (PALINDROME)
// Tệp mã nguồn: bai10_doi_xung.cpp
// ==============================================================================
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    if (!(cin >> n)) return 0;

    long long temp = n;
    long long tong_cs = 0;
    long long dao = 0;

    while (temp > 0) {
        int d = temp % 10;
        tong_cs += d;
        dao = dao * 10 + d;
        temp /= 10;
    }

    cout << tong_cs << "\n";
    cout << dao << "\n";
    if (dao == n) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}
