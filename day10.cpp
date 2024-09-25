#include<bits/stdc++.h>
using namespace std;


class DNode{
    public:
    int val;
    node* next;
    node* prev;

};
class node{
    public:
    int val;
    node* next;

    node(){
        val=0;
        next=NULL;
    }

    node(int data){
        val=data;
        next=NULL;
    }
};

node* insertAtBegin(int key , node* head){ //O(1)
    node * p=new node(key); 
    p->next=head; 
    head=p; 

    return head;
}

node* insertAtEnd(int key,node* head){ //O(n)
    node* p=head;
    node* q=new node(key);
    if(p==NULL){ // LL is empty
      head=q;
      return head;
    }
    while(p->next!=NULL){
        p=p->next;
    }
    p->next=q;

    return head;

}

node* insert(int el,int key,node* head){ //O(n)
    node* q=new node(key);
    node* p=head;
    while(p!=NULL && p->val!=el ){ 
        p=p->next;
    }
    if(p==NULL){
        //element el not in LL
        cout<<"Element not present"<<endl;
        return head;
    }
    q->next=p->next;
    p->next=q;
    return head;
}

void display(node* head){
    node* p=head;
    while(p){
        cout<<p->val<<" ";
        p=p->next;
    }
    cout<<endl;
}


int main(){

// node n=node();
// n.val=10;
   

node* head=NULL;
head=insertAtEnd(1,head);
head=insertAtEnd(2,head);
head=insertAtEnd(3,head);
head=insertAtBegin(0,head);
head=insertAtBegin(-1,head);


display(head);

head=insert(2,7,head);
head=insert(44,8,head);

display(head);

DNode * head=NULL;
DNode * tail=NULL;

    return 0;
}