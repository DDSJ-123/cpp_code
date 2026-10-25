#include<bits/stdc++.h>
using namespace std;
int main(){
	int m,n,a;
	cin>>m>>n>>a;
	for(int i=m;i<=n;i++){
		if(i%a==0){
			cout<<i;
			break;
		}
	}
	return 0;
} 
