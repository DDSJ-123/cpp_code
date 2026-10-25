#include<bits/stdc++.h>
using namespace std;
long long n,s=2;
int main(){
	scanf("%lld",&n);
	for(int i=2;i<=sqrt(n);i++){
		while(n%i==0){
			printf("%d\n",i);
			n/=i;
		}
	}
	return 0;
}


