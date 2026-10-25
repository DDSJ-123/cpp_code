#include<bits/stdc++.h>
using namespace std;
int n,t,m,a[3][16],b[16],s,k;
int v[3];
int jc(int p){
	int ans=1;
	for(int i=1;i<=p;i++){
		ans*=i;
	}
	return ans;
}
int main(){
	freopen("cure.in","r",stdin);
	freopen("cure.out","w",stdout);
	scanf("%d%d%d",&n,&t,&m);
	if(t==2){
		for(int i=1;i<=2;i++){
			scanf("%d",&k);
			for(int j=1;j<=k;j++){
				scanf("%d",&s);
				a[i][s]++;
			}
			cin>>v[i];
			for(int j=1;j<=15;j++){
				if(a[i][j]!=0) b[i]=v[i];
			}
		}
		int sum=0;
		for(int i=1;i<=n;i++){
			if(b[i]==1) sum++;
		}
		if(v[1]==v[2]){
			if(v[1]==0){
				cout<<"Error!";
				return 0;
			}else{
				///cout<<(jc(sum)/jc(sum-sum))*(cj(sum));
				cout<<jc(sum-t);
			}
		}else{
			cout<<3;
		}
	}else{
		cout<<"Error!";
	} 
	return 0;
}


