// https://open.kattis.com/problems/compression2

#include <iostream>
#include <stack>
#include <string>

std::string str;

int main() {
    std::cin >> str;
    std::stack <char> st;
    for(int i = 0; i < (int) str.size(); i++) {
        char c = str[i];
        if (!st.empty()) {
            char top = st.top();
            if (top == c) {
                continue;
            }
        }
        st.push(c);
    }
    int sz = (int) st.size();
    std::string ans = "";
    while (st.empty() == false) {
        ans += st.top();
        st.pop(); 
    }
    std::reverse(ans.begin(), ans.end());     
    if (sz % 2 == 0) {
        std::cout << ans[0] << ans[1];     
    }
    else if (sz == 1) {
        std::cout << ans[0]; 
    }
    else {
        std::cout << ans[0] << ans[1] << ans[2];
    }
    return 0;
}