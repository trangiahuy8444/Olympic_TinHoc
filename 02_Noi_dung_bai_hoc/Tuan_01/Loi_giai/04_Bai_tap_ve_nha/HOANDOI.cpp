// ==============================================================================
// PHIẾU BÀI TẬP VỀ NHÀ BUỔI 01 -- BÀI 6: HOÁN ĐỔI HAI BIẾN (HOANDOI.INP / HOANDOI.OUT)
// Mã nguồn: HOANDOI.cpp (hoặc bai6_HOANDOI.cpp)
// ==============================================================================
// BÀI TẬP VỀ NHÀ 6: HOÁN ĐỔI HAI BIẾN (HOANDOI.cpp)
#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    freopen("HOANDOI.INP", "r", stdin);
    freopen("HOANDOI.OUT", "w", stdout);

    long long a, b;
    if (cin >> a >> b) {
        // Kỹ thuật dùng biến tạm trung gian hoán đổi
        long long temp = a;
        a = b;
        b = temp;

        cout << a << " " << b << "\n";
    }

    return 0;
}
