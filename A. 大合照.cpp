#include<bits/stdc++.h>
using namespace std;
struct pp{
	long long x,id;
}a[50005];
long long n,ans=INT_MAX,cnt;
long long l,r,c;
map<long long,long long> m;
bool cmp(pp a,pp b){
	return a.x<b.x;
}
int main(){
	cin>>n;
	for(long long i=1;i<=n;i++){
		scanf("%lld%lld",&a[i].x,&a[i].id); 
		m[a[i].id]++;
	}
	cnt=m.size();
	sort(a+1,a+n+1,cmp);
	m.clear();
	l=1,r=0;
	while(l<=n && r<=n){
		while(c<cnt && r<n){
			r++;
			if(m[a[r].id]==0) c++;
			m[a[r].id]++;
		}
		if(c==cnt) ans=min(ans,a[r].x-a[l].x);
		else break;
		m[a[l].id]--;
		if(m[a[l].id]==0) c--;
		l++;
	}
	printf("%lld",ans);
	return 0;
}

