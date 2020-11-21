#include<iostream>
using namespace std;

template<typename T>
void swap_elements(T& a, T& b){
    T temp = a;
    a = b;
    b = temp;
}

template<typename T>
void sort(T* a, T* b){
    int n = b - a;
    for(int i=0; i<n; i++){
        for(int j=0; j<n-1; j++){
            if(a[j] > a[j+1]){
                swap_elements(a[j], a[j+1]);
            }
        }
    }
}

int main(){
    int arr[] = {9, 3, 5, 6, 2, 1, 8};
    sort(&arr[0], &arr[sizeof(arr)/sizeof(int)]);
    for(auto x: arr){
        cout << x << " ";
    }
    cout << "\n";
}