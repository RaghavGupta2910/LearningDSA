#include<iostream>
using namespace std;
void countefreq(char a[]){
    int len = strlen(a);
    int freq[26] = {0};
    for(int i = 0; i < len; i++){
        int index = a[i] - 'a';
        freq[index]++;
    }
    for(int i = 0; i<26; i++){
        if(freq[i] != 0){
            char x = i + 'a';
            cout<<x<<" = "<<freq[i]<<endl;
        }
    }
}
int main(){
    char a[1000];
    cin.getline(a,1000);
    countefreq(a);
}