#include<bits/stdc++.h>
using namespace std;
long long k,p,e,mi=INT_MAX;
int main(){
	freopen("dice.in","r",stdin);
	freopen("dice.out","w",stdout);
	scanf("%lld%lld%lld",&k,&p,&e);
	for(long long i=0;pow(p,i)<=e;i++){
		if((e-(long long)(pow(p,i)))%k==0) mi=min(mi,i+(e-(long long)(pow(p,i)))/k);
	}
	printf("%lld",mi);
	return 0;
}


