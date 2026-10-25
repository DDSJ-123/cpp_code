#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
long long a[N],A,B,n,ans=1e18;
long long s1[N],s2[N];
int main(){
    scanf("%lld%lld%lld",&n,&A,&B);
    for(int i=1;i<=n;i++){
    	scanf("%lld",&a[i]);
	}
	sort(a+1,a+n+1);
	for(int i=1;i<=n;i++){
		s1[i]=s1[i-1]+(i-1)*(a[i]-a[i-1]);
	}
	for(int i=n;i>=1;i--){
		s2[i]=s2[i+1]+(n-i)*(a[i+1]-a[i]);
	}
	for(int i=1;i<=n;i++){
		ans=min(ans,s1[i]*A+s2[i]*B);
	}
	cout<<ans;
	return 0;
}

