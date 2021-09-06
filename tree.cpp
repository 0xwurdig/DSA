// tree
#include <bits/stdc++.h>

using namespace std;

class node{
public:
    node* lchild;
    int data;
    node* rchild;
};
class qnode{
public:
    node* data;
    qnode* next;
};
class tqueue{
public:
    qnode* front=NULL;
    qnode* rear=NULL;
    enqueue(node* data){
        qnode* q=new qnode;
        q->data=data;
        q->next=NULL;
        if(front==NULL){
            front=q;
            rear=q;
        }
        else{
            rear->next=q;
            rear=rear->next;
        }
    }
    node* dequeue(){
        if(front!=NULL){
            qnode* t=front;
            front=front->next;
            return t->data;
        }
        else return NULL;
    }
};
class tree{
private:
    tqueue Q;
public:
    node* root=NULL;
    void create(){
        int input;
        cout<<"enter the value of root node: ";
        root=new node;
        cin>>root->data;
        Q.enqueue(root);
        while(1){
            node* t=Q.dequeue();
            if(t==NULL) break;
            cout<<"enter the left child of "<<t->data<<": ";
            int temp;
            cin>>temp;
            if(temp!=-1){
                node* p=new node;
                p->data=temp;
                p->lchild=NULL;
                p->rchild=NULL;
                t->lchild=p;
                Q.enqueue(p);
            }
            cout<<"enter the right child of "<<t->data<<": ";
            cin>>temp;
            if(temp!=-1){
                node* p=new node;
                p->data=temp;
                p->lchild=NULL;
                p->rchild=NULL;
                t->rchild=p;
                Q.enqueue(p);
            }
        }
    }
    void preorder(node* t){
        if(t!=NULL){
            cout<<t->data<<' ';
            preorder(t->lchild);
            preorder(t->rchild);
        }
    }
    void inorder(node* t){
        if(t!=NULL){
            inorder(t->lchild);
            cout<<t->data<<' ';
            inorder(t->rchild);
        }
    }
};

int main(){
    tree a;
    a.create();
    a.inorder(a.root);
    cout<<endl;
}
