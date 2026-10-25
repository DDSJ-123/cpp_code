#include<bits/stdc++.h>
using namespace std;

int t,n,m; 
struct pp{
	int x1,x2;
	void init(){
		int a=x1,b=x2;
		x1=min(a,b);
		x2=max(a,b);
	}
}a[100005];

int jl[1000005];
int ma;

int js(){
	ma=0;
	int sum=0;
	for(int i=1;i<=n;i++){
		cin>>a[i].x1>>a[i].x2;
		a[i].init();
		ma=max(ma,a[i].x2);
	} 
	for(int i=1,ans;i<=ma;i++){
		ans=0;
		for(int j=1;j<=n;j++){
			if(a[j].x1<i && a[j].x2>i) ans++;
		}
		jl[i]=ans;
	}
	sort(jl+1,jl+ma+1);
	for(int i=ma;i>ma-m && i>=0;i--){
		sum+=jl[i];
	}
	return sum+n;
}

int main(){

	freopen("slicing.in", "r", stdin);
	freopen("slicing.out", "w", stdout);
	cin.tie(0);
	cout.tie(0);
	
	cin>>t;
	
	for(int i=1;i<=t;i++){
		cin>>n>>m;
		cout<<"Case #"<<i<<": "<<js()<<"\n";
	}
	
	return 0;
}



