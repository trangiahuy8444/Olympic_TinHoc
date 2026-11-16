#include <iostream>
#include <cstdio>

using namespace std;

int main() {

    freopen("LUONG.INP", "r", stdin);
    freopen("LUONG.OUT", "w", stdout);

    long long L, P;
    if (cin >> L >> P) {
        double thucNhan = L + P - (L * 0.105);

        cout << fixed;
        cout.precision(2);
        cout << thucNhan << "\n";
    }

    return 0;
}
