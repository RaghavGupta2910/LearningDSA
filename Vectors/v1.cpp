#include<iostream>
#include<vector>
using namespace std;

int main(){
    // Initializing vectors in different ways
    vector<int> v1;
    vector<int> v2(5, 10); // 5 elements, each initialized to 10
    vector<int> v3(v2.begin(), v2.end());
    vector<int> v4;
    v4.push_back(1);
    v4.push_back(2);
    v4.push_back(5);
    v4.push_back(3);

    //how to iterate over it
    for(int i = 0; i<v4.size(); i++){
        cout<<v4[i]<<" ";
    }
    cout<<endl;
    for(vector<int>::iterator it = v4.begin(); it!=v4.end(); it++){
        cout<<(*it)<<" ";
    }
    cout<<endl;
    //for each loop
    for(int x:v4){
        cout<<x<<" ";
    }

    //function
    //take input
    vector<int> a;
    int n;
    cin >> n;
    for(int i = 0; i<n; i++){
        int no;
        cin>>no;
        a.push_back(no);
    }
    for(int x:a){
        cout<<x<<" ";
    }
}