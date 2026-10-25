#include<bits/stdc++.h>
using namespace std;
int n,a[1000005],ans; 
int main(){
	cin>>n;
	for(int i=2;i<=n;i++){
		if(a[i]==0){
			ans++;
			for(int j=1;j*i<=n;j++){
				a[i*j]=1;
			}
		}
	}
	cout<<ans;
	return 0;
}


