#include<iostream>
using namespace std;

void rotate(char a[], int n){
    int len = strlen(a);
    int i = len - 1;;
    while(i>=0){
        a[i+n] = a[i];
        i--;
    }
    int j = len;
    for(int i = 0; i<n; i++){
        a[i] = a[j];
        j++;
    }
    a[len] = '\0';
    cout<<a<<endl;
    return;
}

int main(){
    char a[1000];
    cin.getline(a,1000);
    int n;
    cin >> n;
    rotate(a,n);
}