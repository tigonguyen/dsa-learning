/*
https://codeforces.com/contest/1999/problem/G1

lo = 2, hi = 999
while lo <= hi:
    mid = (lo + hi) / 2
    ask 1*mid
    If res == mid
        lo = mid + 1
    else:
        ans = mid
        hi = mid - 1
Export ans
*/

// #include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    int low = 2, high = 999, ans;
    while (low <= high) {
        int mid = (low + high) / 2;
        cout << "? " << 1 << " " << mid << endl;
        fflush(stdout);
        int res;
        cin >> res;
        if (res == mid) {
            low = mid + 1;
        } else {
            ans = mid;
            high = mid - 1;
        }
    }
    cout << "! " << ans << endl;
    fflush(stdout);
}