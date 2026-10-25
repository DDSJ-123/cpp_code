#include<bits/stdc++.h>
using namespace std;
long long t;
char a[4][4];
void kl(){
	int xx3=0,h3=0;
	char f='X';
	int x=1,x1=1,x2=2,x3=3;
	if(a[x][x1]==f && a[x][x2]==f && a[x][x3]==f) xx3++;
	x=2,x1=1,x2=2,x3=3;
	if(a[x][x1]==f && a[x][x2]==f && a[x][x3]==f) xx3++;
	x=3,x1=1,x2=2,x3=3;
	if(a[x][x1]==f && a[x][x2]==f && a[x][x3]==f) xx3++;
	x=1,x1=1,x2=2,x3=3;
	if(a[x1][x]==f && a[x2][x]==f && a[x3][x]==f) xx3++;
	x=2,x1=1,x2=2,x3=3;
	if(a[x1][x]==f && a[x2][x]==f && a[x3][x]==f) xx3++;
	x=3,x1=1,x2=2,x3=3;
	if(a[x1][x]==f && a[x2][x]==f && a[x3][x]==f) xx3++;
	if(a[1][1]==f && a[2][2]==f && a[3][3]==f) xx3++;
	if(a[3][1]==f && a[2][2]==f && a[1][3]==f) xx3++;
	f='H';
	x=1,x1=1,x2=2,x3=3;
	if(a[x][x1]==f && a[x][x2]==f && a[x][x3]==f) h3++;
	x=2,x1=1,x2=2,x3=3;
	if(a[x][x1]==f && a[x][x2]==f && a[x][x3]==f) h3++;
	x=3,x1=1,x2=2,x3=3;
	if(a[x][x1]==f && a[x][x2]==f && a[x][x3]==f) h3++;
	x=1,x1=1,x2=2,x3=3;
	if(a[x1][x]==f && a[x2][x]==f && a[x3][x]==f) h3++;
	x=2,x1=1,x2=2,x3=3;
	if(a[x1][x]==f && a[x2][x]==f && a[x3][x]==f) h3++;
	x=3,x1=1,x2=2,x3=3;
	if(a[x1][x]==f && a[x2][x]==f && a[x3][x]==f) h3++;
	if(a[1][1]==f && a[2][2]==f && a[3][3]==f) h3++;
	if(a[3][1]==f && a[2][2]==f && a[1][3]==f) h3++;
	if(xx3!=0 && h3!=0) cout<<"No"<<endl;
	else cout<<"Yes"<<endl;
}
int main(){
	freopen("chess.in","r",stdin);
	freopen("chess.out","w",stdout);
	scanf("%lld",&t);
	while(t--){
		int x=0,h=0,s=0;
		for(int i=1;i<=3;i++){
			for(int j=1;j<=3;j++){
				cin>>a[i][j];
				if(a[i][j]=='X') x++,s++;
				if(a[i][j]=='H') h++,s++;
			}
		}
		if(x<h || max(h,x)-min(h,x)>1 || (s==9 && x==h)){
			cout<<"No"<<endl;
			continue;
		}
		kl();
	}
	return 0;
}

