#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);

    int even_count = 0, odd_count = 0;
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] % 2 == 0)
            even_count++;
        else
            odd_count++;
    }

    if (even_count > 0 && odd_count > 0) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
