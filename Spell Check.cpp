#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        if ((int)s.size() != n) {
            cout << "NO\n";
            continue;
        }
        if (n != 5) {
            cout << "NO\n";
            continue;
        }
        string target = "Timur";
        sort(s.begin(), s.end());
        sort(target.begin(), target.end());
        cout << (s == target ? "YES" : "NO") << '\n';
    }
    return 0;
}

