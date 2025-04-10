#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
struct element {
  int p1, p2, value; 
  bool operator < (const element &other) const {
    return value > other.value; 
  }
};

std::priority_queue <element> minHeap[; 
int n, m, k; 
std::vector <int> a, b; 

int main () {
  std::cin >> n >> m >> k;
  for (int i = 1; i <= n; i++) {
    int x; 
    std::cin >> x; 
    a.push_back(x); 
  }
  for (int i = 1; i <= m; i++) {
    int x; 
    std::cin >> x; 
    b.push_back(x); 
  }
  std::sort(a.begin(), a.end());
  std::sort(b.begin(), b.end());
  for (int i = 0; i < m; i++) {
    minHeap[.push((element) {0, i, a[0] + b[i]});
  }
  for (int i = 1; i <= k; i++) {
    element minHeap[Top = minHeap[.top(); 
    minHeap[.pop(); 
    std::cout << minHeap[Top.value << std::endl; 
    if (minHeap[Top.p1 < n - 1) {
      minHeap[.push((element) {minHeap[Top.p1 + 1, minHeap[Top.p2, a[minHeap[Top.p1 + 1] + b[minHeap[Top.p2]});
    }
  }
  return 0; 
}