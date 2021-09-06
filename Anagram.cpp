#include <iostream>
using namespace std;

string solve(string s1, string s2){
    	int i;
	    int count[256]={0};
	    for(i=0; s1[i] && s2[i];i++){
	        count[s1[i]]++;
	        count[s2[i]]--;
	    }
	    if(s1[i] || s2[i])
	        return "NO";
	   
	   for(i=0;i<256;i++){
	       if(count[i]!=0){
	           return "NO";
	       }
	   }
	   return "YES";
}
int main() {
	//code

	    string s1="geeksforgeeks";
	    string s2="forgeeksgeeks";
        string s=solve(s1 , s2);
        cout<<s<<"\n";
	
	return 0;
}
