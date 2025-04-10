#include <iostream>
#include <set>

using namespace std;

int cmd, num;
set<int> s;

int main() {
    set<int>::iterator it;
    while (true) {
        cin >> cmd;
        if (cmd == 0) {
            break;
        }
        if (cmd == 1) {
            cin >> num;
            s.insert(num);
        } else if (cmd == 2) {
            cin >> num;
            s.erase(num);
        } else if (cmd == 3) {
            if (!s.empty()) {
                it = s.begin();
                cout << *it << endl;
            } else {
                cout << "empty" << endl;
            }
        } else if (cmd == 4) {
            if (!s.empty()) {
                it = s.end();
                it--;
                cout << *it << endl;
            } else {
                cout << "empty" << endl;
            }
        } else if (cmd == 5) {
            cin >> num;
            if (!s.empty()) {
                it = s.upper_bound(num);
                if (it != s.end()) {
                    cout << *it << endl;
                } else {
                    cout << "no" << endl;
                }
            } else {
                cout << "empty" << endl;
            }
        } else if (cmd == 6) {
            cin >> num;
            if (!s.empty()) {
                it = s.lower_bound(num);
                if (it != s.end()) {
                    cout << *it << endl;
                } else {
                    cout << "no" << endl;
                }
            } else {
                cout << "empty" << endl;
            }
        } else if (cmd == 7) {
            if (cin >> num) {
                if (!s.empty()) {
                    it = s.lower_bound(num);
                    if (it != s.begin()) {
                        cout << *prev(it) << endl;
                    } else {
                        cout << "no" << endl;
                    }
                } else {
                    cout << "empty" << endl;
                }
            }
        } else if (cmd == 8) {
            if (cin >> num) {
                if (!s.empty()) {
                    it = s.upper_bound(num);
                    if (it != s.begin()) {
                        cout << *prev(it) << endl;
                    } else {
                        cout << "no" << endl;
                    }
                } else {
                    cout << "empty" << endl;
                }
            }
        }
    }
    return 0;
}