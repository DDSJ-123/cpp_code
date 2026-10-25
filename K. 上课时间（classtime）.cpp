#include<bits/stdc++.h>
using namespace std;
long long n;
long long t;
int main(){
 	scanf("%lld",&n);
 	t=(n/7)*34;
 	if(n%7==6) t+=34;
 	if(n%7==5 || n%7==4 || n%7==3 || n%7==2 || n%7==1) t+=n%7*6;
 	printf("%lld",t*40);
	return 0;
}

