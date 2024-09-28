#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;

    Node* left;
    Node* right;
    
    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }

};

void insertLeftChild(Node* parent,int val){
    if(parent->left){
        cout<<"Overriding initial data"<<endl;
        parent->left->data=val;
        return;
    }
    else{
      Node* child =new Node(val);
      parent->left=child;
      return;
    }
}
void insertRightChild(Node* parent,int val){
    if(parent->right){
        cout<<"Overriding initial data"<<endl;
        parent->right->data=val;
        return;
    }
    else{
      Node* child =new Node(val);
      parent->right=child;
      return;
    }
}


int main(){
     Node* root=new Node(10);    
     insertLeftChild(root,5);
     insertRightChild(root,15);

    return 0;
}