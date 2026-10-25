#include<bits/stdc++.h>
using namespace std;
const int N=1e6+10;
long long s[N],ans=0;
map<int,int> mp;
int n,k,x; 
int main(){
    scanf("%d%d",&n,&k);
	for(int i=1;i<=n;i++){
		scanf("%d",&x);
		s[i]=s[i-1]+x;
	} 
	for(int i=0;i<=n;i++) mp[s[i]%k]++;
	for(auto p:mp){
		x=p.second;
		ans+=(long long)(x-1)*x/2;
	}
	printf("%lld",ans);
	return 0;
}

