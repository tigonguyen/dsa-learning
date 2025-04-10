/*
https://oj.vnoi.info/problem/mink

When transitioning from K old numbers to K new numbers, 
    the set of numbers we have still differs from the old set by only 2 numbers. --> Sliding window.
Deque: ensuring the front always holds the minimum value in the current window. 
    So, if back is greater than current num, remove back.

a = [8, 6, 6, 9, 4, 3, 5, 5, 9, 2]
dq = [8]
...
dq = [6, 9]
*/

#include <iostream> 
#include <deque>

using namespace std;

int numTest; 
int n, k; 
int a[17005];

int main() {
    cin >> numTest;
    for (int testCase = 1; testCase <= numTest; testCase++) {
        cin >> n >> k;
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }
        deque <int> dq;
        // first window setting up
        for (int i = 1; i <= k; i++) {
            while (!dq.empty() && a[i] < dq.back()) {
                dq.pop_back();
            }
            dq.push_back(a[i]);
        }
        cout << dq.front() << ' ';
        // sliding window
        for (int i = k + 1; i <= n; i++) {
            if (dq.front() == a[i - k]) {
                dq.pop_front(); 
            }
            while (!dq.empty() && a[i] < dq.back()) {
                dq.pop_back();
            }
            dq.push_back(a[i]); 
            cout << dq.front() << ' ';
        }
        cout << endl;
    }
    return 0;
}