#include<iostream>
using namespace std;

void wavesort(int *a, int n){
    int i = 0;
    if(n%2 == 0){
        for(int i = 0; i<n-1; i+=2){
            if(a[i]<a[i+1]){
                swap(a[i], a[i+1]);
            }
            if(a[i]<a[i-1]){
                swap(a[i], a[i-1]);
            }
        }
        if(i == 0 and a[i]<a[i+1]){
            swap(a[i], a[i+1]);
        }
        if(i == n-1 and a[i]>a[i-1]){
            swap(a[i], a[i-1]);
        }
    }
    if(n%2 != 0){
        for(int i = 0; i<n-1; i+=2){
            if(a[i]<a[i+1]){
                swap(a[i], a[i+1]);
            }
            if(a[i]<a[i-1]){
                swap(a[i], a[i-1]);
            }
        }
        if(i == 0 and a[i]<a[i+1]){
            swap(a[i], a[i+1]);
        }
        if(i == n-1 and a[i]<a[i-1]){
            swap(a[i], a[i-1]);
        }
    }
}

int main(){
    int a[6] = {43,54,23,12,45,98};
    int n = 6;
    wavesort(a, n);
    for(int i = 0; i<n; i++){
        cout<<a[i]<<" ";
    }
}