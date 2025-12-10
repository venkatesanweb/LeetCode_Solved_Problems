#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int maxi = 0;     // longest blank space
        int current = 0;  // current consecutive zeros

        for (int i = 0; i < n; i++) {
            if (a[i] == 0) {
                current++;               // continue zero segment
                maxi = max(maxi, current);
            } else {
                current = 0;             // reset on 1
            }
        }

        cout << maxi << endl;
    }

    return 0;
}

