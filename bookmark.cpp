#include<bits/stdc++.h>
using namespace std;
long long n,nl;
long long a[20]={0,9,0,900,0,90000,0,9000000,0,900000000,0,90000000000,0,9000000000000,0,900000000000000,0,90000000000000000,0,9000000000000000000};
long long ans;
int sw; 
long long sgl=1;
int main(){
	/*
	freopen("bookmark.in","r",stdin);
	freopen("bookmark.out","w",stdout);
	*/
	scanf("%lld",&n);
	nl=n;
	while(nl){
		sw++;
		nl/=10;
	}
	for(int i=1;i<sw;i++){
		ans+=a[i];
	}
	if(sw%2==0){
		cout<<ans;
	}else{
		for(int i=1;i<sw;i++) sgl*=10;
		cout<<(ans+n-sgl+1);
	}
	return 0;
}



