#include<iostream>
#include<climits>
using namespace std;
void getarray(int b[], int n){
    for(int i = 0; i<n; i++){
        cin >> b[i];
    }
}
void subaaray(int a[], int n){
    for(int i = 0; i < n; i++){
        for(int j = i; j<n; j++){
            for(int z = i ; z <= j; z++){    
                cout<<a[z]<<" ";
            }
            cout<<endl;
        }
    }
}
void sumsubaaray(int a[], int n){
    int max_sum = INT_MIN;
    int wi,wj;
    for(int i = 0; i < n; i++){
        for(int j = i; j<n; j++){
            int sum = 0;
            for(int z = i ; z <= j; z++){    
                sum += a[z];
                if(max_sum < sum){
                    max_sum = sum;
                    wi = i;
                    wj = j;
                }
            }
        }
    }
    for(int i = wi; i<=wj; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<"Maximum sum is: "<< max_sum;
}
int main(){
    int n;
    cin >> n;
    int a[n];
    getarray(a,n);
    subaaray(a,n);
    sumsubaaray(a,n);
}