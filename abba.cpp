#include<bits/stdc++.h>
using namespace std;
long long n;
bool bd(long long sr){
	long long s=0,s1=sr;
	while(s1){
		s=s*10+s1%10;
		s1/=10;
	}
	if(s!=sr) return false;
	for(long long i=1;i<=sqrt(sr);i++){
		if(pow(i,3)==sr) return true;
	}
	return false;
} 
int main(){
	freopen("abba.in","r",stdin);
	freopen("abba.out","w",stdout);
	scanf("%lld",&n);
	for(long long i=n;i>0;i--){
		if(bd(i)){
 			printf("%lld",i);
			return 0;			
		}
	}
	return 0;
}

