#include<bits/stdc++.h>
using namespace std;
int t;
int a[2][4];
int ad,bd; 
int main(){
	cin>>t;
	while(t--){
		ad=0;
		bd=0;
		for(int i=0;i<2;i++){
			for(int j=0;j<4;j++){
				cin>>a[i][j];
			}
		}
		for(int i=0;i<4;i++){
			for(int j=0;j<4;j++){
				if(a[0][i]>a[1][j]) ad++;
			}
		} 
		for(int i=0;i<4;i++){
			for(int j=0;j<4;j++){
				if(a[1][i]>a[0][j]) bd++;
			}
		} 
		if(ad==0 || bd==0 || ad==16 || bd==16){
			cout<<"no\n";
		}else{
			cout<<"yes\n";
		}
	}
	return 0;
}



