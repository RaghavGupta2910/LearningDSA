#include<iostream>
using namespace std;

int main(){
    int row1 = 2, col1 = 2;
    int row2 = 2, col2 = 4;
    int a[2][2] = {{1,2},
                   {3,4}};
    int b[2][4] = {{4,5,6,7},
                   {8,9,10,11}};
    int c[2][4] = {0};
    for(int i = 0; i<row1; i++){
        for(int j = 0; j<col2; j++){
            for(int k = 0; k<col1; k++){
                c[i][j] += a[i][k]*b[k][j];
            } 
        }
    }
    for(int i = 0; i<row1; i++){
        for(int j = 0; j<col2; j++){
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
}