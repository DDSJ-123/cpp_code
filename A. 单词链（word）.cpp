#include<bits/stdc++.h>
using namespace std;
int n,zd,a[20005];
string s[100005]; 
int main(){
 	cin>>n;
 	for(int i=1;i<=n;i++){
 		cin>>s[i];			
 	}
 	for(int i=1;i<=n;i++){
 		a[i]=1;
 		for(int j=1;j<i;j++){
 			if(s[i].find(s[j])==0){
 				a[i]=max(a[j]+1,a[i]);
 			}
 		}
 		zd=max(a[i],zd);
 	}
 	cout<<zd;
	return 0;
}

