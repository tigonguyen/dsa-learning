#include <iostream>
#include <bitset>
#include <vector>
using namespace std;

const int MAX_N = 1000;
bitset<MAX_N> beats[MAX_N];

int main() {
    int n;
    cin >> n;
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            int x;
            cin >> x;
            if(x == 1) {
                beats[i].set(j);
            }
        }
    }
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(beats[i][j]) {
                bitset<MAX_N> temp = beats[j] & beats[i].flip();
                for(int k = 0; k < n; k++) {
                    if(temp[k] && k != i && k != j) {
                        if(beats[j][k] && beats[k][i]) {
                            cout << i + 1 << " " << j + 1 << " " << k + 1 << endl;
                            return 0;
                        }
                    }
                }
            }
        }
    }
    
    cout << "-1 -1 -1" << endl;
    return 0;
}