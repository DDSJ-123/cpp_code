#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int v[N],a[N];
int n,d,c;
long long t,ans;
int main(){
    scanf("%d%d",&n,&d);
    for(int i=1;i<n;i++){
    	cin>>v[i];
	}
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int mi=a[1];
	for(int i=1;i<n;i++){
		mi=min(mi,a[i]);
		if(t<v[i]){
			if((v[i]-t)%d==0){
				c=(v[i]-t)/d;
			}else{
				c=(v[i]-t)/d+1;
			}
			ans+=c*mi;
			t+=c*d-v[i];
		}
	}
	printf("%lld",ans);
	return 0;
}
