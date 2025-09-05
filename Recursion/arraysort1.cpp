#include<iostream>
using namespace std;

bool sorted(int *a, int n){
    // Base Case
    if(n == 0 | n == 1) return true;
    // Assumption/Recursion
    bool smallersort = sorted(a+1, n-1);
    //Solution
    if(smallersort && a[0] <= a[1]){
        return true;
    }else return false;
}

int main(){
    int a[] = {1,2,3,17,9,18};
    int n = sizeof(a)/sizeof(int);
    bool ans = sorted(a,n);
    if(ans) cout<<"Sorted"<<endl;
    else cout<<"NotSorted"<<endl;
}