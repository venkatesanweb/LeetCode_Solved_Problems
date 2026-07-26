#include <bits/stdc++.h>
using namespace std;

using int64 = long long;

bool isGood(int64 x) {
    bool vis[10] = {};
    int cnt = 0;

    while (x > 0) {
        int d = x % 10;
        if (!vis[d]) {
            vis[d] = true;
            cnt++;
            if (cnt > 2) return false;
        }
        x /= 10;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> goodNums;
    unordered_set<int> used;

    // Generate all good numbers up to 1e9
    for (int len = 1; len <= 10; len++) {
        for (int a = 0; a <= 9; a++) {
            for (int b = 0; b <= 9; b++) {
                int masks = 1 << len;

                for (int mask = 0; mask < masks; mask++) {
                    string s;

                    for (int i = 0; i < len; i++) {
                        if (mask & (1 << i))
                            s += char('0' + b);
                        else
                            s += char('0' + a);
                    }

                    if (s[0] == '0') continue;

                    int64 val = stoll(s);
                    if (val < 2 || val > 1000000000LL) continue;

                    if (!used.count((int)val)) {
                        used.insert((int)val);
                        goodNums.push_back((int)val);
                    }
                }
            }
        }
    }

    sort(goodNums.begin(), goodNums.end());

    int T;
    cin >> T;

    while (T--) {
        int64 x;
        cin >> x;

        for (int y : goodNums) {
            if (isGood(x * 1LL * y)) {
                cout << y << '\n';
                break;
            }
        }
    }

    return 0;
}
