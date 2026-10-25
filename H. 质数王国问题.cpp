#include<bits/stdc++.h>
using namespace std;
long long n,t;
int main(){
	scanf("%lld",&n);
	while(n--){
		scanf("%lld",&t);
		for(long long i=2;i<=t;i++){
			if(t%(i*i)==0){
				printf("%lld %lld\n",i,t/(i*i));
				break;
			}
		}
	}
	return 0;
}

