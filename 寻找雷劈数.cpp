#include<bits/stdc++.h>
using namespace std;
int main(){
	for(int i=1000;i<=9999;i++){
		int a;
		a=(i/100+i%100)*(i/100+i%100);
		if(a==i){
			cout<<i<<endl;
		}
	}
	return 0;
} 
