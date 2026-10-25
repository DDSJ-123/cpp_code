#include<bits/stdc++.h>
using namespace std;
int n,ans; 
int a[7]={100,50,10,5,2,1};
int main(){
	cin>>n;
	while(n!=0){
		int sr,i=1,z;
		while(n--){
			i=1; 
			cin>>sr;
			while(sr!=0 && i<=7){
				if(sr>=a[i]){
					z=sr/a[i];
					ans+=z;
					sr-=z*a[i];
				}else{
					i++;
				} 
			}	
		}
		cout<<ans<<"\n";
		cin>>n;
	}
	return 0;
} 
