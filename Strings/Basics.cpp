#include<iostream>
using namespace std;

int main(){
    // Initializing
    // 1)
    string s = "Hello World";
    // 2)
    string s1(s);
    // 3)
    string s2 = s1;

    // To get length
    int len = s.length();
    // Printing
    // 1)
    cout<<s<<endl;
    // 2)
    for(int i = 0; i<len; i++){
        cout << s[i]<< " ";
    }
    cout<<endl;
    // 3)
    cout<<s1<<endl;
    

    //concating strings
    string x = "Hello", y = "I am learning";
    x = x + " " + y;
    cout << x<<endl;

    // Changing string
    s = "My name is Raghav";

    //finding in strings
    string word = "Raghav";
    cout<<"Raghav is present at: "<<s.find(word)<<endl;

    //Deleting a word
    int indx = s.find(word);
    s.erase(indx, word.length() + 1);
    cout<<s<<endl;
}
