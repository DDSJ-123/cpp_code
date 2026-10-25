#include<bits/stdc++.h>
using namespace std;
struct pp{
	int t,p;
}a[200005];
int n,mi=INT_MAX;
int s[200005];
bool bj[200005];

void js(){
	int t=0;
	int ans=0;
	for(int i=1;i<=n;i++){
		t+=a[s[i]].t;
		//cout<<s[i]<<":"<<a[s[i]].t<<" "<<t*a[s[i]].p<<" \n";
		ans+=(t*a[s[i]].p);
	}
	mi=min(mi,ans);
	//cout<<ans<<"\n\n";
}

void dfs(int w){
	for(int i=1;i<=n;i++){
		if(!bj[i]){
			s[w]=i;
			if(w==n){
				js();
				return ;
			}
			bj[i]=true;
			dfs(w+1);
			bj[i]=false;
		}
	}
}

int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].t>>a[i].p;
	}
	dfs(1);
	cout<<mi;
	return 0;
}



