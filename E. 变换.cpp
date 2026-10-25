#include<bits/stdc++.h>
using namespace std;
long long n,ans,sum,s[100005],t[100005],c[100005],c1[100005],bj=0;
bool cmp(int x,int y){
	return x>y;
}
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>s[i];
	}
	for(int i=1;i<=n;i++){
		cin>>t[i];
	}
	for(int i=1;i<=n;i++){
		cin>>c[i];
	}
	for(int i=1;i<=n;i++){
		if(s[i]!=t[i]){
			ans++;
			c1[ans]=c[i];
			bj=i;
		}
	}
	sort(c1+1,c1+ans+1,cmp);
	for(int i=ans;i>=0;i--){
		sum+=c1[i]*i;
	}
	cout<<sum;
	return 0;
} 
