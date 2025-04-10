#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int num;

int main() {
    cin >> num;
    map<string, int> m;
    for (int i = 0; i < num; i++) {
        string name;
        cin >> name;
        map<string, int>::iterator it = m.find(name);
        if (it != m.end()) {
            cout << name << to_string(m[name]) << endl;
            m[name]++;
        } else {
            cout << "OK" << endl;
            m[name] = 1;
        }
    }
    return 0;
}
