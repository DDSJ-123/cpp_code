#include<bits/stdc++.h>
using namespace std;
int n;
int a[10005],s[10005],jang[10005];
int mi=INT_MAX;
int main(){
	cin>>n;
	a[0]=INT_MAX;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++){
		s[i]=1;
		for(int j=1;j<i;j++){
			if(a[i]>a[j]){
				s[i]=max(s[j]+1,s[i]);
			}
		}
	}
	for(int i=n;i>0;i--){
		jang[i]=1;
		for(int j=i+1;j<=n;j++){
			if(a[i]>a[j]){
				jang[i]=max(jang[j]+1,jang[i]);
			}
		}
	}
	for(int i=1;i<=n;i++){
		int p=n-jang[i]-s[i]+1;
		mi=min(p,mi);
	}
	cout<<mi;
	return 0;
}



