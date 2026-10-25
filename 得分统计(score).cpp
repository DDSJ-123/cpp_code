#include<bits/stdc++.h>
using namespace std;
const int N=2*1e5+5;
long long n,t;
long long a[N],aw,b;
map<long long,long long> m;
int main(){
	/*
	freopen("score.in","r",stdin);
	freopen("score.out","w",stdout);
	*/
	scanf("%lld%lld",&n,&t);
	m[0]=n;
	while(t--){
		scanf("%lld%lld",&aw,&b);
		if(m.count(a[aw]))m[a[aw]]--;
		if(m[a[aw]]==0) m.erase(a[aw]);
		a[aw]+=b;
		m[a[aw]]++;
		printf("%lld\n",m.size());
	}	
	return 0;
}


