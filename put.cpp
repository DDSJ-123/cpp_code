#include<bits/stdc++.h>
using namespace std;
long long n,m,s,ma=INT_MIN,mi=INT_MAX,mas=INT_MIN,sum;
long long a[1000005];
int main(){
	freopen("put.in","r",stdin);
	freopen("put.out","w",stdout);
	scanf("%lld%lld",&n,&m);
	for(long long i=1;i<=n;i++){
		cin>>s;
		a[s]++;	
		mi=min(a[s],mi);
		ma=max(a[s],ma);
		mas=max(s,mas);
	}
	if(ma-mi<=m){
		cout<<0;
		return 0;
	}
	for(long long i=1;i<=mas;i++){
		if(a[i]-mi<=m) sum+=ma-a[i]-m;
	}
	cout<<sum;
	return 0;
}

