#include<iostream>
#include "hashtable_sc.h"
using namespace std;

int main(){
    Hashtable<int> price_menu;

    price_menu.insert("Pizza", 100);
    price_menu.insert("Pepsi", 20);
    price_menu.insert("Burger", 150);
    price_menu.insert("Noodle", 25);
    price_menu.insert("Coke", 40);

    price_menu.print();

    int*price = price_menu.search("Noodle");
    if(price != NULL){
        cout<<"Price is: "<<*price<<endl;
    }else{
        cout<<"Item not found!"<<endl;
    }

    price_menu["Dosa"] = 60;
    price_menu["Dosa"] += 10;
    cout<<"Price of Dosa: "<< price_menu["Dosa"]<<endl;
}
