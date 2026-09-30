#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
  // https://www.codechef.com/problems/SEATING7
	int n;
	cin>>n;
	while(n){
	    int x,m,k;
	    cin>>x>>m>>k;
	    int a[m];
	    for(int i=0;i<m;i++){
	        cin>>a[i];
	    }
	    int ans=1;
	    int i=0;
	    while(k){
	        if(i<m&&a[i]==ans){
	            ans++;
	            i++;
	            continue;
	        }
	        
	            cout<<ans<<" ";
	            ans++;
	            k--;
	       
	    }
	    cout<<endl;
	    n--;
	}
	return 0;
}
