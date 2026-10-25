#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,j=0;
	double o=0;
	for(int i=1;1<=10;i++){
		cin>>a;
		if(i%2!=0){
			j+=i;
		}
		o+=i;
	}
	o/=10;
	cout<<j<<" "<<int(o);
	return 0;
}
