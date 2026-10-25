#include<bits/stdc++.h>
using namespace std;
int n,sr,z,sum;
int a[100005];
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>sr;
		a[sr]++;
	}
	for(int i=1;i<=n*2;i++){
		if(a[i]==0){
			if(z>0){
				z--;
				sum++;
			}
		}else{
			z++;
		}
	}
	cout<<sum;
	return 0;
}



