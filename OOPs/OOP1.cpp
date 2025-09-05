#include<iostream>
using namespace std;
/*
1. Constructor:
    - responsible for creating an object.
    - gets called automatically and only once
    - has name same as class name
    - parameterized constructor and overloading constructor

2. Copy Constructor
    - make a copy of the given object
    - exists by default
    - When you need define your own copy constructor
    -shallow copy
    - can also make a deep copy if needed

3. Copy assignment operator = 
    - Copies when you do assignment
    - car d = c :Copy Constructor
    - car d;    : Copy assignment 
      d = c;
    - can write your own copy assignment operator

4. Destructor
    - clear out the memory occcupied by the object
    - automatically when object goes off scope
    - has name same as class name but with a ~ in front
*/

class Car{

private:
    float price;

public:
    int model_no;
    char name[20];

    //Constructor
    Car(){
        cout<<"Inside a constructor"<<endl;
    }
    //Parameterized Constructor
    Car(float p, int m, char *n){
        price = p;
        model_no = m;
        strcpy(name, n);
    }
    Car(float p){
        price = p;
    }
    //Copy Constructor
    Car(Car &x){
        cout<<"Copy Constructor"<<endl;
        price = x.price;
        model_no = x.model_no;
        strcpy(name, x.name);
    }

    void print(){
        cout<<"Price: "<<price<<endl;
        cout<<"Model No: "<<model_no<<endl;
        cout<<"Name: "<<name<<endl;
    }

    float get_discounted(float x){
        return price*(1.0 - x);
    }

    float apply_discount(float x){
        price = price*(1.0 - x);
        return price;
    }

    //Getter ans Setter
    void set_price(float p){
        float msp = 111;
        if(p<msp){
            price = msp;
        }else{
            price = p;
        }
    }

    float get_price(){
        return price;
    }

    //Destructor
    ~Car(){
        cout<<"Destructor called"<<endl;
        if(name != NULL){
            delete [] name; // if you have allocated memory dynamically
        }
    }
};

int main(){

    //Create an object
    Car c; // make a call to the constructor function present inside the class
    Car d(222,111,"Audi");
    cout<<"Car d"<<endl;
    d.print();

    Car e(d); // Copy Constructor
    // another way is
    Car f = d;

    e.set_price(1000);
    cout<<"Car e"<<endl;
    e.print();

    c.model_no = 100;
    c.name[0] = 'A';
    c.name[1] = 'B';
    c.name[2] = '\0';
}