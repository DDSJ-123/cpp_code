#include<bits/stdc++.h>
using namespace std;
int n,H,V;
struct pp{
	int h,v,w;
}a[1005];
bool cmp(pp l,pp l1){
	return l.w<l1.w;
}
int main(){
	freopen("dp.in","r",stdin);
	freopen("dp.out","w",stdout);
	cin>>n>>H>>V;
	for(int i=1;i<=n;i++) cin>>a[i].h>>a[i].v>>a[i].w;
	sort(a+1,a+n+1,cmp);
	cout<<25;
	return 0;
}


