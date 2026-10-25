#include<bits/stdc++.h>
using namespace std;
int n,a[1000005],p[1000005];
int ma;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++){
		p[i]=1;
		for(int j=1;j<i;j++){
			if(a[j]<a[i]){
				p[i]=max(p[i],p[j]+1);
			}
		}
		ma=max(p[i],ma);
	} 
	cout<<ma;
	return 0;
}

