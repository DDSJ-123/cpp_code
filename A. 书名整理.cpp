#include<bits/stdc++.h>
using namespace std;
int n,b;
int a[1000005][27];
bool db(int p,int p1){
	for(int i=1;i<=26;i++){
		if(a[p][i]!=a[p1][i]){
			return false;
		}
	}
	return true;
}
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
    	string s;
		cin>>s;
		for(int j=0;j<s.size();j++){
			a[i][int(s[j]-96)]++;
		} 
	}
	/*
	cout<<endl;
	for(int i=1;i<=n;i++){
		cout<<i<<"£º "; 
		for(int j=1;j<=26;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	*/
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			if(db(i,j)){
				b++;
			}
			//cout<<db(i,j)<<endl;
		} 
	}
	cout<<b;
	return 0;
}

