#include<bits/stdc++.h>
using namespace std;
long long a,b,sum;
int main(){
	scanf("%lld%lld",&a,&b);
	sum=pow(a,b);
	if(sum>INT_MAX || sum<INT_MIN){
		cout<<"-1";
	}else{
		printf("%lld",sum);
	}
	return 0;
}


