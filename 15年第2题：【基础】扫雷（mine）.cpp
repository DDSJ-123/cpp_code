#include<bits/stdc++.h>
using namespace std;
char a[105][105];
int m,n;
int main(){
	cin>>m>>n;
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
		}
	}
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			if(a[i][j]=='?'){
				char s=a[i-1][j],x=a[i+1][j],d=a[i][j-1],f=a[i][j+1];
				char s1=a[i-1][j+1],x2=a[i+1][j+1],d4=a[i-1][j-1],f5=a[i+1][j-1];
				int sum=0;
				char q='*';
				if(q==s){
					sum++;
				}
				if(q==s1){
					sum++;
				}
				if(q==x){
					sum++;
				}
				if(q==x2){
					sum++;
				}
				if(q==d){
					sum++;
				}
				if(q==d4){
					sum++;
				}
				if(q==f){
					sum++;
				}
				if(q==f5){
					sum++;
				}
				cout<<sum;
			}else{
				cout<<"*";
			}
		}
		cout<<endl;
	}
	return 0;
}

