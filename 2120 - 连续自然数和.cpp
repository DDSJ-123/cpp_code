#include<bits/stdc++.h>
using namespace std;
int m;
int a[2000005];
int main(){
	cin>>m;
	for(int i=1;i<=m;i++){
		a[i]=i;
		a[i]+=a[i-1];
	}
	int l=1,r=1;
	int s;
	while(l<=m && r<=m){
		s=a[r]-a[l-1];
		if(s==m && l!=r){
			cout<<l<<" "<<r<<"\n";
			l++;
			r++;
		}
		if(s<m){
			r++;
		}else{
			l++;
		}
	}
	return 0;
}



