#include <iostream>
#include <stack>
#include <math.h> 

using namespace std;

int n;
int a[1000005];
int leftPos[1000005], rightPos[1000005];
stack <int> st;

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i]; 
    }
    st.push(0); 
    for (int i = 1; i <= n; i++) {
        while (a[st.top()] >= a[i]) {
            st.pop(); 
        }    
        leftPos[i] = st.top(); 
        st.push(i); 
    }
    while (!st.empty()) {
        st.pop(); 
    }
    st.push(n + 1);
    for (int i = n; i >= 1; i--) {
        while (a[st.top()] >= a[i]) {
            st.pop(); 
        }
        rightPos[i] = st.top(); 
        st.push(i);  
    }
    long long ans = 0;
    for (int i = 1; i <= n; i++) {
        int width = rightPos[i] - leftPos[i] - 1;
        int side = min(a[i], width);
        ans = max(ans, (long long)side);
    }
    cout << ans; 
    return 0;
}