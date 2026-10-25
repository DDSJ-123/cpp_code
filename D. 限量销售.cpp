#include<bits/stdc++.h>
using namespace std;
const int N=10005;
int n,m;
int a[N],b[N];
bool bj[N];
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>b[i];
	} 
	int ans=0;
	for(int i=1;i<=n;i++){
		ans=0;
		for(int j=1;j<=m;j++){
			bj[j]=false;
		}
		for(int j=i;j<=n;j++){
			if(!bj[a[j]]){
				bj[a[j]]=true;
				ans++;
			}else if(!bj[b[j]]){
				bj[b[j]]=true;
				ans++;
			}
		}
		cout<<ans<<"\n";
	}
	return 0;
}



