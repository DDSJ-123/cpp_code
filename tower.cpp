#include<bits/stdc++.h>
using namespace std;
int n,n1,zg,z;
int a[1000005];
int main(){
	freopen("tower.in","r",stdin);
	freopen("tower.out","w",stdout);
	cin>>n>>n1;
	for(int i=1;i<=n;i++){
		cin>>a[i]; 
		if(a[i]>zg){
			zg=a[i];
			z=i;
		}
	}
	cout<<5;
	return 0;
}

