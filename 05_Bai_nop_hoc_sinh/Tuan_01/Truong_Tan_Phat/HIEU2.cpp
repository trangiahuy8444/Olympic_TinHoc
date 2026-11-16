#include <iostream>
#include <cstdio>

using namespace std;

int main() {

    freopen("HIEU2.INP", "r", stdin);
    freopen("HIEU2.OUT", "w", stdout);


    long long a, b;
    if (cin >> a >> b) {

        long long hieu = a - b;
        cout << hieu << "\n";
    }

    return 0;
}
