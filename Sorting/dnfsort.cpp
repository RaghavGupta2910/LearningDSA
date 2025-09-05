#include<iostream>
using namespace std;

void dnfssort( int *a, int n){
    int l = 0;
    int m = 0;
    int hi = n-1;
    while(m<=hi){
        if(a[m] == 0){
            swap(a[l], a[m]);
            l++;
            m++;
        }
        else if(a[m] == 1){
            m++;
        }else{
            swap(a[m], a[hi]);
            hi--;
        }
    }
}

int main(){
    int a[10] = {0, 1, 2, 0, 1, 2, 0, 1, 2, 0};
    int n = 10;
    dnfssort(a, n);
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
}