#include <iostream>
#include <vector>
using namespace std;

// Mang dem tan so cua cac gia tri da gap truoc do
const int MAX_VAL = 200005;
int cnt[MAX_VAL];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    long long s;
    if (!(cin >> n >> s)) return 0;

    vector<long long> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    long long dem_cap = 0;

    // Duyet qua tung phan tu a[j]
    // Voi moi a[j], so luong a[i] (i < j) thoa man a[i] + a[j] = s chinh la cnt[s - a[j]]
    for (int j = 0; j < n; j++) {
        long long can_tim = s - a[j];
        if (can_tim >= 0 && can_tim < MAX_VAL) {
            dem_cap += cnt[can_tim];
        }
        // Ghi nhan phan tu a[j] vao bo dem
        if (a[j] >= 0 && a[j] < MAX_VAL) {
            cnt[a[j]]++;
        }
    }

    cout << dem_cap << "\n";
    return 0;
}
