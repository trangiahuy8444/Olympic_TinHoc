#include <iostream>
#include <iomanip>
using namespace std;

const int MAXN = 100005;
long long a[MAXN];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;

    long long tong = 0;
    int dem = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] > 0) {
            tong += a[i];
            dem++;
        }
    }

    if (dem == 0) {
        cout << -1 << "\n";
    } else {
        cout << fixed << setprecision(2) << (double)tong / dem << "\n";
    }

    return 0;
}
