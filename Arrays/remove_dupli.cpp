#include<iostream>
using namespace std;

void remove(char a[]){
    int len = strlen(a);
    int i = 0;
    int j = 1;
    while(j<len){
        if(a[i] != a[j]){  
            i++;
            a[i] = a[j];
        }
        j++;
    }
    a[i+1] = '\0';
}

int main(){
    char a[1000];
    cin.getline(a,1000);
    remove(a);
    cout << a <<endl;
}