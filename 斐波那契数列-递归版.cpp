#include<bits/stdc++.h>
using namespace std;
int n;
int dg(int i){
	if(i==1 || i==2) return 1;
	else return dg(i-1)+dg(i-2);
}
int main(){
	cin>>n;
	cout<<dg(n);
	return 0;
}

