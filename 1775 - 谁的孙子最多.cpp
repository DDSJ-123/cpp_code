#include<bits/stdc++.h>
using namespace std;
const int N=10005;
int father_who[N];
int son_ans[N];
int sz[N];
int src,son,n;
int ma=0;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		father_who[i]=i;
	}
	for(int i=1;i<=n;i++){
		cin>>src;
		for(int j=1;j<=src;j++){
			cin>>son;
			father_who[son]=i;
		}
		son_ans[i]=src;
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(i!=j && father_who[j]==i){
				sz[i]+=son_ans[j];
			}
		}
		if(sz[ma]<sz[i]){
			ma=i;
		}
	}
	cout<<ma<<" "<<sz[ma];
	return 0;
}



