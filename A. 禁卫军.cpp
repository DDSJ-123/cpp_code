#include<bits/stdc++.h>
using namespace std;
int n,a[10000005],sum,bj;
bool f[10000005];
int main(){
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
		f[a[i]]=true;
		if(a[i]==1) bj++;
	}
	if(bj==1){
		cout<<1;
		return 0;
	}else if(bj>1){
		cout<<0;
		return 0;
	}
	sort(a+1,a+n+1);
	for(int i=1;i<=n;i++){
		if(f[a[i]]){
			sum++;
			for(int j=a[i];j<=a[n];j+=a[i]){
				f[j]=false;
			}
			if(a[i]==a[i+1]) sum--;
		}
	}
	cout<<sum;
	return 0;
} 

