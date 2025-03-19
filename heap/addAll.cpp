// https://vjudge.net/problem/UVA-10954
# include <queue>
# include <iostream>
using namespace std;

int n;

int main() {
    while (cin >> n) {
        if (n == 0) {
            break;
        }
        priority_queue <int, vector <int>, greater <int> > heap;
        for (int i = 0; i < n; i++) {
            int num;
            cin >> num;
            heap.push(num);
        }
        long long cost = 0;
        while ((int) heap.size() > 1) {
            int top1 = heap.top();
            heap.pop();
            int top2 = heap.top();
            heap.pop();
            cost += top1 + top2;
            heap.push(top1 + top2);
        }
        cout << cost << endl;
    }
    return 0;
}