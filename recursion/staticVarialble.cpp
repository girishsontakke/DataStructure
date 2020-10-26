#include <bits/stdc++.h>
using namespace std;

int fun(int n)
{
    static int x = 0;

    if (n > 0)
    {
        x++;
        return x + fun(n - 1);
    }

    return 0;
}

int main()
{
    int n = 5;
    printf("%d \n", fun(n));
    printf("%d \n", fun(n));
}