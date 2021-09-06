#include <bits/stdc++.h>

using namespace std;

class node{
public:
    int data;
    node* next=NULL;
};

class clist{
public:
    node* head=NULL;
    clist(int a[],int n){
        head=new node;
        head->data=a[0];
        node* p=head;
        for(int i=1;i<n;i++){
            node* q=new node;
            q->data=a[i];
            p->next=q;
            p=p->next;
        }
        p->next=head;
    }
    display(){
        node* p=head;
        cout<<p->data<<' ';
        p=p->next;
        while(p!=head){
            cout<<p->data<<' ';
            p=p->next;
        }
        cout<<endl;
    }
    cdelete(int pos){
        node* p=head;
        node* q=NULL;
        if(pos==0){
            q=head;
            while(p->next!=head){
                p=p->next;
            }
            p->next=q->next;
            head=q->next;
            delete q;
        }
        else{
            for(int i=0;i<pos;i++){
                q=p;
                p=p->next;
            }
            q->next=p->next;
            delete p;
        }
    }
};

int main(){
    int arr[]={1,2,3,4,5};
    clist a(arr,5);
    a.display();
}
