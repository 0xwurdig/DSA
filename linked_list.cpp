#include <iostream>
#include <vector>

using namespace std;

class node{
public:
    int data;
    node* next;
};
class linked_list{
public:
    node* first=NULL;
    linked_list(int A[],int n){
        first=new node;
        first->next=NULL;
        first->data=A[0];
        node *p;
        p=first;
        for(int i=1;i<n;i++){
            node* q;
            q=new node;
            p->next=q;
            p=p->next;
            p->data=A[i];
        }
        p->next=NULL;
    }
    void display(node *p){
        while(p){
            cout<<p->data<<" ";
            p=p->next;
        }
    }
    int scount(node* p){
        if(p){
            return scount(p->next)+1;
        }
        else return 0;
    }
    int sum(node *p){
        if(p) return p->data+sum(p->next);
        else return 0;
    }
    int max_ele(node *p){
        if(p){
            int x=max_ele(p->next);
            if(p->data>x) return p->data;
            else return x;
        }
        else return INT_MIN;
    }
    //linear search in linked list, binary search is not possible!
    node* lsearch(int key){
        node* p=first;
        node* q=p;
        while(p){
            if(p->data==key){
                q->next=p->next;
                p->next=first;
                first=p;
            }
            q=p;
            p=p->next;
        }
        return first;
    }
    //inserting in a linked list
    void linsert(int pos, int x){
        node* q=new node;
        node* p=first;
        q->data=x;
        if(pos==0){
            q->next=first;
            first=q;
        }
        else{
            for(int i=0;i<pos-1 && p;i++){
                p=p->next;
            }
            q->next=p->next;
            p->next=q;
        }
    }
    void linserts(int s){
        node* p=first;
        node* q=new node;
        q->data=s;
        if(p->data>s){
            q->next=first->next;
            first=q;
            return;
        }
        while(p->next!=NULL && s>p->next->data){
            p=p->next;
        }
        q->next=p->next;
        p->next=q;
    }
    void ldelete(int pos){
        node* p;
        p=first;
        if(pos==0){
            first=p->next;
            delete p;
        }
        else{
            for(int i=0;i<pos-1;i++){
                p=p->next;
            }
            p->next=p->next->next;
        }
    }
    bool checksorted(node *p){
        static int x=p->data;
        if(p){
            if(p->data>=x){
                x=p->data;
                return checksorted(p->next);
            }
            else return false;
        }
        else return true;
    }
    void removedup(){
        static int x=first->data;
        node *p=first->next;
        node *q=first;
        for(;p;){
            if(p->data!=q->data){
                q=p;
                p=p->next;
            }
            else{
                q->next=p->next;
                delete p;
                p=q->next;
            }
        }
    }
    void lreverse(){
        node* p=first;
        node* q=NULL;
        node* r=NULL;
        while(p){
            r=q;
            q=p;
            p=p->next;
            q->next=r;
        }
        q->next=r;
        first=q;
    }
    void rreverse(node* q,node* p){
        if(p){
            return rreverse(p,p->next);
            p->next=q;
        }
        else first=q;
    }
    bool loopcheck(){
        node* p=first->next;
        node* q=first;
        while(p!=NULL && q!=NULL && p->next!=NULL){
            p=p->next->next;
            q=q->next;
            if(p==q) return true;
        }
        return false;
    }

};

int main(){
    int b[]={1,2,3,4,5};
    linked_list a(b,5);
    a.lreverse();
    a.display(a.first);
}
