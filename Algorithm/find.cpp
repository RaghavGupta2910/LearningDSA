#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int arr[] = {10,20,30,40,50};
    int n = sizeof(arr) / sizeof(int);

    int key;
    cin>>key;

    int *aptr = find(arr, arr+n, key);
    int indx = aptr - arr;

    cout<<indx;
}