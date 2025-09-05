#include<iostream>
using namespace std;

int partition(int *a, int lb, int ub){
    int pivot = a[lb];
    int s = lb;
    int e = ub;
    while(s<e){
        while(a[s]<=pivot){
            s++;
        }
        while(a[e]>pivot){
            e--;
        }
        if(s<e){
            swap(a[s], a[e]);
        }
    }
    swap(a[lb], a[e]);
    return e;
}
void QuickSort(int *a, int lb, int ub){
    if(lb<ub){
        int l = partition(a, lb, ub);
        QuickSort(a, lb, l-1);
        QuickSort(a, l+1, ub);
    }
}
int main(){
    int a[10] = {5, 2, 9, 1, 5, 6, 7, 3, 8, 4};
    int lb = 0;
    int ub = 9;
    QuickSort(a, lb, ub);
    for(int i=0; i<10; i++){
        cout<<a[i]<<" ";
    }
}