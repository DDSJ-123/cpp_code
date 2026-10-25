#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	for(int i=100;i<=999;i++){
		n=(i/100)*(i/100)*(i/100)+(i/10%10)*(i/10%10)*(i/10%10)+(i%10)*(i%10)*(i%10);
		if(n==i){
		
			cout<<i<<endl;
		}
	
	}
	return 0;
} 
