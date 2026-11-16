#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;

    vector<long long> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    bool tang_dan = true;
    for (int i = 0; i < n - 1; ++i) {
        if (a[i] >= a[i + 1]) {
            tang_dan = false;
            break;
        }
    }

    if (tang_dan) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}
