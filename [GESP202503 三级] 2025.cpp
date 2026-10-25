#include<bits/stdc++.h>
using namespace std;
int n;
int main(){
	cin>>n;
	for(int i=1;i<=2025;i++){
		if((n&i)+(n|i)==2025){
			cout<<i;
			return 0;
		}
	}
	cout<<-1;
	return 0;
}

