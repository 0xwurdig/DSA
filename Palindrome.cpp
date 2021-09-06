#include <bits/stdc++.h>
using namespace std;

int main() {
	//code

	    string s="aaaabbaa";
	    int ml=1;
	    int l, h,st=0;
	    int len=s.length();
	    for(int i=1;i<len;i++){
	        l=i-1;
	        h=i;
	        while(l>=0 && h<len && s[l]==s[h]){
	            if(h-l+1>ml){
	                st=l;
	                ml=h-l+1;
	            }
	            --l;
	            ++h;
	        }
	        l=i-1;
	        h=i+1;
	         while(l>=0 && h<len && s[l]==s[h]){
	            if(h-l+1>ml){
	                st=l;
	                ml=h-l+1;
	            }
	            --l;
	            ++h;
	        }
	        
	    }
	    for( int j=st;j<st+ml;j++){
	        cout<<s[j];
	    }
	    cout<<"\n";

	return 0;
}
