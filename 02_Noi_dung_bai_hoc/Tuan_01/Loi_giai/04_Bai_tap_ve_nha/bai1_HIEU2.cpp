// ==============================================================================
// PHIẾU BÀI TẬP VỀ NHÀ BUỔI 01 -- BÀI 1: HIỆU HAI SỐ NGUYÊN (HIEU2.INP / HIEU2.OUT)
// Mã nguồn: HIEU2.cpp (hoặc bai1_HIEU2.cpp)
// ==============================================================================
// BÀI TẬP VỀ NHÀ 1: HIỆU HAI SỐ NGUYÊN (HIEU2.cpp)
#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    freopen("HIEU2.INP", "r", stdin);
    freopen("HIEU2.OUT", "w", stdout);

    long long a, b;
    if (cin >> a >> b) {
        cout << a - b << "\n";
    }

    return 0;
}
