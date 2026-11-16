#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    long long k;
    if (!(cin >> n >> k)) return 0;

    int dem = 0;
    int vi_tri_dau = -1;

    for (int i = 1; i <= n; ++i) {
        long long x;
        cin >> x;
        if (x == k) {
            dem++;
            if (vi_tri_dau == -1) {
                vi_tri_dau = i;
            }
        }
    }

    cout << dem << "\n";
    cout << vi_tri_dau << "\n";

    return 0;
}
