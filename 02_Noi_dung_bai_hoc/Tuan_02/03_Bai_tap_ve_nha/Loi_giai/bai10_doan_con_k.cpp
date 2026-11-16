#include <iostream>
#include <vector>
#include <algorithm>
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

    // Thuat toan Kadane tim doan con lien tiep co tong lon nhat - O(N)
    long long max_sum = a[0];
    long long cur_sum = 0;

    for (int i = 0; i < n; ++i) {
        cur_sum += a[i];
        max_sum = max(max_sum, cur_sum);
        if (cur_sum < 0) {
            cur_sum = 0;
        }
    }

    cout << max_sum << "\n";
    return 0;
}
