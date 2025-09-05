#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }
    for(int i =0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //bubble sort algo 1
    // int m = n;
    // for(int i = 0; i<=(n-2); i++){
    //     for(int j = 0; j<=(m-2); j++){
    //         if(arr[j] > arr[j+1]){
    //             swap(arr[j], arr[j+1]);
    //         }
    //     }
    //     m--;
    // }
    //bubble sort algo 2
    for(int i = 0; i<=(n-2); i++){
        for(int j = 0; j<=(n-2); j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
    //printing array
    for(int i =0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}