#include<iostream>
using namespace std;
void update(int *x){
    *x = *x + 1;
    cout<<*x<<endl;
}
int main(){
    int a = 10;
    update(&a);//11
    cout<<a;//11
}