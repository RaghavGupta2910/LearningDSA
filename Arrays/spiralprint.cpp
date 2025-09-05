#include<iostream>
#include<math.h>
using namespace std;

void spiral(int a[][4],int n,int m){
	int sr = 0, er = n-1, sc = 0, ec = m-1;
	while(sr <=er && sc <=ec){
		for(int col = sc; col<=ec; col++){
			cout<<a[sr][col]<<" ";
		}
		sr++;
		for(int row = sr; row<=er; row++){
			cout<<a[row][ec]<<" ";
		}
		ec--;
		for(int col = ec; col>=sc; col--){
			cout<<a[er][col]<<" ";
		}
		er--;
		for(int row = er; row>=sr; row--){
			cout<<a[row][sc]<<" ";
		}
		sc++;
	}  
}
int main() {
	int a[5][4]={{1,2,3,4},
	             {5,6,7,8},
				 {9,10,11,12},
				 {13,14,15,16},
				 {17,18,19,20}};
	spiral(a,5,4);
	return 0;
}