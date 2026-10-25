#include<bits/stdc++.h>
using namespace std;
const int N=1000005;
long long n,m;
long long a[N],b[N];
long long sum=0;
bool cmp(long long a,long long b){
	return a>b;
}
int main(){
	freopen("allocation.in","r",stdin);
	freopen("allocation.out","w",stdout);
	b[0]=0;
	scanf("%lld%lld",&n,&m);
	for(long long i=1;i<=n;i++) scanf("%lld",&a[i]);
	for(long long i=1;i<=m;i++) scanf("%lld",&b[i]);
	sort(a+1,a+n+1,cmp);
	int j=m;
	for(long long i=1;i<=n;i++){
		if(j==0) break;
		if(b[a[i]]>=b[j]){
			j--;
			a[i]=0;
		}
	}
	for(long long i=1;i<=n;i++){
		sum+=b[a[i]];
	}
	printf("%lld",sum);
	return 0;
}

