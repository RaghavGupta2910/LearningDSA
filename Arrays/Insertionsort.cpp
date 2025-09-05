#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i<n; i++){
        cin >> a[i];
    }
    //insertion sort algo
    for(int i = 1; i<n; i++){
        int pic = a[i];
        for(int j = i-1; j>=0; j--){
            if(a[j]>pic){
                a[j+1] = a[j];
            }
            a[j+1] = pic;
        }
    }
    //printing array
    for(int i = 0; i<n; i++){
        cout<< a[i]<<" ";
    }
}