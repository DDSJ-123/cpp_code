#include<bits/stdc++.h>
using namespace std;
long long n,a[10000005],ma=INT_MIN,mi=INT_MAX,x;
int main(){
	freopen("joke.in","r",stdin);
	freopen("joke.out","w",stdout);
	scanf("%lld",&n);
	for(long long i=1;i<=n;i++){
		scanf("%lld",&a[i]);
		ma=max(ma,a[i]);
		mi=min(mi,a[i]);
	}
	scanf("%lld",&x);
	if(x<mi){
		printf("%lld",x);
		return 0;
	}
	for(int i=1;i<=100000000;i++){
		if(x*1.0/i<mi){
			printf("%lld",i);
			return 0;
		}
	}
	return 0;
}

