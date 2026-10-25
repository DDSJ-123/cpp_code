#include<bits/stdc++.h>
using namespace std;
struct edge{
	int form,to,next;
}a[10010];
int pre[1000100];
int n,e;
int k=0;
struct node{
	int x,y;
}p[10010];
void add(int u,int v){
	k++;
	a[k]={u,v,pre[u]};
	pre[u]=k;
}
bool cmp(node a1,node a2){
	return a1.x<a2.x || (a1.x==a2.x && a1.y>a2.y);
}
int main(){
	cin>>n>>e;
	for(int i=1;i<=e;i++){
		cin>>p[i].x>>p[i].y;
	}
	sort(p+1,p+e+1,cmp);
	for(int i=1;i<=e;i++){
		add(p[i].x,p[i].y);
	}
	for(int i=1;i<=n;i++){
		if(pre[i]!=0){
			cout<<i<<"\n";
			for(int j=pre[i];j!=0;j=a[j].next){
				cout<<a[j].to<<" ";
			}
			cout<<"\n";
		}
	} 
	return 0;
}


