#include<iostream>
using namespace std;

int firstoccurence(int *a, int n, int key){
    //base case
    if(n == 0) return -1;
    //assumption
    if(a[0] == key) return 0;
    int i = firstoccurence(a+1, n-1, key);
    //answer
    if(i == -1)return -1;
    else return i+1;
}

int first(int *a, int n, int i, int key){
    if(i == n){
        return -1;
    }

    if(a[i] == key) return i;
    return first(a,n,i+1,key);
}

int lastocc(int a[], int n, int i, int key){
    //base case
    if(i == n){
        return -1;
    }
    //rec 
    if(a[i] == key){
        int bi = lastocc(a, n,i+1,key);
        if(bi == -1){
            return i;
        }else{
            return bi;
        }
    }
    int j = lastocc(a, n, i+1, key);
    return j;
}

int main(){
    int a[] = {1,4,2,3,6,3,9,10};
    int n = sizeof(a)/sizeof(int);
    int i = 0;
    cout<<firstoccurence(a,n,6)<<endl;
    cout<<lastocc(a,n,0,3)<<endl;
    cout<<first(a,n,i,6)<<endl;
}