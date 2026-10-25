#include<bits/stdc++.h>
using namespace std;
int sum,x,y;
int main(){
	cin>>x>>y;
	for(int i=1;i<=x;i++){
		for(int j=1;j<=y;j++){
			sum+=(i*100+j);
		}
	}
	cout<<sum;
	return 0;
}



