#include<bits/stdc++.h>
using namespace std;
struct pp{
	string name;
	int n;
}a[1005];
map<string,int> m; 
bool cmp(pp a,pp b){
	if(a.n!=b.n) return a.n>b.n;
	else return a.name>b.name;
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
	for(int i=1;i<=n;i++){
		if(m[a[i].name]!=0) cout<<a[i].name<<" "<<a[i].n<<endl;
		m[a[i].name]=0;
	}
	return 0;
}
