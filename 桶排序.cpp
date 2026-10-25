#include<bits/stdc++.h>
using namespace std;
int n,a[100]; 
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		int x;
		cin>>x;
		a[x]++;
	}
	for(int i=1;i<=100;i++){
		if(a[i]!=0){
			for(int j=1;j<=a[i];j++){
				cout<<i<<" ";
			}
		}
	}
	return 0;
}

