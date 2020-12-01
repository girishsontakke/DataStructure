#include <cstdio>
#include <iostream>
#include <map>
using namespace std;

int fibo(int n) {
  int t1 = 0, t2 = 1, s = 0;
  if (n <= 1)
    return n;
  else {
    for (int i = 2; i <= n; i++) {
      s = t1 + t2;
      t1 = t2;
      t2 = s;
    }
    return s;
  }
}

int rfibo(int n) {
  if (n <= 1)
    return n;

  return rfibo(n - 1) + rfibo(n - 2);
}

map<int, int> mp;
int mrfibo(int n) { // memoization
  if (mp.find(n) != mp.end())
    return mp[n];

  if (n <= 1)
    return n;

  int ans = mrfibo(n - 1) + mrfibo(n - 2);
  mp.insert(make_pair(n, ans));
  return ans;
}

int main() {
  printf("%d\n", fibo(16));
  printf("%d\n", rfibo(16));
  printf("%d\n", mrfibo(16));
  return 0;
}
