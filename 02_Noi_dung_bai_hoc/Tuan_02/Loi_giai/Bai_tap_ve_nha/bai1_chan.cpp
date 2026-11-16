#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;

    vector<long long> a(n);
    vector<long long> chan;

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (a[i] % 2 == 0) {
            chan.push_back(a[i]);
        }
    }

    if (chan.empty()) {
        cout << -1 << "\n";
    } else {
        for (int i = 0; i < (int)chan.size(); ++i) {
            cout << chan[i] << (i + 1 == (int)chan.size() ? "" : " ");
        }
        cout << "\n";
    }

    return 0;
}
