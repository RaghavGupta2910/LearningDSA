#include<iostream>
using namespace std;

class node{
public:
    int data;
    node* next;
    node* prev;
    node(){

    }
    node(int d){
        data = d;
        next = NULL;
        prev = NULL;
    }

};
//length
int length(node*head){
    int cnt = 0;
    while(head != NULL){
        cnt++;
        head = head ->next;
    }
    return cnt;
}
//Insertion
//atbeg
void insertatbeg(node*&head, int a){
    if(head == NULL){
        head = new node(a);
        return;
    }
    node* n = new node(a);
    n->next = head;
    head->prev = n;
    head = n;
}
//atend
void insertatend(node*&head, int a){
    if(head == NULL){
        head = new node(a);
        return;
    }
    node* n = new node(a);
    node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = n;
    n->prev = temp;
    n->next = NULL;
}
//inmiddle

void insertmiddle(node*&head, int a, int p){
    if(head == NULL or p == 0){
        insertatbeg(head,a);
        return;
    }
    if(p > length(head)){
        insertatend(head,a);
        return;
    }
    node* n = new node(a);
    node* temp = head;
    int jump = 1;
    while(jump < p){
        temp = temp->next;
        jump++;
    }
    n->next = temp->next;
    if(temp->next != NULL){
        temp->next->prev = n;
    }
    temp -> next = n;
    n->prev = temp;
}
//print
ostream& operator<<(ostream& os, node* head){
    node* temp = head;
    while(temp != NULL){
        os<<temp->data<<"->";
        temp = temp->next;
    }
    return os;
}
int main(){
    node* head = NULL;
    insertatbeg(head, 10);
    insertatbeg(head, 20);
    insertatend(head, 30);
    insertmiddle(head, 25, 2);
    cout << head << endl;
}