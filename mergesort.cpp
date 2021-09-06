#include <bits/stdc++.h>

using namespace std;

void mergesort(int arr[],int l, int h){
    if((h-l)<=1) return;
    int mid=(l+h)/2;
    mergesort(arr,l,mid);
    mergesort(arr,mid,h);
    int temp[h-l];
    int it=0;
    int sl=l,sr=mid;
    while(sl!=mid && sr!=h){
        if(arr[sl]>=arr[sr]){
            temp[it++]=arr[sr++];
        }
        else temp[it++]=arr[sl++];
    }
    while(sl!=mid) temp[it++]=arr[sl++];
    while(sr!=h) temp[it++]=arr[sr++];
    for(int i=l;i<h;i++) arr[i]=temp[i-l];
}

int main(){
    int arr[]={100,12,14,41,412,3,12,0};
    mergesort(arr,0,8);
    for(int i=0;i<8;i++){
        cout<<arr[i]<<' ';
    }
}
