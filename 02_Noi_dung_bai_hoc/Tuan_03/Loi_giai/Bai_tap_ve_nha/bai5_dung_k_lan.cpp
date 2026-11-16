#include <iostream>
using namespace std;

const int MAX_VAL = 1000005;
int cnt[MAX_VAL];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    if (!(cin >> n >> k)) return 0;

    int max_val = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        cnt[x]++;
        if (x > max_val) max_val = x;
    }

    bool co_so = false;
    for (int v = 0; v <= max_val; v++) {
        if (cnt[v] == k) {
            cout << v << " ";
            co_so = true;
        }
    }

    if (!co_so) cout << "-1";
    cout << "\n";

    return 0;
}
