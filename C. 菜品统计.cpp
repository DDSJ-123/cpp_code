#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[35];
int sr,z;
int sum; 
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>z;
		while(z--){
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



