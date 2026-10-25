#include<bits/stdc++.h>
using namespace std;

const int N = 200005;

struct pp{
	int xa,xb;
}a[N];

int n,k,p,r;

int ans;
int b[N];

int main(){
	
	freopen("exhibit.in","r",stdin);
	freopen("exhibit.out","w",stdout);
	
	cin>>n>>k>>p>>r;
	for(int i=1;i<=n;i++){
		cin>>a[i].xa>>a[i].xb;
		b[i]=b[i-1];
		if(a[i].xb<=p) b[i]++;
	}
	for(int i=1;i<=n;i++){
		for(int j=2;j<=n;j++){
			if(a[i].xa==a[j].xa){
				if(b[j]-b[i-1]>=r){
					ans++;
				}
			}
		}
	}
	cout<<ans;
	return 0;
}



