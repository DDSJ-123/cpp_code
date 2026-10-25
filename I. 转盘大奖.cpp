#include<bits/stdc++.h>
using namespace std;
int w,n,ans;
int sr; 
int main(){
	cin>>w>>n;
	for(int i=1;i<=n;i++){
		cin>>sr;
		if(sr==9){
			ans++;
		}
	}
	if(ans==1){
		w-=10;
	}
	if(ans==2){
		w-=100;
	}
	if(ans==3){
		w-=500;
	}
	cout<<max(0,w);
	return 0;
}



