#include<bits/stdc++.h>
using namespace std;
int r,l;
int sum; 
int main(){
	cin>>r>>l;
	for(int i=max(r,10000);i<=min(l,99999);i++){
		if(i%10!=4 && i/10%10!=4 && i/100%10!=4 && i/1000%10!=4 && i/10000!=4){
			sum++;
		}
	}
	cout<<sum;
	return 0;
}



