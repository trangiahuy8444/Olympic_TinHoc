#include <iostream>
#include <cstdio>

using namespace std;

int main() {

    freopen("TONG3SO.INP", "r", stdin);
    freopen("TONG3SO.OUT", "w", stdout);


    long long A, B, C;
    if (cin >> A >> B >> C) {

        long long S = A + B + C;
        cout << S << "\n";
    }

    return 0;
}
