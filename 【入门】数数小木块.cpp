#include<bits/stdc++.h>
using namespace std;
int s(int n){
	if(n==1) return 1;
	else return s(n-1)+n;
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

