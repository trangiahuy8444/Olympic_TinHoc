#include <iostream>
#include <cstdio>

using namespace std;

int main() {

    freopen("TIENDIEN.INP", "r", stdin);
    freopen("TIENDIEN.OUT", "w", stdout);


    long long K;
    if (cin >> K) {

        double tien = K * 2500.5 * 1.1;
        cout << fixed;
        cout.precision(2);
        cout << tien << "\n";
    }

    return 0;
}
