#include<bits/stdc++.h>
using namespace std;
int s(int n){
	if(n==1) return 1;
	else return (n-1)+s(n-1);
} 
int main(){
	int sum=0;
	for(int i=1;i=i;i++){
		sum+=s(i);
		if(sum>=5000){
			cout<<sum;
			return 0;
		}
	}
	return 0;
}
