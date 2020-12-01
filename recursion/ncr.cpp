#include <iostream>
using namespace std;

int calculate(int n, int r){ // acc to pascals triangle
    if(n==r || r==0){
        return 1;
    }
    return calculate(n-1, r-1) + calculate(n-1 , r);
}
int main() {
    cout <<calculate(4,2) << endl;
}
