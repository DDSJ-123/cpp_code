#include<bits/stdc++.h>
using namespace std;

int n;
int a[100005];
int ma,ls;
bool bj;

int main(){
	/*
	freopen(".in","r",stdin);
	freopen(".out","w",stdout);
	*/
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		if(a[i]==1){
			ma=max(ma,ls);
			ls=1;
			bj=true;
		}else if(bj && a[i]==a[i-1]+1){
			ls++;
		}else{
			bj=false;
		}
	}
	ma=max(ma,ls);
	cout<<ma;
	return 0;
}



