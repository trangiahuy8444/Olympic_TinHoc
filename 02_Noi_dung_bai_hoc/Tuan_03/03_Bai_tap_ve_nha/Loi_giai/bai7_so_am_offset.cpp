#include <iostream>
using namespace std;

// Ky thuat doi truc Offset cho so am
// Gia tri tu -100000 den 100000 cong them OFFSET se thanh tu 0 den 200000
const int OFFSET = 100005;
const int MAX_SIZE = 200010;
int cnt[MAX_SIZE];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;

    for (int i = 0; i < n; i++) {
        long long x;
        cin >> x;
        cnt[x + OFFSET]++;
    }

    int max_freq_am = 0;
    int ans_am = 0;
    bool co_so_am = false;

    // Duyet qua cac gia tri am: tu -100000 den -1
    for (int v = -100000; v <= -1; v++) {
        int idx = v + OFFSET;
        if (cnt[idx] > max_freq_am) {
            max_freq_am = cnt[idx];
            ans_am = v;
            co_so_am = true;
        }
    }

    if (co_so_am && max_freq_am > 0) {
        cout << ans_am << "\n";
    } else {
        cout << "0\n";
    }

    return 0;
}
