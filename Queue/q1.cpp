#include<iostream>
#include<queue>
using namespace std;


template<typename T>
class Queue{
    T *arr;
    int f, r, cs, ms;
public:
    Queue(int ds = 5){
        arr = new T[ds];
        f = 0;
        ms = ds;
        cs = 0;
        r = ms-1;
    }
    bool full(){
        return cs == ms;
    }
    void push(T data){
        if(!full()){
            r = (r+1) % ms;
            arr[r] = data;
            cs++;
            cout<<arr[r]<<"and size is"<<cs<<","<<f<<","<<r<<endl;
        }else{
            return;
        }
    }
    bool empty(){
        return cs == 0;
    }
    void pop(){
        if(!empty()){
            f = (f+1)%ms;
            cs--;
        }else{
            return;
        }
    }
    T front(){
        return arr[f];
    }
    ~Queue(){
        if(arr != NULL){
            delete[] arr;
            arr = NULL;
        }
    }
};

int main(){
    Queue<int> q(5);
    for(int i = 1; i<=6; i++){
        q.push(i);
    }
    cout<<"alreadypushed"<<endl;
    q.pop();
    q.pop();
    q.push(7);
    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }
    return 0;
}
