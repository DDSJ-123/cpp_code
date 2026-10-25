#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[15][15]; 
int ma=0;
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>a[i][j];
		}
	}
	bool bj=false;
	for(int i=1;i<=n;i++){	
		for(int j=1;j<=m;j++){

			for(int i1=i;i1<=n;i1++){
				bj=false;
				for(int j1=j;j1<=m;j1++){
					bj=false;
					for(int p=i;p<=i1;p++){
						for(int q=j;q<=j1;q++){
							if(a[p][q]==0){
								bj=true;
							}
						}
					}
					if(!bj){
						ma=max(ma,(i1-i+1)*(j1-j+1));
					}	
					//cout<<ma<<endl;
				}
			}
		}
	}
	cout<<ma;
	return 0;
}


