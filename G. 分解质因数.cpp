#include<bits/stdc++.h>
using namespace std;
void pd(int nn){
	cout<<nn<<"=";
	bool lo=false;
	int ss=2;
	while(nn>=2){
		if(nn%ss==0){
			if(!lo) printf("%d",ss),lo=true;
			else printf("*%d",ss);
			nn/=ss;
		}else{
			ss++;
		}
	}
	cout<<"\n";
}
int n,m;
int main(){
	cin>>n>>m;
	for(int i=n;i<=m;i++) pd(i);
	return 0;
}


