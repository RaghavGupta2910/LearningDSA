#include<iostream>
using namespace std;

class node{
public:
    int data;
    node*next;
    node(int d){
        data = d;
        next = NULL;
    }
};

//LinkedList class(oops)



//Linked function(procedural)
void insertAtBeg(node*&head, int a){
    if(head == NULL){
        head = new node(a);
        return;
    }
    node *n = new node(a);
    n->next = head;
    head = n;
}
void print(node*n){
    while(n != NULL){
        cout<<n ->data<<" ";
        n= n->next;
    }
    cout<<endl;
}
int length(node*head){
    int cnt = 0;
    while(head != NULL){
        cnt++;
        head = head ->next;
    }
    return cnt;
}
void insertAtTail(node*&head, int data){
    if(head == NULL){
        head = new node(data);
    }
    node*tail = head;
    while(tail->next != NULL){
        tail = tail->next;
    }
    tail->next = new node(data);
}
void insertmiddle(node*&head, int p, int data){
    if(head == NULL or p == 0){
        insertAtBeg(head,data);
    }
    else if(p > length(head)){
        insertAtTail(head, data);
    }
    else{
        int jump = 1;
        node* temp = head;
        while( jump<=p-1){
            temp = temp ->next;
            jump++;
        }
        node* n = new node(data);
        n ->next = temp ->next;
        temp->next = n;
    }
}
//deletion
void deletehead(node*&head){
    if(head == NULL){
        return;
    }
    node*temp = head->next;
    delete head;
    head = temp;
}
void deletetail(node*&head){
    if(head == NULL){
        return;
    }
    node*temp = head;
    while(temp ->next->next != NULL){
        temp = temp->next;
    }
    temp -> next = NULL;
}
void deletemiddle(node*&head, int p){
    if(head == NULL or p == 0){
        deletehead(head);
    }
    else if(p > length(head)){
        deletetail(head);
    }
    else{
        int jump = 1;
        node*temp = head;
        while(jump <= p-1){
            temp = temp->next;
            jump++;
        }
        temp->next = temp->next->next;
    }
}
int main(){
    node*head = NULL;
    insertAtBeg(head, 3);
    insertAtBeg(head, 2);
    insertAtBeg(head, 1);
    insertAtBeg(head, 0);
    insertmiddle(head, 2, 23);
    insertAtTail(head, 49);
    deletehead(head);
    deletetail(head);
    deletemiddle(head,2);
    print(head);
}