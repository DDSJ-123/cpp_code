#include<bits/stdc++.h>
using namespace std;
const int N=10005;
int a[N];
int sc[N];
int ma,ans[N];
int sr,n; 
int main(){
	cin>>n;
	for(int i=2;i<=n;i++){
		cin>>sr;
		a[i]=sr;
		sc[i]++;
		sc[sr]++;
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(i!=j && a[j]==i){
				ans[i]+=max(0,sc[j]-1);
			}
		}
		if(ans[ma]<ans[i]){
			ma=i;
		}
	}
	cout<<ma<<" "<<ans[ma];
	return 0;
}



