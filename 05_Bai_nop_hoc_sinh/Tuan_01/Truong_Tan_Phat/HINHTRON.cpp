#include <iostream>
#include <cstdio>

using namespace std;

int main() {

    freopen("HINHTRON.INP", "r", stdin);
    freopen("HINHTRON.OUT", "w", stdout);


    double R;
    if (cin >> R) {

        const double PI = 3.141592653589793;

        double C = 2 * PI * R;
        double S = PI * R * R;

        cout << fixed;
        cout.precision(2);

        cout << C << "\n";
        cout << S << "\n";
    }

    return 0;
}
