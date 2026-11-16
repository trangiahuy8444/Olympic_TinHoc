#include <iostream>
using namespace std;

const int MAXN = 100005;
long long a[MAXN];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    long long max_val = a[0], min_val = a[0];
    int pos_max = 1, pos_min = 1; // 1-based index

    for (int i = 1; i < n; i++) {
        if (a[i] > max_val) {
            max_val = a[i];
            pos_max = i + 1;
        }
        if (a[i] < min_val) {
            min_val = a[i];
            pos_min = i + 1;
        }
    }

    cout << "Max: " << max_val << " tai vi tri " << pos_max << "\n";
    cout << "Min: " << min_val << " tai vi tri " << pos_min << "\n";

    return 0;
}
