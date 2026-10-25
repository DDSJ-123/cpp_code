#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m,s=0;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		int a;
		cin>>a;
		if(i<m || i>n){
			continue;
		}
		s+=a;
	}
	cout<<s;
	return 0;
} 
