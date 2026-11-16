#include <iostream>
using namespace std;

// Mang dem tan so toan cuc
const int MAX_VAL = 1000005;
int cnt[MAX_VAL];

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

    int best_freq = 0;
    int best_val = 0;

    // Duyet tu 0 den max_val de tim so co tan so lon nhat
    // Vi duyet tu be den lon, nen neu cung tan so, so nho hon se duoc uu tien
    for (int v = 0; v <= max_val; v++) {
        if (cnt[v] > best_freq) {
            best_freq = cnt[v];
            best_val = v;
        }
    }

    cout << best_val << " " << best_freq << "\n";
    return 0;
}
