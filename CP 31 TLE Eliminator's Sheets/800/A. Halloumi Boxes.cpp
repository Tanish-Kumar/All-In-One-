#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        // Check if already sorted
        if (is_sorted(a.begin(), a.end())) {
            cout << "YES\n";
            continue;
        }

        // If k == 1 and not sorted, then impossible
        if (k == 1) {
            cout << "NO\n";
            continue;
        }

        // If k >= 2, we can always sort
        cout << "YES\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
