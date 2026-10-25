#include<bits/stdc++.h>
using namespace std;

const int N = 2*100005;
int n,d,a;
struct pp{
	int x,h;
}sr[N]; 
long long cs;

bool cmp(pp xa,pp ya){
	return xa.x<ya.x;
}

int main(){
	
	freopen("supply.in","r",stdin);
	freopen("supply.out","w",stdout);
	
	cin>>n>>d>>a;
	d*=2;
	for(int i=1;i<=n;i++){
		cin>>sr[i].x>>sr[i].h;
	}	
	sort(sr+1,sr+n+1,cmp);
	for(int i=1;i<=n;i++){
		if(sr[i].h>0){
			int ls=sr[i].h%a==0?sr[i].h/a:sr[i].h/a+1;
			cs+=ls;
			for(int j=1;j<=n;j++){
				if(sr[j].x<=sr[i].x+d){
					sr[j].h-=(ls*a);
				}
			}
		}
	}
	cout<<cs;
	return 0;
}



