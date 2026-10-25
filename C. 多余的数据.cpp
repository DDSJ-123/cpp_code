#include<bits/stdc++.h>
using namespace std;
int n,l;
int sum,m,mi=INT_MAX;
int main(){
	cin>>n>>l;
	for(int i=l;i<n+l;i++){
		if(abs(mi)>abs(i)){
			mi=i;
		}
		sum+=i;
	}
	cout<<sum-mi;
	return 0;
}



