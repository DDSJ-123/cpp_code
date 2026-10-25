#include<bits/stdc++.h>
using namespace std;
const int N=105;
int father_who[N];
int n,x,y;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		father_who[i]=i;
	}
	for(int i=1;i<=n-1;i++){
		cin>>x>>y;
		father_who[y]=x;
	}
	for(int i=1;i<=n;i++){
		int cnt=0;
		for(int j=1;j<=n;j++){
			if(father_who[j]==i && i!=j){
				cnt++;
			}
		}
		cout<<cnt<<" ";
	}
	return 0;
}



