#include <bits/stdc++.h>

using namespace std;

int main(){
    priority_queue<int,vector<int>,greater<int>> q;
    int A[]={1,2,3,41,3,4,13,4,513,-1};
    for(int i=0;A[i]!=-1;i++){
        q.push(A[i]);
    }
    while(!q.empty()){
        cout<<q.top()<<' ';
        q.pop();
    }
}
