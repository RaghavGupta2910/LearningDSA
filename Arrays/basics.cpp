#include<iostream>
using namespace std;

void insertion(int*a, int k, int p, int& len){
    for(int i = len-1; i>=k; i--){
        a[i+1] = a[i];
        // cout<<a[i]<<endl;
    }
    len++;
    a[k] = p;
}
void traverse(int a[],int n){
    for(int i=0; i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void deletion(int a[], int k,int& len){
    for(int i = k; i<len; i++){
        a[i] = a[i+1];
    }
    len--;
}
void bubblesort(int* a, int len){
    int temp = 0;
    for(int i = 1; i<len; i++){
        for(int j = 0; j < len - i; j++){
            if(a[j]>a[j+1]){
                int temp = a[j+1];
                a[j+1] = a[j];
                a[j] = temp;
            }
        }
    }
}
int linearsearch(int a[], int item, int len){
    int i = 0;
    while(i<len){
        if(a[i] == item){
            break;
        }else{
            i++;
        }
    }
    return i;
}
int binarySearch(int a[], int len, int item){
    int lb = 0, ub = len-1;
    int loc = 0;
    while(lb < ub){
        int mid = (ub+lb)/2;
        if(a[mid]<item){
        lb = mid + 1;
        }
        else if(a[mid]>item){
            ub = mid - 1;
        }else{
            loc = mid;
            break;
        }
    }
    return loc;
}
int main(){
    int b[10] = {10,23,3,4,29,65,2,1,0,7};
    int len1 = sizeof(b)/sizeof(int);
    
    // Deletion
    deletion(b, 4, len1);
    traverse(b,len1);
    
    //Bubble Sort
    bubblesort(b, len1);
    traverse(b, len1);

    //Linear Search
    cout << linearsearch(b, 29, len1)<<endl;

    //BinarySeach
    cout<<binarySearch(b, len1, 10);
}