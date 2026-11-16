#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;

    long long first_val;
    cin >> first_val;
    long long max_val = first_val;
    long long min_val = first_val;

    for (int i = 1; i < n; ++i) {
        long long x;
        cin >> x;
        max_val = max(max_val, x);
        min_val = min(min_val, x);
    }

    cout << max_val << " " << min_val << " " << (max_val - min_val) << "\n";
    return 0;
}
