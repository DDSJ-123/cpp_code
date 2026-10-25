#include<bits/stdc++.h>
using namespace std;
long long n,a[1000005],ans=0;
long long calc(int x, int y){
	long long sum=0;
	string x1=to_string(x),y1=to_string(y);
	long long mi=max(x1.size(),y1.size());
	reverse(x1.begin(),x1.end());
	reverse(y1.begin(),y1.end());
	long jw=0;
	for(long long i=0;i<mi;i++){
		if(x1[i]<'0' || x1[i]>'9') x1[i]='0';
		if(y1[i]<'0' || y1[i]>'9') y1[i]='0';
		if(int(x1[i]-'0')+int(y1[i]-'0')+jw>9){
			jw=(int(x1[i]-'0')+int(y1[i]-'0')+jw)/10;
			sum++;
		}else{
			jw=0;
		}
	}
	return sum;
}
int main(){
	freopen("add.in","r",stdin);
	freopen("add.out","w",stdout);
	scanf("%lld",&n);
	for(long long i=1;i<=n;i++){
		scanf("%lld",&a[i]);
	}
	for(long long i=1;i<=n;i++){
		for(long long j=i+1;j<=n;j++){
				ans+=calc(a[i],a[j]);
		}
	}
	printf("%lld",ans);
	return 0;
}

