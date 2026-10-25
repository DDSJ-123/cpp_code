#include<bits/stdc++.h>
using namespace std;
long long n,sum;
int main(){
	scanf("%lld",&n);
	for(long long i=1;i<=n;i++){
		for(long long j=i;j<=n;j++){
			if(i*j%2==0){
				sum++;
			}
		}
	}
	printf("%lld",sum);
	return 0;
}

