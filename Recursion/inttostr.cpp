#include<iostream>
using namespace std;

string inttostr(int n, string str[]){
    if(n<1){
        return "";
    }
    return inttostr(n/10, str) +" "+ str[n%10];
}

int main(){
    string str[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int n;
    cin >> n;
    cout<<inttostr(n, str);
}