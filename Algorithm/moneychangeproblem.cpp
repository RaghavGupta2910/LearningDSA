#include<iostream>
#include<algorithm>
using namespace std;

bool compare(int a, int b){
    return a <= b;
}

int main(){
    int arr[] = {1,3,5,7,10,20,50};
    int n = sizeof(arr) / sizeof(int);

    int money;
    cin >> money;
    
    while(money>0){
        int indx = lower_bound(arr, arr+n, money, compare) - arr - 1;
        cout<<arr[indx]<<" ";
        money -= arr[indx];
    }
}