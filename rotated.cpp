#include <bits/stdc++.h>
using namespace std;

int main() {
	//code

	    string st1="amazon",st2="azonam",st3;
	    cin>>st1;
	    cin>>st2;
	    st3=st1;
	    int k=0,m=0;
	    while(k!=2){
	        char c=st1[0];
	        st1.erase(0,1);
	        st1.push_back(c);
	        k++;
	    }
	     while(m!=2){
	         int len=st3.length();
	        char c=st3[len-1];
	        st3.erase(len-1);
	        st3=c+st3;
	        m++;
	    }
	   // cout<<st1<<"\n"<<st2;
	    if(st1==st2 || st3==st2){
	        cout<<1<<"\n";
	    }else{
	        cout<<0<<"\n";
	    }
	    
	return 0;
}
