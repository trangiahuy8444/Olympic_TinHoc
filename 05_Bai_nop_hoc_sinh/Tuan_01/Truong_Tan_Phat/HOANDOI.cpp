#include <iostream>
#include <cstdio>

using namespace std;

int main() {

    freopen("HOANDOI.INP", "r", stdin);
    freopen("HOANDOI.OUT", "w", stdout);


    long long a, b;
    if (cin >> a >> b) {

        long long temp = a;
        a = b;
        b = temp;

        cout << a << " " << b << "\n";
    }

    return 0;
}
