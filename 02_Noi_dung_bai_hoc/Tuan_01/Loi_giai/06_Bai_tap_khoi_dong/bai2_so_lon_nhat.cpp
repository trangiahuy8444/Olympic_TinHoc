// ==============================================================================
// BỘ BÀI TẬP KHỞI ĐỘNG CÚ PHÁP C++ -- BÀI 2: TÌM SỐ LỚN NHẤT TRONG BA SỐ (RÈN LUYỆN IF/ELSE)
// Tệp mã nguồn: bai2_so_lon_nhat.cpp
// ==============================================================================
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    long long a, b, c;
    if (!(cin >> a >> b >> c)) return 0;

    long long max_val = max({a, b, c});
    cout << max_val << "\n";

    return 0;
}
