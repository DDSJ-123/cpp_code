#include<bits/stdc++.h>
using namespace std;
int n;
int a[10005],b[10005];
int ma;
int main(){
	cin>>n;
	a[0]=INT_MAX;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++){
		b[i]=1;
		for(int j=1;j<=n;j++){
			if(a[i]>a[j]){
				b[i]=max(b[j]+1,b[i]);
			}
		}
		ma=max(b[i],ma);
	}
	cout<<ma;
	return 0;
}



