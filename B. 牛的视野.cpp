#include<bits/stdc++.h>
using namespace std;
const int N=1e6+10;
long long n,t=0,x,sum;
long long a[N]; 
int main(){
	scanf("%lld",&n);
	for(int i=1;i<=n;i++){
		scanf("%lld",&x);
		while(t!=0 && a[t]<=x) t--;
		sum+=t;
		a[++t]=x;
	}
	printf("%lld",sum);
	return 0;
}

