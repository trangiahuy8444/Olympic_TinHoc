#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Mo tep theo chuan de thi HSG / Olympic
    freopen("DAO.INP", "r", stdin);
    freopen("DAO.OUT", "w", stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;

    vector<long long> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    // In theo thu tu dao nguoc tu cuoi ve dau
    for (int i = n - 1; i >= 0; --i) {
        cout << a[i] << (i == 0 ? "" : " ");
    }
    cout << "\n";

    return 0;
}
