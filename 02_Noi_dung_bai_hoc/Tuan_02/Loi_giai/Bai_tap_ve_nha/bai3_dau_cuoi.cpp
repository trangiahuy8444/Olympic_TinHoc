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

    // Vi N le, phan tu giua co chi so (0-based) la n / 2
    long long dau = a[0];
    long long giua = a[n / 2];
    long long cuoi = a[n - 1];

    long long tong = dau + giua + cuoi;
    cout << tong << "\n";

    return 0;
}
