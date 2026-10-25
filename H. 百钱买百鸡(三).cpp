#include<bits/stdc++.h>
using namespace std;
int n;
int main(){
	cin>>n;
	int y=(4-n%4)%4;
	if(y*7<=0) cout<<(n*7-y)/4+1;
	else cout<<"No Answer.";
	return 0;
}



