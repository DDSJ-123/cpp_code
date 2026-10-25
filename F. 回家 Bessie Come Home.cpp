#include<bits/stdc++.h>
using namespace std;
int n;
int a[52][52];
int js(char z){
	if(z>='a' && z<='z'){
		return z-'a';
	}else{
		return z-'A'+26;
	}
}
int dis[52];
bool vis[52];
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		char srx,sry;
		int l;
		cin>>srx>>sry>>l;
		a[js(srx)][js(sry)]=l;
		a[js(sry)][js(srx)]=l;
	}
	for(int i=0;i<52;i++){
		dis[i]=0x3f3f3f3f;
		vis[i]=false;
	}
	dis[js('Z')]=0;
	for(int i=0;i<52;i++){
		int mi=-1;
		for(int j=0;j<52;j++){
			if(!vis[j] && (mi==-1 || dis[j]<dis[mi])){
				mi=j;
			}
		}
		vis[mi]=true;
		for(int j=0;j<52;j++){
			if(!vis[j] && a[mi][j]!=0 && dis[mi]+a[mi][j]<dis[j]){
				dis[j]=dis[mi]+a[mi][j];
			}
		}
	}/*
	for(int i=0;i<52;i++){
		for(int j=0;j<52;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<"\n";
	} */
	char miz=26;
	for(int i=27;i<52;i++){
		cout<<dis[i]<<" ";
		if(dis[miz]>dis[i]){
			miz=i;
		}
	}
	cout<<"\n";
	cout<<dis[miz];
	return 0;
}



