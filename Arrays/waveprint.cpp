#include<iostream>
using namespace std;
void waveprint(int a[][5],int r,int c){
    for(int i = 0; i<c; i++){
        if(i % 2 == 0){
            for(int j = 0; j<r; j++){
                cout<<a[j][i]<<" ";
            }
        cout<<endl;
        }
        if(i % 2 != 0){
            for(int j = r-1; j>=0; j--){
                cout << a[j][i]<<" ";
            }
        cout<<endl;
        }
    }
}
int main(){
    int r =5;
    int c =5;
    int a[5][5] = {
        {1,2,3,4,5},
        {6,7,8,9,10},
        {11,12,13,14,15},
        {16,17,18,19,20},
        {21,22,23,24,25}
    };
    waveprint(a, r, c);
}