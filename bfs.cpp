#include<bits/stdc++.h>
using namespace std;
long long n,sum;
int main(){
	freopen("bfs.in","r",stdin);
	freopen("bfs.out","w",stdout);
	scanf("%lld",&n);
	sum=n*n+(n-1)*(n-1);
	printf("%lld",sum);
	return 0;
}

