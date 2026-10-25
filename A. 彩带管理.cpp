#include<bits/stdc++.h>
using namespace std;
struct pp{
	int a,b;
	bool bj;
}a[100005];
int n;
bool cmp(pp al,pp bl){
	if(al.a!=bl.a){
		return al.a<bl.a;
	}else{
		return bl.b<bl.b;
	}
}
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].a>>a[i].b;
		a[i].bj=false;
	}
	sort(a+1,a+n+1,cmp);
	for(int i=2;i<=n;i++){
		if(a[i].a<=a[i-1].b && a[i].b>=a[i-1].a){
			a[i-1].bj=true;
			a[i].a=min(a[i].a,a[i-1].a);
			a[i].b=max(a[i].b,a[i-1].b);
		}
	}
	for(int i=1;i<=n;i++){
		if(!a[i].bj){
			cout<<a[i].a<<" "<<a[i].b<<"\n";
		}
	}
	return 0;
}



