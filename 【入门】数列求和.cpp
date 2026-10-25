#include<bits/stdc++.h>
using namespace std;
int s(int n){
	if(n==1) return 1;
	else return (n-1)+s(n-1);
} 
int main(){
	int n,sum=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		sum+=s(i);
	}
	cout<<sum;
	return 0;
}
