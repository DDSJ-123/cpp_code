#include<bits/stdc++.h>
using namespace std;
const int N=3010;
string a[N];
int n,m;
bool cmp(char x,char y){
	return x>y;
}
int main(){
	cin>>n>>m;
	int mi=1;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]<a[mi]) mi=i;
		sort(a[i].begin(),a[i].end(),cmp);
	}
	if(n==1){
		cout<<1;
		return 0;
	}
	for(int i=1;i<=n;i++){
		string h=a[i];
		reverse(h.begin(),h.end());
		int bj=1;
		for(int j=1;j<=n;j++){
			if(i!=j && h>a[j]){
				bj=0;
				break;
			}
		}
		cout<<bj;
	}
	return 0;
}

