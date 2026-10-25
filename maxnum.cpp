#include<bits/stdc++.h>
using namespace std;
struct pp{
	string s;
	int s1;
	int sum(){
		int sp=0;
		for(int i=0;i<s.size();i++){
			sp*=10;
			sp+=int(s[i]-'0');
		}
		return sp;
	}
}a[1005];
int n;
bool cmp(pp i,pp j){
	if(i.s1!=j.s1) return i.s1>j.s1;
	else i.sum()<j.sum();
}
int main(){
	freopen("maxnum.in","r",stdin);
	freopen("maxnum.out","w",stdout);
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		cin>>a[i].s;
		a[i].s1=int(a[i].s[0]-'0')+int(a[i].s[a[i].s.size()-1]-'0');
	}
	sort(a+1,a+n+1,cmp);
	/*
	for(int i=1;i<=n;i++){
		cout<<a[i].s1<<" "<<a[i].s<<" "<<a[i].sum()<<"\n";
	}
	*/
	cout<<a[1].s;
	return 0;
}


