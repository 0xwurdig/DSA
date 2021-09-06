//bubble sort
//insertion sort

#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>

using namespace std;

void insertionsort(vector <int>& a){
    int sz=a.size();
    for(int i=1;i<sz-1;i++){
        int temp=a[i];
        for(int j=i-1;j>=0;j--){
            if(temp<a[j]){
                a[j+1]=a[j];
                if(j==0){
                    a[j]=temp;
                }
            }
            else {
                a[j+1]=temp;
                break;
            }
        }
    }
}


main(){
    vector <int> a{5,321,34,14,4,112,13,444};
    insertionsort(a);
    for(auto it:a) cout<<it<<" ";
}
