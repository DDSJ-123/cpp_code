#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,a,b,c;
	cin>>n>>a>>b>>c;
	a=a+b+c;
	if(a<=n){
		cout<<n-a<<" YES";
	}
	else{
		cout<<a-n<<" NO";
	}
	return 0;
}
