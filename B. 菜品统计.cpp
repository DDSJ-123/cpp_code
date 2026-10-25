#include<bits/stdc++.h>
using namespace std;
int a[35];
int sr;
int n,m,c;
int sum;
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>c;
		for(int j=1;j<=c;j++){
			cin>>sr;
			a[sr]++;
		}
	}	
	for(int i=1;i<=m;i++){
		if(a[i]==n) sum++;
	}
	cout<<sum;
	return 0;
}



