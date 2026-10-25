#include<bits/stdc++.h>
using namespace std;
long long n;
long long a[100005];
long long dp[100005]; 
long long ma=1;
void jh(long long l,long long r,long long z){
	while(l<=r){
		long long mid=(l+r)/2;
		if(z<=dp[mid]){
			r=mid-1;
		}else{
			l=mid+1;
		}
	}
	dp[l]=z;
}
int main(){
	scanf("%lld",&n);
	for(long long i=1;i<=n;i++){
		scanf("%lld",&a[i]);
	}
	dp[1]=a[1];
	for(long long i=2;i<=n;i++){
		if(dp[ma]<a[i]){
			ma++;
			dp[ma]=a[i];
		}else{
			jh(1,ma,a[i]);
		}
	}
	printf("%lld",ma);
	return 0;
}



