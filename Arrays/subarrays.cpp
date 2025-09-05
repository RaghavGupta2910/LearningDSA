#include<iostream>
using namespace std;
void getarray(int b[], int n){
    for(int i = 0; i<n; i++){
        cin >> b[i];
    }
}
int main(){
    int n;
    cin >> n;
    int a[n];
    getarray(a,n);
    for(int i = 0; i < n; i++){
        for(int j = i; j<n; j++){
            for(int z = i ; z <= j; z++){    
                cout<<a[z]<<" ";
            }
            cout<<endl;
        }
    }
}