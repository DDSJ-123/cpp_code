#include<bits/stdc++.h>
using namespace std;

int main(){
	int m,n,j=0,o=0;
	cin>>m>>n;
	for(int i=1;i<=n*m;i++){
		int x;
		cin>>x;
		if(x%2==0){
			o++;
		}else{
			j++;
		}
	}
	cout<<j<<" "<<o;
	return 0;
}

