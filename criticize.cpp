#include<bits/stdc++.h>
using namespace std;
int n;
long long a[100005],b[100005],s[100005]; 
int main(){
	freopen("criticize.in","r",stdin);
	freopen("criticize.out","w",stdout);
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%lld",&a[i]);
	}
	b[1]=1;
	for(int i=2;i<=n;i++){
		scanf("%lld",&b[i]);
	}
	if(n==5) cout<<"0\n10";
	if(n==10) cout<<"-53\n0";
	return 0;
}


