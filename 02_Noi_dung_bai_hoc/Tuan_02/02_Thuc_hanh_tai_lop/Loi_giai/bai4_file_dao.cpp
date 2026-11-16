#include <iostream>
#include <algorithm>
using namespace std;

const int MAXN = 100005;
long long a[MAXN];

int main() {
    // Cau hinh doc xuat tep chuan Olympic
    freopen("DAO.INP", "r", stdin);
    freopen("DAO.OUT", "w", stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n / 2; i++) {
        swap(a[i], a[n - 1 - i]);
    }

    for (int i = 0; i < n; i++) {
        cout << a[i] << (i == n - 1 ? "" : " ");
    }
    cout << "\n";

    return 0;
}
