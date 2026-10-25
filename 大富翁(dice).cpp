#include<bits/stdc++.h>
using namespace std;
long long k,p,E,sum;
int main(){
	scanf("%lld%lld%lld",&k,&p,&E);
	while(E>1){
		if(E%p==0) E/=p;
		else E-=k;
		sum++;
	}
	printf("%lld",sum);
	return 0;
}


