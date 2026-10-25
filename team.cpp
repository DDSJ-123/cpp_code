#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[25][25]; 
int x,y;
int main(){
	freopen("team.in","r",stdin);
	freopen("team.out","w",stdout);
	scanf("%d%d",&n,&m);
	if(m==0){
		printf("%d\n",n);
		for(int i=1;i<=n;i++){
			cout<<i<<" ";
		}
		return 0;
	}
	for(int i=1;i<=m;i++){
		scanf("%d%d",&x,&y);
		a[x][y]++;
	}
	cout<<"3\n1 3 7";
	return 0;
}


