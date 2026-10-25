#include<bits/stdc++.h>
using namespace std;

const int N = 100005;
int a[N];

int t;
int n,bc;
bool bj;
int b[N];
int zq;

int main(){
	/*
	freopen(".in","r",stdin);
	freopen(".out","w",stdout);
	*/
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=1;i<=n;i++){
			cin>>a[i];
			if(i!=1) b[i-1]=abs(a[i-1]-a[i]);
		}
		sort(b+1,b+n);
		bj=false;
		for(int i=1;i<n;i++){
			if(b[i]!=i){
				bj=true;
				break;
			} 
			b[i]=0;
		}
		if(!bj){
			cout<<"Y\n";
		}else{
			cout<<"N\n";
		}
	}
	return 0;
}



