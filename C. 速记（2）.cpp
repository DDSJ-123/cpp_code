#include<bits/stdc++.h>
using namespace std;
const int N=100005;
int n,sum,sr;
int a[N],b[N],c[N]; 
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>sr;
		a[sr]++;
	} 
	for(int i=1;i<=n;i++){
		cin>>sr;
		b[sr]+=a[sr];
	} 
	for(int i=1;i<=n;i++){
		cin>>c[i];
	} 
	for(int i=1;i<=n;i++){
		sum+=b[c[i]];
	}
	cout<<sum;
	return 0;
}



