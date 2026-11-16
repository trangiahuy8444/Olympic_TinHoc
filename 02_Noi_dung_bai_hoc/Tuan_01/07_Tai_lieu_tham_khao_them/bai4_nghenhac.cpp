#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("NGHENHAC.INP", "r", stdin);
    freopen("NGHENHAC.OUT", "w", stdout);
    #endif

    int n;
    long long k;
    if (!(cin >> n >> k)) return 0;

    vector<long long> m(n);
    for (int i = 0; i < n; i++) {
        cin >> m[i];
    }

    // Kỹ thuật Two Pointers đạt độ phức tạp tối ưu O(N)
    int left = 0;
    long long current_sum = 0;
    int max_songs = 0;

    for (int right = 0; right < n; right++) {
        current_sum += m[right];

        // Thu hẹp con trỏ left nếu tổng thời gian vượt quá K
        while (current_sum > k && left <= right) {
            current_sum -= m[left];
            left++;
        }

        // Cập nhật số bài hát nhiều nhất có thể nghe
        max_songs = max(max_songs, right - left + 1);
    }

    cout << max_songs << "\n";

    return 0;
}
