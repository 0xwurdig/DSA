//queue
#include <bits/stdc++.h>

using namespace std;

class node{
public:
    int data;
    node* next;
};

class myqueue{
public:
    int qfront=-1;
    int rear=-1;
    int qsize=0;
    int *Q=NULL;
    enqueue(int data){
        if(rear!=qsize-1){
            Q[++rear]=data;
        }
        else cout<<"the queue is full";
    }

    create(int A[],int n){
        qsize=n;
        Q=A;
    }
    display(){
        for(int i=qfront+1;i<=rear;i++){
            cout<<Q[i]<<" ";
        }
    }
    dequeue(){
        qfront++;
    }
};

class cqueue{
private:
    int front=0;
    int rear=0;
    int size=0;
    int *Q=NULL;
public:
    cqueue(int qsize){
        size=qsize;
        Q=new int[qsize];
    }
    cqueue(int A[],int qsize){
        size=qsize;
        Q=A;
        rear=qsize-1;
    }
    enqueue(int data){
        if(front!=(rear+1)%size){
            rear=(rear+1)%size;
            Q[rear]=data;
        }
        else cout<<"sorry! the queue is full :)";
    }
    int dequeue(){
        int x=-1;
        if(front==rear) {
            cout<<"the queue is empty! fill something in it!";
            return x;
        }
        else{
            front=(front+1)%size;
            x=Q[front];
            return x;
        }
    }
    display(){
        int i=front%size;
        while(i!=rear%size){
            i=(i+1)%size;
            cout<<Q[i];
        }
    }
};

class lqueue{
public:
    node* front=NULL;
    node *rear=NULL;
    enqueue(int data){
        if(front==NULL){
            node* q=new node;
            q->data=data;
            front=rear=q;
            q->next=NULL;
        }
        else{
            node* q=new node;
            q->data=data;
            q->next=NULL;
            rear->next=q;
            rear=rear->next;
        }
    }
    dequeue(){
        if(front==rear ||front==NULL){
            front=NULL;
            rear=NULL;
            cout<<"the list is empty!"<<endl;
        }
        else{
            node* t=front;
            front=front->next;
            delete t;
        }
    }
    display(){
        node* p=front;
    }
};


int main(){
    lqueue aa;
    aa.enqueue(12);
    aa.enqueue(123);
    aa.enqueue(1324);
    aa.dequeue();
    aa.dequeue();
    aa.dequeue();
    aa.dequeue();
}
