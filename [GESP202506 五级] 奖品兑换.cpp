#include<bits/stdc++.h>
using namespace std;
int n,m,a,b; 
int main(){
	cin>>n>>m;
	cin>>a>>b;
	int i,j;
	for(i=0;i==i;i++){
		if(n-a*i<0 || m-b*i<0){
			i--;
			break;
		}
	}
	n-=a*i;
	m-=b*i;
	for(j=0;j==j;j++){
		if(n-b*j<0 || m-a*j<0){
			break;
		}
	}
	cout<<i+j;
	return 0;
}



