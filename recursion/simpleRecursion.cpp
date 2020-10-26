#include <bits/stdc++.h>
using namespace std;

void print(int n)
{
    if (n > 0)
    {
        print(n - 1); // head recursion
        cout << n << endl;
    }
    return;
}
int main()
{
    int i = 3;
    print(3);
}