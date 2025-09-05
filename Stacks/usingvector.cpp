#include<iostream>
#include<vector>
using namespace std;


template<typename T>
class Stack{
private:
    vector<T> v;

public:
    void push(T data){
        v.push_back(data);
    }
    bool empty(){
        return v.size() == 0;
    }
    void pop(){
        if(!empty()){
            v.pop_back();
        } else {
            cout << "Stack is empty, cannot pop." << endl;
        }
    }
    T top(){
        if(!empty()){
            return v[v.size() - 1];
        } else {
            cout << "Stack is empty, no top element." << endl;
            return -1; // or throw an exception
        }
    }
};

int main(){
    Stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    for(int i = 0; i<5; i++){
        cout << s.top() << endl;
        s.pop();
    }
}