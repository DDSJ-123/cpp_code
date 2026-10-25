#include<bits/stdc++.h>
using namespace std;
int a[105][105],x,s,y,z,s1,s2; 
int main(){
	cin>>x>>y;
	for(int i=1;i<=x;i++){
		for(int j=1;j<=y;j++){
			cin>>a[i][j];
		}
	}
	cin>>s1>>s2;
	z=a[s1][s2];
	for(int i=1;i<=y;i++){
		int q=a[s1][i];
		if(q==z){
			s++;
			//cout<<q<<endl;
		}
	}
	//cout<<endl;
	for(int i=1;i<=x;i++){
		int q=a[i][s2];
		if(q==z){
			s++;
			//cout<<q<<endl;
		}
	}
	cout<<s-2;
	return 0;
}

