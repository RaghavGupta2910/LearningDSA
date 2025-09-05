#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;

int main(){
    unordered_map<string, int> m;
    //Insert
    //1.
    m.insert(make_pair("Burger", 100));
    //2.
    pair<string, int> p;
    p.first = "Pizza";
    p.second = 200;
    m.insert(p);

    //3.
    m["Pepsi"] = 40;
    m["Dosa"] = 30;
    m["kadhi chawal"] = 50;
    m["Noodles"] = 60;

    //Search
    unordered_map<string, int>::iterator it = m.find("Dosa");
    if( it != m.end()){
        cout<<"Price of the item is: "<<m["Dosa"]<<endl;
    }else{
        cout<<"Item not found"<<endl;
    }

    //print
    for(unordered_map<string,int>::iterator it = m.begin(); it != m.end(); it++){
        cout<<it->first<<": "<<it->second<<endl;
    }

}