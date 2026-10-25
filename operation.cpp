#include<bits/stdc++.h>
using namespace std;

const int N = 100005;

struct pp{
	int wz,z;
}b[N];

string sr[N*2],y;
int a[N];
int n,m;
int x,k,w,zw;

string js(){
	stack<string> gwx;
	int ww1=0;
	for(int i=1;i<=k;i++){
		if(sr[i]!="$"){
			gwx.push(sr[i]);
		}else{
			ww1++;
			int fl1=stoi(gwx.top());
			gwx.pop();
			int fl2=stoi(gwx.top());
			gwx.pop();
			int jg=(fl1+fl2)*b[ww1].z;
			gwx.push(to_string(jg));
		}
	}
	return gwx.top();
}

int main(){
	
	freopen("operation.in","r",stdin);
	freopen("operation.out","w",stdout);
	
	cin>>n;
	zw=n-1;
	for(int i=1;i<=n+zw;i++){
		cin>>sr[++k];
		if(sr[k]=="$"){
			zw--;
			w++;
			b[w].wz=k;
			i--;
		}else{
			a[i]=k;
		}
	}
	for(int i=1;i<=w;i++){
		cin>>b[i].z;
	}
	
	cin>>m;
	while(m--){
		cin>>x>>y;
		sr[a[x]]=y;
		cout<<js()<<"\n";
	}
	
	return 0;
}

