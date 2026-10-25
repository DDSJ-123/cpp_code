#include<bits/stdc++.h>
using namespace std;
long long t,a;
long long rs(long long l){
	for(long long i=1;i<=sqrt(l);i++){
		if(l==pow(i,4)){
			return i;
		}
	}
	return -1;
}
int main(){
	scanf("%lld",&t);
	while(t--){
		scanf("%lld",&a);
		printf("%lld\n",rs(a));
	}
	return 0;
}
