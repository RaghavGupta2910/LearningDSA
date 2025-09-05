#include<iostream>
using namespace std;

int main(){
    // AND
    /*5 -->  101
    and 7 -->111
    it gives ---
             101 -->5*/
    cout<<"5 & 7 gives: "<<(5 & 7)<<endl;
    
    //OR
    cout<<"5 OR 7: "<<(5|7)<<endl; //7
    
    //XOR
    cout<<"5 XOR 7: "<<(5^7)<<endl;//2

    //LEFT SHIFT
    cout<<"10 << 1: "<<(10 << 1)<<endl;//20

    //RIGHT SHIFT
    cout<<"10 >> 1: "<<(10 >> 1)<<endl;//5
}