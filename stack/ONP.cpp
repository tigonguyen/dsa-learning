// https://www.spoj.com/problems/ONP/

#include <iostream>
#include <stack>
#include <string>

int numTest;

int main () {
  std::cin >> numTest;
  for (int testCase = 1; testCase <= numTest; testCase++) {
    std::string formula;
    std::cin >> formula; 
    std::stack <char> st; 
    for (int i = 0; i < (int) formula.size(); i++) {
      char c = formula[i];
      if ('a' <= c && c <= 'z') {
        std::cout << c;
      }
      else if (c == ')') {
        std::cout << st.top(); 
        st.pop(); 
      }
      else if (c == '(') {
        continue; 
      }
      else {
        st.push(c); 
      }
    }
    std::cout << std::endl;
  }
}