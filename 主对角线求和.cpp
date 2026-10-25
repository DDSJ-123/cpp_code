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
		cout<<a[i][i]<<" ";
		s+=a[i][i];
	}
	cout<<endl<<s;
	return 0;
}

