#include<bits/stdc++.h>
using namespace std;
long long l,r,sum;
long long ecf[]={1,2,4,8,16,32,64,128,256,512,1024,2048,4096,8192,16384,32768,65536};
bool cf(long long j1){
	for(int i=0;i<=16;i++){
		for(int j=0;j<=16;j++){
			if(ecf[i]+ecf[j]==j1){
				return true;
			}
		}
	}
	return false;
}
int main(){
	scanf("%lld%lld",&l,&r);
	for(long long i=l;i<=r;i++){
		if(cf(i)) sum++;
	}
	printf("%lld",sum);
	return 0;
}
