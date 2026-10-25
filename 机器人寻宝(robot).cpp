#include<bits/stdc++.h>
using namespace std;
int n;
long long x[5050],y[5050];
map<pair<long long,long long>,int> m;
long long goc(long long a,long long b){
    if(b==0) return a;
    return goc(b,a%b);
}
int main(){
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%lld%lld",&x[i],&y[i]);
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(i!=j){
				long long xz=x[j]-x[i],yz=y[j]-y[i];
				if(xz==0 && yz==0) continue;
				long long s=goc(abs(xz),abs(yz));
				m[make_pair(xz/s,yz/s)]++;
			} 
		} 
	}
	cout<<m.size();
	return 0;
}


