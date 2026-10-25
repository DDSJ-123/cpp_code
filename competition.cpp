#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[105];
string sr;
long long sum;
int main(){
	freopen("competition.in","r",stdin);
	freopen("competition.out","w",stdout);	
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		cin>>sr;
		for(int j=0;j<m;j++){	
			a[j+1]+=int(sr[j]-'0');
		}
	}
	for(int i=1;i<=m;i++){
		sum+=((m-a[i])*a[i]);
	}
	printf("%lld",sum);
	return 0;
}
 

