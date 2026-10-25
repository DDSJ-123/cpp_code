#include<bits/stdc++.h>
using namespace std;
char a[105][105];
int n,m;
bool c[105],b[105]; 
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>a[i][j];
		}
	}
	for(int i=1;i<=n;i++){
		bool bj=false; 
		for(int j=1;j<=m;j++){
			if(a[i][j]=='#'){
				bj=true;
				break;
			}
		}
		c[i]=bj;
	}
	for(int i=1;i<=m;i++){
		bool bj=false; 
		for(int j=1;j<=n;j++){
			if(a[i][j]=='#'){
				bj=true;
				break;
			}
		}
		b[i]=bj;
	}
	for(int i=1;i<=n;i++){
		if(b[i]){
			for(int j=1;j<=n;j++){
				if(c[j]) cout<<'#';
				else cout<<'.';
			}
			cout<<"\n";
		}
	}
	return 0;
}



