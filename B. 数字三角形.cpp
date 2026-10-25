#include<bits/stdc++.h>
using namespace std;
int n;
long long a[1005][1005];
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cin>>a[i][j];
		}
	} 
	for(int i=n;i>1;i--){
		for(int j=1;j<i;j++){
			a[i-1][j]+=max(a[i][j],a[i][j+1]);
		}
	}
	cout<<a[1][1];
	return 0;
}



