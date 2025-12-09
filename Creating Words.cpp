#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore();

    while (t--) {
        string s;
        getline(cin, s);
        stringstream ss(s);
        vector<string> vc;
        string x;
        while (ss >> x) {
            vc.push_back(x);
        }
        string c1 = vc[0];
        string c2 = vc[1];
        char temp = c1[0];
        c1[0] = c2[0];
        c2[0] = temp;

        cout << c1 << " " << c2 << "\n";
    }

    return 0;
}

