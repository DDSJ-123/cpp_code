#include<bits/stdc++.h>
using namespace std;
int n; 
int a;
int x,y;
int s;
int main(){
	cin>>n;
	int i; 
	for(i=1;a<n;i++) a+=i;
	i--;
	if(i%2!=0){
		x=1;
		y=i;
		while(a!=n){
			x++;
			y--;
			a--;
		}
	}else{
		x=i;
		y=1;
		while(a!=n){
			x--;
			y++;
			a--;
		}
		
	}	
	cout<<x<<"/"<<y<<"\n";
	return 0;
}



