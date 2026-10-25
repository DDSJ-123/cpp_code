#include<bits/stdc++.h>
using namespace std;
long long x,y,z; 
int main(){
	scanf("%lld%lld%lld",&x,&y,&z);
	if(x%z==0) x/=z;
	else x/=z,x++;
	if(y%z==0) y/=z;
	else y/=z,y++;
	printf("%lld",x*y);
	return 0;
}

