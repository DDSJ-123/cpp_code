#include<bits/stdc++.h>
using namespace std;
int n,ma=0;
int a[10005]; 
int main(){
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	sort(a+1,a+n+1);
	int s=1;
	for(int i=2;i<=n;i++){
		if(a[i]==a[i-1]+1 && a[i]!=a[i-1]){
			s++;
		}else{
			s=1;
		}
		ma=max(ma,s);
	}
	cout<<ma;
	return 0;
}


