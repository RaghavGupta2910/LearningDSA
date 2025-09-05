//queue using linked list
#include<iostream>
#include<list>
using namespace std;

class Queue{
    int cs;
    list<int> l;
public:
    Queue(){
        cs = 0;
    }
    bool isempty(){
        return cs == 0;
    }
    void push(int data){
        l.push_back(data);
        cs++;
    }
    void pop(){
        if(!isempty()){
            cs--;
            l.pop_front();
        }
    }
    int front(){
        return l.front();
    }
};