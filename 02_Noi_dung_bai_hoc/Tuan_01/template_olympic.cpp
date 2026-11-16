#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    // Thuật toán chính viết ở đây
    int n;
    if (!(cin >> n)) return;
    cout << "Gia tri n nhap vao: " << n << "\n";
}

int main() {
    // 1. Tang toc do nhap xuat du lieu
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // 2. Chuyen huong file khi thi Olympic (Bo comment khi nop bai thi)
    // #ifndef ONLINE_JUDGE
    // freopen("BAITHI.INP", "r", stdin);
    // freopen("BAITHI.OUT", "w", stdout);
    // #endif

    solve();

    return 0;
}
