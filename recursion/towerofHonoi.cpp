#include <bits/stdc++.h>
using namespace std;

enum tower{
    A=1,
    B,
    C
};
void TOH(int n, int A, int B, int C){
    if(n>0){
        TOH(n-1, A, C, B);
        printf("(%d, %d)\n", A, C);
        TOH(n-1, B, A, C);
    }
}

int main(){
    TOH(3, A, B, C);
}