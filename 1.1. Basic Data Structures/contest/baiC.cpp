#include <iostream>
#include <queue>

using namespace std;


int main() {
    priority_queue<int> maxHeap;
    string input;
    while (cin >> input) {
        if (input[0] == '+' && maxHeap.size() < 15000) {
            maxHeap.push(input[1] - '0');
        } else {
            int tmp = maxHeap.top();
            while (maxHeap.top() == tmp && !maxHeap.empty()) {
                maxHeap.pop();
            }
        }
    }
    cout << maxHeap.size() << endl;
    while (!maxHeap.empty()) {
        cout << maxHeap.top() << endl;
        maxHeap.pop();
    }
    return 0;
}