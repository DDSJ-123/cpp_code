#include<bits/stdc++.h>
using namespace std;
char a[10000005];
long long n;
int main(){
	freopen("house.in","r",stdin);
	freopen("house.out","w",stdout);
	scanf("%lld",&n);
	for(long long i=1;i<=n;i++){
		cin>>a[i];
	}
	if(n==3){
		if(a[1]==a[3]){
			if(a[2]>a[1]){
				cout<<a[1]<<" "<<1<<" "<<a[3];
			}else{
				cout<<1<<" "<<a[2]<<" "<<1;
			}
		}else{
			cout<<1<<" "<<a[2]<<" "<<1;
		}
		return 0;
	}
	for(int i=1,j=n;i<=n/2;i++,j--){
		if(a[i]!=a[j]){
			if(a[i]>a[j]) a[i]=a[j];
			else a[j]=a[i];
		}
	}
	for(int i=1;i<=n;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}

