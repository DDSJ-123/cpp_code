#include<bits/stdc++.h>
using namespace std;
const int N = 10005;
int n,m;
int sr;
int r,l;
int a[N],b[N],c[N];
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>sr;
		a[i]=a[i-1];
		b[i]=b[i-1];
		c[i]=c[i-1];
		if(sr==1){
			a[i]++;
		}else if(sr==2){
			b[i]++;
		}else{
			c[i]++;
		}
	}
	while(m--){
		cin>>l>>r;
		cout<<max(0,a[r]-a[l-1])<<" "<<max(0,b[r]-b[l-1])<<" "<<max(0,c[r]-c[l-1])<<"\n"; 
	}
	return 0;
}



