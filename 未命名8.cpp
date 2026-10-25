#include<bits/stdc++.h>
using namespace std;
int a[105][105],n,s;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
		} 
	}
	for(int i=1;i<=n;i++){
		s+=a[i][i];
		s+=a[i+1][n-i];
		if(n%2==1 && n/2==i){
			s-=a[i][i];
		}
	}
	cout<<s;
	return 0;
}

