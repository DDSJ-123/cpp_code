#include<bits/stdc++.h>
using namespace std;
char a[105][105];
int h,w;
int xx1,xx2,yy1,yy2;
int main(){
	cin>>h>>w>>xx1>>xx2>>yy1>>yy2;
	for(int i=1;i<=h;i++){
		for(int j=1;j<=w;j++){
			cin>>a[i][j]; 
		}
	}
	for(int i=xx1;i<=xx2;i++){
		for(int j=yy1;j<=yy2;j++){
			cout<<a[i][j];
		}
		cout<<endl;
	}
	return 0;
}


