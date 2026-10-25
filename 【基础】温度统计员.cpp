#include<bits/stdc++.h>
using namespace std;
char a[10005];
int n,x;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	int p=1;
	for(int i=2;i<=n;i++){
		if(a[i]=='A' && a[i-1]==a[i]){
			p++;
		}else{
			if(p>x){
				x=p;
			}
			p=1;
		}
	}
	if(p>x){
		x=p;
	}
    cout<<x;
	return 0;
}

