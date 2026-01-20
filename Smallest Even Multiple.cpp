#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int smallestEvenMultiple(int n) {
        if (n % 2 == 0) {
            return n;
        }
        return n * 2;
    }
};

int main() {
    int a;
    cin >> a;

    Solution ch;
    int val = ch.smallestEvenMultiple(a); 

    cout << val;
    return 0;
}

