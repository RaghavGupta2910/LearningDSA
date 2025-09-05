#include<iostream>
using namespace std;

void countingsort(int *a, int n){
    int largst = -1;

    for(int i = 0; i<n; i++){
        largst = max(largst, a[i]);
    }

    int *freq = new int[largst+1]();
    for(int i = 0; i<n; i++){
        freq[a[i]]++;
    }

    int j = 0;
    for(int i = 0; i<=largst; i++){
        while(freq[i]>0){
            a[j] = i;
            j++;
            freq[i]--;
        }
    }
}

int main(){
    int a[12] = {7, 98, 45, 23, 56, 89, 12, 34, 67, 90, 7, 34};
    int n = 12;
    countingsort(a, n);
    for(int i = 0; i<n; i++){
        cout<<a[i]<<" ";
    }
}