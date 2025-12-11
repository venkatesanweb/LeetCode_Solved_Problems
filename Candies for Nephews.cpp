#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int mx = 0;
        while(n%3!=0){
            n++;
            mx++;
        }
        cout << mx << "\n";
    }
    return 0;
}

