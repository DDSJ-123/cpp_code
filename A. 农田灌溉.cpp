#include<bits/stdc++.h>
using namespace std;

int n,x,m;
int e; 

int main(){
	cin>>n>>x>>m;
	e=m%n;
	e+=x;
	cout<<(e-1>0?e-1:n)-(e>n?n:0);
	return 0;
}



