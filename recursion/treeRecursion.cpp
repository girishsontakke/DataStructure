#include <bits/stdc++.h>
using namespace std;

// time complexity = o(2^n)
// space complexity = o(n)
void fun(int n)
{

  if (n > 0)
  {
    printf("%d ", n);
    fun(n - 1);
    fun(n - 1);
  }
}

int main()
{
  int i = 3;

  fun(i);
  cout << endl;
  return 0;
}