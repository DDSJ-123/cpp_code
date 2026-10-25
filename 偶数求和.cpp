#include<bits/stdc++.h>
using namespace std;
int main(){
	int m,n,s=0;
	cin>>m>>n;
	for(int i=m;i<=n;i++){
		if(i%2==0){
			s+=i; 
		}
	}
	cout<<s;
	return 0;
}
