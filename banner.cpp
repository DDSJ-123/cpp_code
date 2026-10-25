#include<bits/stdc++.h>
using namespace std;

const int N = 505;
int n,k;
int a[N],b[N];
int ans;

int main(){
	
	freopen("banner.in","r",stdin);
	freopen("banner.out","w",stdout);
	
	cin>>n>>k;
	for(int i=1;i<=k;i++){
		cin>>b[i];
	}
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		if(a[i]!=a[i+1]);
		ans+=b[a[i]];
	}
	cout<<ans;
	return 0;
}



