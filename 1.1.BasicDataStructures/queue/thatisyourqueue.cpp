/*
https://vjudge.net/problem/UVA-12207

We store patients from 1 to min(N, C) in the queue (N may be large number).
With command N: Output Q.front(), set tmp = Q.front(), Q.pop(), put tmp into Q.
With command E x: Complexity: O(min(N, C))
. Create Q1
. Put all elements from Q into Q1 (except x)
. Put x into Q
. Put all elements from Q1 into Q

Total complexity: O(C * min(N, C))
*/
#include <iostream>
#include <queue>

using namespace std;

int N, C;
int testCase = 0;

int main() {
    while (true) {
        testCase++;
        cin >> N >> C;
        if (N == 0 && C == 0) {
            break; 
        }
        int lenQ = min(N, C);
        queue<int> Q;
        cout << "Case " << testCase << ":" << endl;
        for (int i = 1; i <= lenQ; i++) {
            Q.push(i);
        }
        for (int i = 0; i < C; i++) {
            char cmd;
            cin >> cmd;
            if (cmd == 'N') {
                int tmp = Q.front();
                cout << tmp << endl;
                Q.pop();
                Q.push(tmp);
            } else {
                int x;
                cin >> x;
                queue<int> Q1;
                while (!Q.empty()) {
                    Q1.push(Q.front());
                    Q.pop();
                }
                Q.push(x);
                while (!Q1.empty()) {
                    int person = Q1.front();
                    Q1.pop();
                    if (person != x) {
                        Q.push(person); 
                    }
                  }
            }
        }
    }
    return 0;
}