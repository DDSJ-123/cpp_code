#include<bits/stdc++.h>
using namespace std;
struct pp{
	string name;
	int n;
}a[1005];
map<string,int> m; 
bool cmp(pp a,pp b){
	return a.n>b.n;
}
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].name;
		m[a[i].name]++;
		a[i].n=m[a[i].name];
	}
	sort(a+1,a+n+1,cmp);
	cout<<a[1].name;
	return 0;
}
