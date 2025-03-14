// https://cses.fi/problemset/task/1645/

#include <iostream>
#include <stack>
#include <string>
#include <vector>

int n;

int main() {
    std::cin >> n;
    std::vector <int> nums;
    for (int i = 0; i < n; i++) {
        int num;
        std::cin >> num;
        nums.push_back(num);
    }
    std::stack <int> st;
    st.push(0);
    std::vector <int> res(n);
    res[0] = 0;
    for (int i = 1; i < nums.size(); i++) {
        while (!st.empty()) {
            int top = st.top();
            if (nums[top] >= nums[i]) {
                st.pop();
            } else {
                break;
            }
        }
        res[i] = st.empty() ? 0 : st.top() + 1;
        st.push(i);
    }
    for (int i = 0; i < res.size(); i++) {
        std::cout << res[i] << " ";
    }
    return 0;
}