#include<bits/stdc++.h>
using namespace std;
int n,s,ans; 
int c1[1000005];
int c2[1000005];
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
    	cin>>s;
    	if(s==1){
    		c1[i]=c1[i-1]+1;
    		c2[i]=c2[i-1];
		}else{
			c1[i]=c1[i-1];
    		c2[i]=c2[i-1]+1;
		}
	}
	ans=INT_MAX;
	for(int i=0;i<=n;i++){
		ans=min(ans,c2[i]-c2[0]+c1[n]-c1[i]);
	}
	cout<<ans;
	return 0;
}

