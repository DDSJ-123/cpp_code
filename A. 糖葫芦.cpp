#include<bits/stdc++.h>
using namespace std;
int n,x,y; 
int main(){
	cin>>n>>x>>y;
	n=max(n-(n/x)*x+(n/x)*y,n);
	cout<<n;
	return 0;
}



