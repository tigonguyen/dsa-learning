#include <iostream>
#include <map>

using namespace std;

int n, k;

int main() {
    cin >> n >> k;
    map<int, int> m;
    int x, count;
    for (int i = 1; i <= n; i++) {
        cin >> x;
        if (m.find(k - x) != m.end()) {
            cout << m[k - x] << " " << i << endl;
            count++;
        } else {
            m[x] = i;
        }
    }
    if (count == 0) {
        cout << "IMPOSSIBLE";
    }
    return 0;
}