#include <bits/stdc++.h>

using namespace std;

class heap{
public:
    int* root;
    int hsize=0;
    hinsert(int value){
        int* p=root;
        p[hsize]=value;
        int t=hsize+1;
        hsize++;
        while(value>p[t/2-1] && t!=1){
            p[t-1]=p[t/2-1];
            t/=2;
        }
        p[t-1]=value;
    }
    heap(int A[],int t,int n){
        int* groot=new int[n];
        for(int i=0;i<t;i++) groot[i]=A[i];
        root=groot;
        hsize=1;
        for(int i=1;i<t;i++){
            hinsert(A[i]);
            //cout<<"root="<<root[i]<<endl;
        }
    }
    int hdelete(){

    }
    hsort(){

    }
};

int main(){
    int A[]={6,10,23,100,20,3,1,102};
    heap a(A,8,10);
    a.hinsert(40);
    int* b=a.root;
    for(int i=0;i<9;i++){
        cout<<b[i]<<' ';
    }
}
