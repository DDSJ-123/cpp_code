#include<bits/stdc++.h>
using namespace std;
long long n,k;
struct ll{
	long long a,b;
}a[2000005];
bool cmp(ll q,ll q1){
	return q.a<q1.a;
}
int main(){
	freopen("robot.in","r",stdin);
	freopen("robot.out","w",stdout);
	scanf("%lld%lld",&n,&k);
	for(long long i=1;i<=n;i++){
		scanf("%lld%lld",&a[i].a,&a[i].b);
	} 
	sort(a+1,a+n+1,cmp);
	for(long long i=1;i<=n;i++){
		if(k-a[i].a>=0) k+=a[i].b;
	}
	printf("%lld",k);
	return 0;
}

