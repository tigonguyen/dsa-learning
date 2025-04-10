// https://www.hackerrank.com/challenges/qheap1/problem

#include <cmath>
#include <cstdio>
#include <iostream>
#include <queue>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int q;
    cin >> q;
    priority_queue <int, vector <int>, greater <int> > pq,pq2;
    for (int i = 0; i < q; i++) {
        int cmd;
        cin >> cmd;
        switch(cmd) {
            case 1:
                int num;
                cin >> num;
                pq.push(num);
                break;
            case 2:
                int num2;
                cin >> num2;
                pq2.push(num2);
                break;
            case 3:
                while (!pq2.empty() && pq2.top() == pq.top()) {
                    pq.pop();
                    pq2.pop(); 
                }
                cout << pq.top() << endl;
        }
    }
    return 0;
}
