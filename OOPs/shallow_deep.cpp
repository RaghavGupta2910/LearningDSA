#include<iostream>
using namespace std;

class Car{

private:
    float price;

public:
    int model;
    char *name; // dynamic memory allocation

    Car(){
        name = NULL;
    }
    Car(float p, int m, char *n){
        price = p;
        model = m;
        name = new char[strlen(n)+1];
        strcpy(name, n);
    }
    
    Car(Car &x){
        price = x.price;
        model = x.model;
        name = new char[strlen(x.name)+1]; // deep copy
        strcpy(name, x.name);
    }

    void operator=(Car &x){
        price = x.price;
        model = x.model;
        name = new char[strlen(x.name)+1]; // deep copy
        strcpy(name, x.name);
    }

    void set_price(float p){
        float msp = 111;
        if(p<msp){
            price = msp;
        }else{
            price = p;
        }
    }

    void print(){
        cout<<"Price: "<<price<<endl;
        cout<<"Model No: "<<model<<endl;
        cout<<"Name: "<<name<<endl;
    }
};

int main(){
    Car c1(222,111,"BMW");
    // Car d(c1); // shallow copy
    Car d = c1;
    d.set_price(100);
    // d.name[0] = "A"; // This will cause a problem as it will change the name in c1 as well
    // because d.name and c1.name point to the same memory location
    d.print();
    c1.print();
}