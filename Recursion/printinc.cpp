#include<iostream>
using namespace std;

void printinc(int i, int n){
    if(i == n+1) return;
    cout<<i<<" ";
    printinc(i+1, n);
}

int main(){
    int n, i;
    cin >> n >> i;
    printinc(i,n);
}