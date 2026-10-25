#include<bits/stdc++.h>
using namespace std;
long long n,sum,s,z;
int a[]={1,2,4,7,8,11,13,14}; 
int main(){
	scanf("%lld",&n);
	printf("%lld",(n-1)/8*15+a[(n-1)%8]);
	return 0;
}

