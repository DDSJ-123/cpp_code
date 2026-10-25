#include<bits/stdc++.h>
using namespace std;
int to[15];//原第i张牌去哪个目标位置 
int used[15];//目标位置j是否已经被匹配过
int h;//手牌位置
int len,hand;//环长，是否含有手盘
int n,ans=100,vis[15],b[15],a[15]; 
void check(){
	memset(vis,0,sizeof(vis));
	int cnt=0;
	for(int i=1;i<=h;i++){
		if(!vis[i]){
			int x=i,len=0,hand=0;
			while(!vis[x]){
				vis[x]=1;
				len++;
				if(x==h) hand=1;
				x=to[x];
			}
			if(len>1) cnt+=hand ? len-1:len+1;//环含手牌少一次，不含手多一次 
		}
	}
	ans=min(ans,cnt); 
}
void dfs(int x){
	if(x>h){//所有同值牌已经编号并匹配，检查环 
		check();
		return;
	}
	if(to[x]){//已正确的普通位置固定，不必打乱 
		dfs(x+1);
		return;
	}
	for(int j=1;j<=h;j++){
		if(!used[j]&&a[x]==b[j]){
			to[x]=j;
			used[j]=1;
			dfs(x+1);
			to[x]=0;
			used[j]=0;//回溯：撤销这个匹配 
		}
	} 
}
int main( )
{
	//n<=10
	cin>>n;
	h=n+1;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		a[h]^=a[i];
	}
	for(int i=1;i<=n;i++){
		cin>>b[i];
		b[h]^=b[i];
	}
	for(int i=1;i<=n;i++){
		if(a[i]==b[i]){
			to[i]=i;
			used[i]=1;
		}
	}
	//手牌位置h即使相等也不能固定，它需要参与某个环
	dfs(1);
	cout<<ans; 
	
	 
	return 0;
}

