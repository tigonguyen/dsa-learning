// https://oj.vnoi.info/problem/mmass

#include <iostream>
#include <stack>
#include <string>

std::string compound;

int main () {
    std::cin >> compound;
    std::stack <int> st;
    for (int i = 0; i < (int) compound.size(); i++) {
        char c = compound[i];
        if (c == '(') {
            st.push(0);
        } else if (c == 'C') {
            st.push(12);
        } else if (c == 'H') {
            st.push(1);
        } else if (c == 'O') {
            st.push(16);
        } else if (c == ')') {
            int sum = 0; 
            while (true) {
                int value = st.top();    
                st.pop(); 
                if (value == 0) {
                    break; 
                }
                sum += value; 
            }
            st.push(sum);
        } else {
            int value = st.top();
            st.pop(); 
            value *= c - '0'; 
            st.push(value);
        }
    }
    int res = 0;
    while (!st.empty()) {
        int value = st.top(); 
        st.pop();
        res += value; 
    }
    std::cout << res;
    return 0;
}