#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>
using namespace std;

class Car{
    public:
    string car_name;
    int x,y;
    Car(){

    }
    Car(string n, int x, int y){
        this->car_name = n;
        this->x = x;
        this->y = y;
    }
    int dist(){
        return x*x + y*y;
    }
};

bool compare(Car A, Car B){
    if(A.dist() == B.dist()){
        return A.car_name.length() < B.car_name.length(); // If distances are equal, sort by name
    }
    return A.dist() < B.dist(); // Sort by distance
}

int main(){
    /*
    // First method
    int n;
    cin>>n;
    
    vector<pair<int,int> > v;
    for(int i = 0; i<n; i++){
        int x,y;
        cin>>x>>y;
        v.push_back(make_pair(x,y));
    }
    
    sort(v.begin(), v.end(), compare);
    for(auto x:v){
        cout<<"Car: "<<x.first<<", "<<x.second<<endl;
    }
    */
    int n;
    cin>>n;

    vector<Car> v;
    for(int i = 0; i<n; i++){
        string name;
        int x,y;
        cin>>name>>x>>y;
        Car temp(name, x, y);
        v.push_back(temp);
    }
    sort(v.begin(), v.end(), compare);

    for(auto c:v){
        cout<<"Car "<<c.car_name<<" at a dist of "<<c.dist()<<" : "<< c.x<<","<< c.y<<endl;
    }
    return 0;
}