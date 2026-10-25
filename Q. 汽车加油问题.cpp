#include<bits/stdc++.h>
using namespace std;
int n,ma,ans=1;
int sy,xz;
int main(){
	cin>>ma>>n;
	sy=ma; 
	while(n--){
		cin>>xz;
		if(sy-xz>=0){
			sy=sy-xz;
		}else{
			ans++;
			sy=ma;
			if(sy-xz>=0){
				sy=sy-xz;
			}else{
				cout<<"No Solution";
				return 0;
			}
		}
	}
	cout<<ans;
	return 0;
}



