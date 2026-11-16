#include <iostream>
using namespace std;

const int MAX_VAL = 1000005;
int cnt[MAX_VAL]; // Mang dem toan cuc tren vung BSS

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;

    int max_val = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        cnt[x]++;
        if (x > max_val) max_val = x;
    }

    for (int v = 0; v <= max_val; v++) {
        if (cnt[v] > 0) {
            cout << v << ": " << cnt[v] << "\n";
        }
    }

    return 0;
}
