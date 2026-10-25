#include<bits/stdc++.h>
using namespace std;

int n;
int w=1,ans,wz=1;
int main(){
	/*
	freopen(".in","r",stdin);
	freopen(".out","w",stdout);
	*/
	cin>>n;
	for(int i=1;i<=n;i++){
		if(i>wz){
			w++;
			wz=wz+w;
		}
		ans+=w;
	}
	cout<<ans;
	return 0;
}



