#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a[5];
    cin >> a[1] >> a[2] >> a[3] >> a[4];

    string s;
    cin >> s;

    long long calories = 0;

    for (char c : s) {
        int strip = c - '0';
        calories += a[strip];
    }

    cout << calories;
    return 0;
}
x
