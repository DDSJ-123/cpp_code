#include<bits/stdc++.h>
using namespace std;
int n,l,r;
int main(){
	scanf("%d%d%d",&n,&l,&r);
	int s=l%n;
	if(l+(n-s)-1<=r){
		cout<<n-1;
	}else{
		cout<<r%n;
	}
	return 0;
}
