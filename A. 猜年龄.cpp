#include<bits/stdc++.h>
using namespace std;

int main(){
	for(int i=1;i<=9;i++){
		for(int j=0;j<=9;j++){
			if((i*10+j)-(j*10+i)==27){
				cout<<i*10+j<<"\n";
			}
		}
	} 
	return 0;
}



