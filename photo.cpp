#include<bits/stdc++.h>
using namespace std;

const int N = 100005;

int a[N];

struct pp{
	int q,p;
}b[N];

int c[N];

int ma;
int n,m,r;

bool cmp(pp xl,pp yl){
	return xl.p>yl.p;
}

bool cmp2(int xl,int yl){
	return xl>yl; 
}

int main(){
	
	freopen("photo.in","r",stdin);
	freopen("photo.out","w",stdout);
	
	cin>>n>>m>>r;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	for(int i=1;i<=m;i++){
		cin>>b[i].q>>b[i].p;
	}
	sort(b+1,b+m+1,cmp);
	for(int i=1;i<=r;i++){
		cin>>c[i];
	}
	sort(c+1,c+r+1,cmp2);
	for(int i=0;i<=r;i++){
		int ans=0,sum=0,zp=0;
		for(int j=n;j>i;j--){
			zp+=a[j];
		}
		for(int j=1;j<=i;j++){
			ans+=c[j];
		}
		for(int j=1;j<=m;j++){
			if(zp>=b[j].q){
				sum+=b[j].p*b[j].q;
			}else{
				sum+=zp*b[j].p;
			}
			zp-=b[j].q;
			if(zp<=0){
				break;
			}
		}
		ma=max(ma,ans+sum);
	}
	cout<<ma;
	return 0;
}



