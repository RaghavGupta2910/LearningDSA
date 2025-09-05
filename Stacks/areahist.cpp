#include<iostream>
#include<stack>
#include<vector>
using namespace std;

int area(int a[], int n){
    stack<int> s;
    s.push(0);
    vector<int> area;
    for(int i = 1; i<n; i++){
        if(a[s.top()]< a[i]){
            s.push(i);
        }else{
            while(!s.empty() and a[s.top()] >= a[i]){
                int t = s.top();
                s.pop();
                if(s.empty()){
                    area.push_back(a[t]*(i));
                }else{
                    area.push_back(a[t]*(i-s.top()-1));
                }
            }
            s.push(i);
        }
        if(i == n-1){
            while(!s.empty()){
                int t = s.top();
                s.pop();
                if(s.empty()){
                    area.push_back(a[t]*(n));
                }else{
                    area.push_back(a[t]*(n-1-s.top()));
                }
            }
        }
    }
    int max = 0;
    for(auto x:area){
        if(max<x){
            max = x;
        }
        cout<<x<<"->";
    }
    cout<<endl;
    return max;
}

int main(){
    int a[] = {6, 2, 5, 4, 5, 1, 6};
    int n = sizeof(a)/sizeof(a[0]);
    cout << "Maximum area is: " << area(a, n) << endl;
    return 0;
}