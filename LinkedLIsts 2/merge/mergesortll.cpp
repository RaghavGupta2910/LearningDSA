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
        cout<<n->data<<" ";
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
        return;
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
// input
node* takeinp(){
    int d;
    cin >> d;
    node* head = NULL;

    while(d != -1){
        insertAtTail(head, d);
        cin >> d;
    }

    return head;
}
//operator overloading
ostream& operator<<(ostream& os, node* head){
    print(head);
    return os;
}
istream& operator>>(istream& is, node*&head){
    head = takeinp();
    return is;
}
//midpoint
node*midpoint(node* &head){
    if(head == NULL || head->next == NULL){
        return head;
    }
    node*slow = head;
    node*fast = head->next;
    while(fast != NULL and fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}
//merging into a sorted linked list
node* merge(node*a, node*b){
    if(a == NULL){
        return b;
    }
    if(b == NULL){
        return a;
    }
    node* c;
    if(a->data < b->data){
        c = a;
        c -> next = merge(a->next, b);
    }else{
        c = b;
        c->next = merge(a, b->next);
    }
    return c;
}
//Merge Sort
node* mergesort(node*& head){
    if(head == NULL or head->next == NULL){
        return head;
    }

    node* mid = midpoint(head);
    node* a = head;
    node* b = mid->next;
    mid->next = NULL;

    //rec sort the two halves
    a = mergesort(a);
    b = mergesort(b);

    //merging
    node* c = merge(a,b);
    return c;

}

int main(){
    node*head;
    cin>>head;
    cout<<head;

    head = mergesort(head);
    cout<<head;
}