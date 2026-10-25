#include<bits/stdc++.h>
using namespace std;
int n,m;
int main(){
	cin>>n>>m;
	for(int i=1;i<=n*m;i++){
		int s;
		cin>>s;
		int j=s,d=0;
		while(j){
			d*=10;
			d+=j%10;
			j/=10;
		}
		if(d==s){
			cout<<s<<endl;
		}
	}
	return 0;
}

