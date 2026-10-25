#include<bits/stdc++.h>
using namespace std;
int main(){
	int x,y,n;
	cin>>n;
	x=n/100;
	y=n%100;
	cout<<x+y<<"\n";
	printf("%.1f",x*1.0/y);
	return 0;
} 
