#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> v(n);
	    for(int i=0;i<n;i++){
	        cin>>v[i];
	    }
	    int ms=INT_MIN;
	    int sh=0;
	    for(int i=0;i<n;i++){
	        sh=sh+v[i];
	        ms=max(ms,sh);
	        if(sh<0){
	            sh=0;
	        }
	    }
	    cout<<ms<<"\n";
	}
	return 0;
}
