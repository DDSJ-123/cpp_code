#include<bits/stdc++.h>
using namespace std;
long long n,a[31],ans;
int main(){
	freopen("book.in","r",stdin);
	freopen("book.out","w",stdout);
	scanf("%lld",&n);
	for(int i=1;i<=30;i++){
		scanf("%lld",&a[i]);
		if(a[i]%n==0){
			ans=ans+a[i]/n;
		}else{
			ans=ans+a[i]/n+1;
		}
	}
	if(ans%2==0) printf("%lld",ans/2);
	else printf("%lld",ans/2+1);
	return 0;
}

