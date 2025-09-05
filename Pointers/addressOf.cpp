#include<iostream>
using namespace std;

int main(){
    int a = 10; // it forms a bucket of value 10 named 'a' at 0x16f4fb2ac
    cout<<&a <<endl; // shows the address of bucket

    // in case of arrays
    int b[4] = {1,2,3,4};
    cout<<b<<endl; // will show the address of first index bucket of the array
    cout<<b+4<<endl; // by adding + 4 we print the address of second element 

    // this is not same in char arrays
    char c[100] = {'H','e','l','l','o','\0'};
    cout << c; // will print the array till reaches '\0'
}