#include<bits/stdc++.h>
using namespace std;
long long n,jg=0;
bool hwpd(long long z){
	long long s=0,s1=z;
	while(s1!=0){
		s=s*10+s1%10;
		s1/=10;
	}
	if(s==z) return true;
	return false;
}
int main(){
	scanf("%lld",&n);
	for(long long i=0,s;i*i*i<=n;i++){
		s=i*i*i;
		if(hwpd(s)) jg=s;
	}
	printf("%lld",jg);
	return 0;
}

