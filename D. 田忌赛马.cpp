#include<bits/stdc++.h>
using namespace std;
int n,a[1000005],b[1000005],ans;
bool cmp(int x,int y){
	return x>y;
}
int main(){
    cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++) cin>>b[i];
	sort(a+1,a+n+1,cmp);
	sort(b+1,b+n+1,cmp);
	int l=1,r=1;
	while(l<=n && r<=n){
		if(a[l]>b[r]){
			ans++;
			l++;
			r++;
		}else{
			r++;
		}
	}
	cout<<ans;
	return 0;
}

