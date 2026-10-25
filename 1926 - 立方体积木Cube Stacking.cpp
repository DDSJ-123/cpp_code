#include<bits/stdc++.h>
using namespace std;
int p;
int f[30005],dis[30005],len[30005];
char sr;
int x,y;

int find(int x){
	if(f[x]==x) return x;
	else{
		int t=f[x];
		f[x]=find(f[x]);
		dis[x]+=dis[t];
		return f[x]; 
	}
}
void merge(int x,int y){
	int fx=find(x);
	int fy=find(y);
	if(fx!=fy){
		f[fx]=fy;
		dis[fx]+=len[fy]; 
		len[fy]+=len[fx];
		len[fx]=0;
	}
} 

int main(){
	cin>>p;
	for(int i=0;i<=30000;i++){
		f[i]=i;
		dis[i]=0;
		len[i]=1;
	}
	while(p--){
		cin>>sr;
		if(sr=='C'){
			cin>>x;
			find(x);
			cout<<dis[x]<<"\n";
		}else{
			cin>>x>>y;
			merge(x,y);
		}
	}
	return 0;
}



