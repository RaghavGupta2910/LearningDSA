#include<iostream>
using namespace std;

int strtoint(string a, int n){
    if(n==0){
        return 0;
    }
    int digit = a[n-1] - '0';
    int sa = strtoint(a, n-1);
    int ba = (sa*10) + digit;
    return ba;
}
int main(){
    string str = "43291";
    int n = 5;
    int ans = strtoint(str, n);
    cout<<ans<<endl;
}