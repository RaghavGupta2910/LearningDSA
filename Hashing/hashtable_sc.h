#include<iostream>
using namespace std;
// Separate Chaining is done using linked lists

template<typename T>
class Node{
    public:
    string key;
    T value;
    Node<T>* next;

    Node(string key, T val){
        this->key = key;
        this->value = val;
        next = NULL;
    }

    ~Node(){
        if(next != NULL){
            delete next;
        }
    }
};

template<typename T>
class Hashtable{
    Node<T>** table; //pointer to an array of pointers
    int current_size;
    int table_size;

    int Hashfnc(string key){
        int idx = 0;
        int p = 1;
        for(int i = 0; i<key.length();i++){
            idx = idx + (key[i]*p)%table_size;
            idx = idx%table_size;
            p = (p*27)%table_size;
        }
        return idx;
    }

    void rehash(){
        Node<T>** oldTable = table;
        int oldTableSize = table_size;
        table_size *= 2;
        table = new Node<T>*[table_size];
        for(int i = 0; i<table_size; i++){
            table[i] = NULL;
        }
        current_size = 0;
        for(int i = 0; i<oldTableSize; i++){
            Node<T>* temp = oldTable[i];
            while(temp != NULL){
                insert(temp->key, temp->value);
                temp = temp->next;
            }
            if(oldTable[i] != NULL){
                delete oldTable[i];
            }
        }

        delete [] oldTable; // Free the old table memory
    }
    public:
    Hashtable(int ts = 7){
        table_size = ts;
        current_size = 0;
        table = new Node<T>*[table_size];
        for(int i = 0; i<table_size; i++){
            table[i] = NULL;
        }
    }

    void insert(string key, T value){
        int idx = Hashfnc(key);
        Node<T>* n = new Node<T>(key, value);
        //inserting at the head
        n->next = table[idx];
        table[idx] = n;
        current_size++;

        // rehash
        float load_factor = current_size / (1.0*table_size);
        if(load_factor > 0.7){
            rehash();
        }
    }

    void print(){
        for(int i = 0; i<table_size; i++){
            cout<<"Bucket"<<i<<"-> ";
            Node<T>* temp = table[i];
            while(temp != NULL){
                cout<<temp->key<<"-> ";
                temp = temp->next;
            }
            cout<<endl;
        }
    }

    T* search(string key){
        int idx = Hashfnc(key);
        Node<T>* temp = table[idx];
        while(temp != NULL){
            if(temp->key == key){
                return &temp->value;
            }
            temp = temp->next;
        }
        return NULL;
    }

    T& operator[](string key){
        T* f = search(key);
        if(f == NULL){
            T garbage;
            insert(key, garbage);
            f = search(key);
        }
        return *f;
    }
};
