#include<iostream>
#include<stack>
using namespace std;

//using another stack
template<typename T>
stack<T>& reverse(stack<T>&s){
    stack<T> temp;
    for(int i = s.size()-1; i>=0;i--){
        T data = s.top();
        s.pop();
        for(int j = 0; j<i; j++){
            temp.push(s.top());
            s.pop();
        }
        s.push(data);
        while(!temp.empty()){
            s.push(temp.top());
            temp.pop();
        }
    }
    return s;
}

//using recursion
template<typename T>
void insertAtbottom(stack<T>&s, T x){
    if(s.empty()){
        s.push(x);
        return;
    }
    T d = s.top();
    s.pop();
    insertAtbottom(s, x);
    s.push(d);
}

void reverseStack(stack<int>&s){
    if(s.empty()){
        return;
    }

    int x = s.top();
    s.pop();
    reverseStack(s);
    insertAtbottom(s, x);
}
int main(){
    stack<int> s;
    for(int i = 0; i<10; i++){
        s.push(i*i);
    }
    cout << "Original Stack: ";
    while(!s.empty()){
        cout<<s.top()<<", ";
        s.pop();
    }
    cout<<endl;
    for(int i = 0; i<10; i++){
        s.push(i*i);
    }
    reverseStack(s);
    cout << "Reversed Stack: ";
    while(!s.empty()){
        cout<<s.top()<<", ";
        s.pop();
    }
    cout<<endl;
    return 0;
}