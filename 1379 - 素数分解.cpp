#include<bits/stdc++.h>
using namespace std;
int n;
int ans;
int k;
int a[205];
int main(){
	cin>>n;
	for(int i=2;i<=200;i++){
		bool bj=false;
		for(int j=2;j<=sqrt(i);j++){
			if(i%j==0){
				bj=true;
			}
		}
		if(!bj){
			k++;
			a[k]=i;
		}
	}
	int i=1;
	while(n>0){
		if(n-a[i]>=0){
			ans++;
			n-=a[i];
			i++;
		}else{
			break;
		}
	}
	cout<<ans;
	return 0;
}



