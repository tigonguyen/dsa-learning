#include <iostream>
#include <vector>

using namespace std;

int n, t;

int main() {
    cin >> n >> t;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int maxCount = 0;
    for (int l = 0; l < n; l++) {
        int sum,count = 0;
        int r = l;
        while (r < n || sum + a[r] <= t) {
            sum += a[r];
            count++;    
            r++;
        }
        maxCount = max(maxCount, count);
    }
    cout << maxCount;
    return 0;
}