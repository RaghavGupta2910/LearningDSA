#include<iostream>
using namespace std;
void rotation(int a[][4],int n,int m){
    for(int i = 0; i<=n; i++){
        for(int j = i+1; j<=m-1; j++){
            swap(a[i][j], a[j][i]);
        }
    }
    for(int col = 0; col<m; col++){
        int x = 0, y = n-1;
        while(x<y){
            swap(a[x][col],a[y][col]);
            x++;
            y--;
        }
    }
    for(int row =0; row<n; row++){
        for(int col = 0; col <m; col++){
            cout<< a[row][col]<<" ";
        }
        cout<<endl;
    }
}
int main(){
int a[4][4] = {{1,2,3,4},
               {5,6,7,8},
               {9,10,11,12},
               {13,14,15,16}};
rotation(a,4,4);
}