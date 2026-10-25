#include<bits/stdc++.h>
using namespace std;
const int N=1005;
int n,x,y,ma;
vector<int> a[N];
int f[N];
int main(){
	cin>>n;
	for(int i=1;i<n;i++){
		cin>>x>>y;
		f[y]=x;
		a[x].push_back(y);
		if((a[x].size()==a[ma].size() && x>ma) || (a[x].size()>a[ma].size())) ma=x;
	}
	int r=x;
	while(f[r]!=0) r=f[r];
	cout<<r<<"\n";
	cout<<ma<<"\n";	
	sort(a[ma].begin(),a[ma].end());
	for(int i=0;i<a[ma].size();i++){
		cout<<a[ma][i]<<" "; 
	}
	return 0;
}



