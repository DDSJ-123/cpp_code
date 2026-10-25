#include<bits/stdc++.h>
using namespace std;
long long n,l1,r1,s;
long long ans;
long long l[2000005],r[2000005];
int main(){
	freopen("pair.in","r",stdin);
	freopen("pair.out","w",stdout);
	scanf("%lld%lld%lld",&n,&l1,&r1);
	for(int i=1;i<=l1;i++){
		scanf("%lld",&s);
		l[s]++;
	}	
	for(int i=1;i<=r1;i++){
		scanf("%lld",&s);
		r[s]++;
	}
	cout<<n;
	return 0;
}

