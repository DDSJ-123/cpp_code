#include<bits/stdc++.h>
using namespace std;

int t;
int nx=INT_MAX,ny=INT_MAX;
int mx=INT_MIN,my=INT_MIN;
int srx,sry;

int main(){
	
	freopen("box.in","r",stdin);
	freopen("box.out","w",stdout);
	
	cin>>t;
	while(t--){
		cin>>srx>>sry;
		mx=max(mx,srx);
		my=max(my,sry);
		nx=min(nx,srx);
		ny=min(ny,sry);
	}
	mx++;
	my++;
	nx--;
	ny--;
	cout<<mx*my-nx*my-ny*mx+nx*ny<<"\n";
	cout<<nx<<" "<<ny<<"\n";
	cout<<mx<<" "<<my;
	return 0;
}



