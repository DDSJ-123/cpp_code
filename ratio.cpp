#include<bits/stdc++.h>
using namespace std;

const int N = 2*100005;

int n;
double p,q,z,zw;
double a[N];
int ans;

int main(){
	
	freopen("ratio.in","r",stdin);
	freopen("ratio.out","w",stdout);
	
	cin>>n>>p>>q;
	z=p*1.0/q;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(i!=j){
				zw=a[i]*1.0/a[j];
				if(zw>=z){
					ans++;
				}	
			}
		}
	}
	cout<<ans;
	return 0;
}



