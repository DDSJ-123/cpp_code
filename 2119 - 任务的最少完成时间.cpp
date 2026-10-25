#include<bits/stdc++.h>
using namespace std;
const int N=1e6+5;
long long n,k,z=INT_MIN;
long long a[N],b[N]; 
int main(){
	scanf("%lld%lld",&n,&k);
	for(int i=1;i<=n;i++){
		scanf("%lld",&a[i]);
		b[i]=b[i-1]+a[i];
	} 
	for(int i=1;i<=n-k+1;i++){
		z=max(z,b[i+k-1]-b[i-1]);
	}
	printf("%lld",b[n]-z);
	return 0;
}


