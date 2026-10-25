#include<bits/stdc++.h>
using namespace std;
int n;
int a[100005],b[100005],c[100005];
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
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++) cin>>b[i];
	for(int i=1;i<=n;i++){
		c[a[i]]=i;
		c[b[i]]=i;
	}
	for(int i=1;i<=n;i++) cout<<c[i]<<" ";
	cout<<"\n";
	dp[1]=a[1];
	for(long long i=2;i<=n;i++){
		if(dp[ma]<c[i]){
			ma++;
			dp[ma]=c[i];
		}else{
			jh(1,ma,c[i]);
		}
	}
	printf("%lld",ma);
	return 0;
}
