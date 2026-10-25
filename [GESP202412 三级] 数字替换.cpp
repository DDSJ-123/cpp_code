#include<bits/stdc++.h>
using namespace std;
long long n,k;
long long a[1000000];
long long maxsz=INT_MIN,minsz=INT_MAX;
int main(){
	scanf("%lld%lld",&n,&k);
	for(int i=1;i<=n;i++){
		scanf("%lld",&a[i]);
		maxsz=max(maxsz,a[i]);
		minsz=min(minsz,a[i]);
	}
	for(int i=1;i<=n;i++){
		if(a[i]<k){
			cout<<minsz<<" ";
		}else if(a[i]>k){
			cout<<maxsz<<" ";
		}else{
			cout<<k<<" ";
		}
	}
	return 0;
}

