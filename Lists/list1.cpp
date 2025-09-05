#include<iostream>
#include<list>
using namespace std;

int main(){
    //creating
    list<int> l;

    //Init
    list<int> l1;
    l1.push_back(1);
    l1.push_back(2);
    l1.push_back(3);
    l1.push_back(4);
    l1.push_back(5);

    list<string> ls;
    ls.push_back("Apple");
    ls.push_back("Banana");
    ls.push_back("Cherry");
    ls.push_back("Date");
    ls.push_back("Elderberry");
    
    //Iterate over it
    for( auto s: ls){
        cout<<s<<" -> ";
    }
    cout<<endl;
    //sort
    ls.sort();
    //Iterate over it
    for( auto s: ls){
        cout<<s<<" -> ";
    }
    cout<<endl;
    
    //reverse
    ls.reverse();
    //Iterate over it
    for( auto s: ls){
        cout<<s<<" -> ";
    }
    cout<<endl;

    //pop front
    cout<<ls.front()<<endl;
    ls.pop_front();
    
    // pop and add
    cout<<ls.back()<<endl;
    ls.pop_back();
    ls.push_back("Fig");
    
    //Iterate over it
    for( auto s: ls){
        cout<<s<<" -> ";
    }


}