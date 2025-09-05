#include<iostream>
using namespace std;

void unset(int &n, int i){
    int mask1 = (1 << i);
    int mask = (~mask1);
    n = (n & mask);
}

void setBit(int &n,int v,int i){
    int mask1 = (1 << i);
    int mask = (~mask1);
    n = ((n & mask)|(v<<i));
}

bool isOdd(int n){
    int lsb = (n & 1) == 0 ? 0 : 1;
    return lsb;
}

int main(){
    // int n = 10, m = 10;
    // unset(n,3);
    // cout << "New N is: "<<n<<endl;  
    // setBit(m, 1, 3);
    // cout << "New M is: "<< m<< endl;
    int a;
    cin >>a;
    if(isOdd(a)){
        cout << "a is Odd value"<<endl;
    }else{
        cout << "a is Even value"<<endl;
    }
}