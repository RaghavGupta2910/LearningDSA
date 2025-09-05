#include<iostream>
using namespace std;

int sort(int a[], int n){
    if(n == 1){
        return 0;
    }
    for(int i = 0; i<n-1; i++){
        if(a[i] > a[i+1]){
            swap(a[i], a[i+1]);
        }
    }
    return sort(a, n-1);
}

int main(){
    int a[5] = {902,46,94,75,83};
    int n = 5;
    for (int i = 0; i<n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    sort(a, n);
    for (int i = 0; i<n; i++){
        cout<<a[i]<<" ";
    }
}