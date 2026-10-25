#include<bits/stdc++.h>
using namespace std;
struct l{
	int t,na;
};
queue<l> q;
int cnt[1000005];
long long n,t,x,k;
int main(){
	scanf("%lld",&n);
	l d;
	int ans=0;
	while(n--){
		scanf("%lld%lld",&t,&k);
		while(q.size()!=0 && t-q.front().t>=86400){
			d=q.front();
			q.pop();
			cnt[d.na]--;
			if(cnt[d.na]==0) ans--;
		}
		for(int i=1;i<=k;i++){
			scanf("%lld",&x);
			d.na=x;
			d.t=t;
			q.push(d);
			cnt[d.na]++;
			if(cnt[d.na]==1) ans++;
		}
		printf("%d\n",ans);
	}
	return 0;
}

