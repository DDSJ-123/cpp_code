#include<bits/stdc++.h>
using namespace std;

const int N = 505;
int a[N][N];
int r,c,x,y;
int ts1;
int mi=INT_MAX; 


int main(){
	
	freopen(".in","r",stdin);
	freopen(".out","w",stdout);
	
	cin>>r>>c>>x>>y;
	for(int i=1;i<=r;i++){
		for(int j=1;j<=c;j++){
			cin>>a[i][j];
			ts1+=a[i][j];
		}
	}
	if(x==1 && y==1){
		cout<<ts1;
	}
	return 0;
}



