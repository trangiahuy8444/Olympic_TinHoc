// ==============================================================================
// BỘ BÀI TẬP TĂNG CƯỜNG TUẦN 01 -- BÀI 5: PHÂN LOẠI TAM GIÁC (LOGIC IF/ELSE & PYTAGO)
// Tệp mã nguồn: bai5_tam_giac.cpp
// ==============================================================================
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long a, b, c;
    if (!(cin >> a >> b >> c)) return 0;

    // Kiem tra dieu kien 3 canh tam giac
    if (a + b <= c || a + c <= b || b + c <= a) {
        cout << "KHONG PHAI TAM GIAC\n";
    } else if (a == b && b == c) {
        cout << "TAM GIAC DEU\n";
    } else if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a) {
        cout << "TAM GIAC VUONG\n";
    } else if (a == b || a == c || b == c) {
        cout << "TAM GIAC CAN\n";
    } else {
        cout << "TAM GIAC THUONG\n";
    }

    return 0;
}
