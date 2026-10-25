#include<bits/stdc++.h>
using namespace std;
long long a,b;
int k;
int main(){
	freopen("division.in","r",stdin);
	freopen("division.out","w",stdout);
	scanf("%lld%lld%d",&a,&b,&k);
	printf("%lld",a/b);
	if(k>0) cout<<".";
	for(int i=1;i<=k;i++){
		a=a%b*10;
		printf("%lld",a/b);
	}
	return 0;
}

