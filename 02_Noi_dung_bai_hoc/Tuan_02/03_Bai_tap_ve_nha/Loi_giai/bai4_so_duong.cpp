#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;

    int dem = 0;
    long long tong = 0;

    for (int i = 0; i < n; ++i) {
        long long x;
        cin >> x;
        if (x > 0) {
            dem++;
            tong += x;
        }
    }

    cout << dem << " " << tong << "\n";
    return 0;
}
