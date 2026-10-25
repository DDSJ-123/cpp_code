#include<bits/stdc++.h>
using namespace std;
int main(){
	for(int i=1;i<=50;i++){
        int j=50-i;
        if(i*4+j*2==100){
            cout<<j<<" "<<i;
        }
    }
	return 0;
} 
