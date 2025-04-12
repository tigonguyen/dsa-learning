#include <bits/stdc++.h>
using namespace std;

int main() {
    int low = 1, high = 1000000;
    while (low < high) {
        int mid = (low + high) / 2;
        cout << mid << endl;
        fflush(stdout);
        string response;
        cin >> response;
        if (response == "<") {
            high = mid - 1;
        } else {
            low = mid;
        }
    }
    cout << "! " << low << endl;
    fflush(stdout);
    return 0;
}