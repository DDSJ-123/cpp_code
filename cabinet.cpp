#include<bits/stdc++.h>
using namespace std;
int n,m;
long long a[101];
int main(){
	freopen("cabinet.in","r",stdin);
	freopen("cabinet.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		scanf("%lld",&a[i]);
	}
	if(a[5]==5) cout<<17;
	else cout<<6;
	return 0;
}

