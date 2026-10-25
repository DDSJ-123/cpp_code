#include<bits/stdc++.h>
using namespace std;

const int N = 15;
struct pp{
	int fn,kb;
}a[N];
bool bj[N];
int mi=INT_MAX; 
int n;

void js(int z,int fnn,int kbn){
	if(z!=1){
		mi=min(mi,abs(fnn-kbn));
	}
	for(int i=1;i<=n;i++){
		if(!bj[i]){
			bj[i]=true;
			js(z+1,fnn==0?1*a[i].fn:fnn*a[i].fn,kbn+a[i].kb);
			bj[i]=false;
		}
	}
}

int main(){
	/*
	freopen(".in","r",stdin);
	freopen(".out","w",stdout);
	*/
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].fn>>a[i].kb;
	}
	js(1,0,0);
	cout<<mi;
	return 0;
}



