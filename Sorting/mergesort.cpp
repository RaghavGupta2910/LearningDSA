#include<iostream>
using namespace std;

void merge(int *a, int *b, int*c, int s , int e){
    int mid = (s+e)/2;
    int i = s;
    int j = mid+1;
    int k = s;
    while(i<=mid && j<=e){
        if(b[i]<c[j]){
            a[k++] = b[i++];
        }else{
            a[k++] = c[j++];
        }
    }
    while(i<=mid){
        a[k++] = b[i++];
    }
    while(j<=e){
        a[k++] = c[j++];
    }
}

int mergesort(int *a, int s, int e){
    int b[100], c[100];
    int mid = (s+e)/2;
    if(s == e){
        return 0;
    }
    for(int i = s; i<=mid; i++){
        b[i] = a[i];
    }
    for(int i = mid+1; i<=e; i++){
        c[i] = a[i];
    }

    mergesort(b, s, mid);
    mergesort(c, mid+1, e);

    merge(a,b,c,s,e);
}

int main(){
    int a[10] = {902,46,94,75,83,12,34,56,78,90};
    int s = 0;
    int e = 9;
    mergesort(a, s, e);
    for(int i = 0; i<=e; i++){
        cout<<a[i]<<" ";
    }
}