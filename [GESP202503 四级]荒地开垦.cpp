#include<bits/stdc++.h>
using namespace std;
char a[1005][1005];
int n,m,sum,s=0;
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>a[i][j];
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(a[i][j]=='#'){
				if(i+1<=n && a[i+1][j]!='#') a[i+1][j]='+';
				if(a[i+1][j]=='+') a[i+1][j]=='*';
				if(i-1>=0 && a[i-1][j]!='#') a[i-1][j]='+';
				if(a[i-1][j]=='+') a[i-1][j]=='*';
				if(j-1>=0 && a[i][j-1]!='#') a[i][j-1]='+';
				if(a[i][j-1]=='+') a[i][j-1]=='*';
				if(j+1<=m && a[i][j+1]!='#') a[i][j+1]='+';
				if(a[i][j+1]=='+') a[i][j+1]=='*';
			}
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			int s1=0;
			if(a[i][j]=='#'){
				if(i+1<=n && a[i+1][j]!='#' && a[i+1][j]!='*') s1++;
				if(i-1>=0 && a[i-1][j]!='#' && a[i-1][j]!='*') s1++;
				if(j-1>=0 && a[i][j-1]!='#' && a[i][j-1]!='*') s1++;
				if(j+1<=m && a[i][j+1]!='#' && a[i][j+1]!='*') s1++;
				if(a[i+1][j]=='#' || a[i-1][j]=='#' || a[i][j-1]=='#' || a[i][j+1]=='#') s1--;
			}
			s=max(s,s1);
		}
	}
	cout<<s<<"\n";
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cout<<a[i][j];
		}
		cout<<"\n";
	}
	cout<<"\n";
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(a[i][j]=='.') sum++;
		}
	}
	cout<<sum+s;
	return 0;
}


