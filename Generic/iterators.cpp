#include<iostream>
#include<list>
using namespace std;

template<class firstiterator, typename T>
firstiterator search(firstiterator start, firstiterator end, T key){
    for(; start != end; start++){
        if(*start == key){
            return start;
        }
    }
    return end;
}   


int main(){
    list<int> l;
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_back(4);
    l.push_back(5);
    list<int>::iterator it = search(l.begin(), l.end(), 3);
    if (it != l.end()) {
        cout << "Element found: " << *it << endl;
    } else {
        cout << "Element not found" << endl;
    }
}