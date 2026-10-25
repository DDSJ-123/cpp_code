#include<bits/stdc++.h>
using namespace std;

const int N = 200005;
struct node{
	int to,w,next;
}a[N];
int head[N],cnt;
void add(int u,int v,int z){
	a[cnt].to=v;
	a[cnt].w=z;
	a[cnt].next=head[u];
	head[u]=cnt++;
}

int n,m;
int jl[N];
bool bj[N];
int mi=INT_MAX;

void js(int z,int c){
	if(z==n){
		mi=min(c,mi);
		return ;
	}
	if(c>n*n*n){
		return ;
	}
	for(int i=head[z];i!=-1;i=a[i].next){
		int c_to=a[i].to;
		int c_z=a[i].w;
		if(c==0 || jl[c-1]!=c_z){
			jl[c]=c_z; 
			bj[c_to]=true;
			js(c_to,c+1);
			bj[c_to]=false;
		}
	}
}

int main(){
	
	freopen("tour.in","r",stdin);
	freopen("tour.out","w",stdout);
	
	memset(head,-1,sizeof(head));
	cin>>n>>m;
	for(int i=1;i<=m;i++){
		int x,y,z;
		cin>>x>>y>>z;
		add(x,y,z);
		add(y,x,z);
	}
	bj[1]=true;
	js(1,0);
	if(mi==INT_MAX){
		cout<<-1;
	}else{
		cout<<mi;
	}
	return 0;
}



