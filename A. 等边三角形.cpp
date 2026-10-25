#include<bits/stdc++.h>
using namespace std;
int n;
int a[25],ans,ma;
int b[4];

bool js(int z){
	if(z==0){
		if(a[1]==a[2] && a[2]==a[3]){
			cout<<"yes";
			return 0;
		}else{
			return false;
		}
	}
	for(int i=1;i<=3;i++){
		if((i!=1 && b[i-1]!=b[i]) || i==1){
			b[i]+=a[z];
			js(--z);
			b[i]-=a[z];
		}
	}
	return false;
}

int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		ans+=a[i];
		ma=max(a[i],ma);
	}
	if(ans%3!=0 || ma>ans/3){
		cout<<"no";
		return 0;
	}
	sort(a+1,a+n+1);
	js(n);
	cout<<"no";
	return 0;
}



