#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node* prev;

    node(int val){
        data=val;
        next=NULL;
        prev=NULL;
    }
};

void insertatHead(node* &head, int val){
    node* n= new node(val);
    n->next=head;
    if(head!=NULL){
        head->prev=n;
    }
    head=n;
}
void insertstTail(node* &head, int val){
   
    if(head==NULL){
        insertatHead(head,val);
        return;
    }
    node* n= new node(val);
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
    n->prev=temp;

}

void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;

}

int main(){

     node* head=NULL;
    insertstTail(head,1);
    insertstTail(head,2);
    insertstTail(head,3);
    insertstTail(head,4);
    insertstTail(head,5);
    insertstTail(head,6);
    display(head);
    insertatHead(head,7);
    display(head);


    return 0;
}