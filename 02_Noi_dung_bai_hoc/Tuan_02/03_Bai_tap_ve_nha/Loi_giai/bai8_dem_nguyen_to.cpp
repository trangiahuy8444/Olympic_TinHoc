#include <iostream>
using namespace std;

bool is_prime(long long x) {
    if (x < 2) return false;
    if (x == 2 || x == 3) return true;
    if (x % 2 == 0 || x % 3 == 0) return false;
    for (long long i = 5; i * i <= x; i += 6) {
        if (x % i == 0 || x % (i + 2) == 0) return false;
    }
    return true;
}

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
        if (is_prime(x)) {
            dem++;
            tong += x;
        }
    }

    cout << dem << "\n";
    cout << tong << "\n";

    return 0;
}
