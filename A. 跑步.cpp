#include<bits/stdc++.h>
using namespace std;
long long x,y;
int main(){
	scanf("%lld%lld",&x,&y);
	if((x+y)%2==0){
		printf("%lld",(x+y)/2);
	}else{
		printf("IMPOSSIBLE");
	}
	return 0;
}



