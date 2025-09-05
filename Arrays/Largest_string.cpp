#include<iostream>
using namespace std;
void Copy(char a[], char b[]){
    int len = strlen(a);
    for(int i = 0; i<= len; i++){
        b[i] = a[i];
    }
}
void print_array(char a[]){
    int len = strlen(a);
    for(int i = 0; i<=len; i++){
        cout<<a[i];
    }
    cout<<endl;
}
int main(){
    int n;
    char a[1000];
    char largest[1000];
    int lrg_len = 0;
    cin >> n;
    cin.get();
    for(int i = 0; i<n; i++){
        cin.getline(a,1000);
        int len = strlen(a);
        if(lrg_len < len){
            lrg_len = len;
            Copy(largest,a);
        }
        // print_array(a);
    }
    cout<<largest<<","<<lrg_len;
}