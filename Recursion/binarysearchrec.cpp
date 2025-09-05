#include<iostream>
using namespace std;

int binarysearch(int a[], int s, int e, int key){
    if(s > e) return -1;
    int m = (s+e)/2;
    if(a[m] == key){
        return m;
    }
    else if(a[m]<key){
        return binarysearch(a, m+1, e, key);
    }else{
        return binarysearch(a, s, m-1, key);
    }
}

int main(){
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    cout<<binarysearch(a, 0, 9, 5)<<endl;
}