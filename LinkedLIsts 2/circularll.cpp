#include<iostream>
using namespace std;

class node {
public:
    int data;
    node* next;
    node(int d) {
        data = d;
        next = NULL;
    }
};

void insert(node*& head, int data) {
    node* n = new node(data);
    if (head == NULL) {
        n->next = n;  // Circular link to itself
        head = n;
        return;
    }
    
    // Find the last node
    node* temp = head;
    while (temp->next != head) {
        temp = temp->next;
    }
    
    // Insert new node at beginning
    n->next = head;
    temp->next = n;
    head = n;
}

//deletion
void deleted(node*&head, int data){
    if(head == NULL){ return;}
    node*temp = head;
    while(temp->next != head){
        if(temp->next->data == data){
            break;
        }
        temp = temp->next;
    }
    if(temp->next == head){
        cout << data<<" not found!" << endl;
        return;
    }
    node*temp1 = temp->next;
    temp->next = temp1->next;
    if(temp1 == head){
        head = temp->next;
    }
}
ostream& operator<<(ostream& os, node* head) {
    if (head == NULL) return os;
    node* temp = head;
    do {
        os << temp->data << "->";
        temp = temp->next;
    } while (temp != head);
    return os;
}

int main() {
    node* head = NULL;
    insert(head, 10);
    insert(head, 20);
    insert(head, 30);
    insert(head, 56);
    deleted(head, 40);
    deleted(head, 20);
    cout << head;
}