#include<bits/stdc++.h>
using namespace std;
int n;
int main(){
    cin>>n;
    int z=2024;
    cout<<2024<<" "<<4<<" "<<4<<endl;
    for(int i=1;i<n;i++){
    	int s=z/10%10;
    	if(s==2) z+=130;
    	if(s==5) z+=90;
    	if(s==4) z+=130;
    	if(s==7) z+=50;
    	cout<<z<<" "<<4<<" "<<4<<endl;
	}
	return 0;
}

