#include<bits/stdc++.h>
using namespace std;

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

void delete_ll(int key,node* head){
if(head==NULL){ //case 1 , ll is empty
cout<<"Empty list"<<endl;
return ;
}

node* curr=head;
node* prev=NULL;

while( curr!=NULL && curr->val!=key){
    prev=curr;
    curr=curr->next;
}

if(curr==NULL){ // key not found 
cout<<"Element not found"<<endl;
return;
}
if(curr==head){ // 1 el in ll or , element found at first position 
head=head->next;
return;
}
else{
    prev->next=curr->next;
}
delete curr;
}

node* delTail(node* head){
    if(head==NULL) return head;
    node* prev=NULL;
    node* curr=head;
    while(curr->next!=NULL){
        prev=curr;
        curr=curr->next;
    }
    if(curr==head){
        head=NULL;
    }
    else{
        prev->next=NULL;
    }
    delete curr;

    return head;
}

node* delHead(node* head){
    if(head==NULL) return head;
    node* p=head;
    head=head->next;
    cout<<"Deleted"<<endl;
    delete p;

    return head;
}


int main(){

node* head=NULL;

head=insertAtBegin(30,head);
head=insertAtBegin(31,head);
head=insertAtBegin(32,head);


display(head);
head=delHead(head);
display(head);
    return 0;
}