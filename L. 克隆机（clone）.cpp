#include<bits/stdc++.h>
using namespace std;
int n;
long long k,j;
char s[]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
int main(){
    scanf("%d%lld",&n,&k);
    if(k%n==0){
    	cout<<s[n];
    	return 0;
	}
	int i=1;
	for(i=1;i<=k;i*=2){
		j++;
	}
	cout<<s[k%j];
	return 0;
}

