#include<iostream>
using namespace std;

bool isSorted(int *a, int n, int i){
    //base case
    if (i == n-1) return true;
    //assumption
    bool sort = isSorted(a,n,i+1);
    //answer
    if( sort && a[i] <= a[i+1]) return true;
    else return false;
}

int main(){
    int a[] = {1,4,26,18,20};
    int n = sizeof(a)/sizeof(int);
    int i = 0;
    bool ans = isSorted(a,n,i);
    if (ans) cout<<"Sorted"<<endl;
    else cout << "Not Sorted"<<endl;
}