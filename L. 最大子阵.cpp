#include<bits/stdc++.h>
using namespace std;
int ma=0;
int m,n;
int a[55][55];
int main(){
	cin>>m>>n;
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
			ma=max(ma,a[i][j]);
		}
	}
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			if(i==1){
				a[i][j]=max(a[i][j],a[i][j]+a[i][j-1]);
			}else{
				a[i][j]=max(a[i][j],max(a[i][j]+a[i][j-1],max(a[i][j]+a[i-1][j],a[i][j]+a[i][j-1]+a[i-1][j])));				
			}
			ma=max(ma,a[i][j]);
		}
	}
 	for(int i=1;i<=n;i++){
 		for(int j=1;j<=m;j++){
 			cout<<a[i][j]<<" ";
		}
		cout<<"\n";
	 }
	cout<<"\n"<<ma;
	return 0;
}



