#include<bits/stdc++.h>
using namespace std;
bool ss[60]={false,false,true,true,false,true,false,true,false,false,false,true,false,true,false,false,false,true,false,true,false,false,false,true,false,false,false,false,false,true,false,true,false,false,false,false,false,true,false,false,false,true,false,true,false,false,false,true,false,false,false};
int sum=0,n;
int a[60];
bool bj[60];

void print(int w){
	for(int i=1;i<=w;i++){
		cout<<a[i]<<" ";
	}
	cout<<"\n";
}

void dfs(int w){
	if(w==n+1 && ss[a[n]+a[1]]){
		if(sum==10){
			exit(0); 
		}
		sum++;
		print(w-1);
		return ;
	}
	for(int i=2;i<=n;i++){
		if(bj[i]==false && w<=n){
			if(w!=1){
				if(ss[a[w-1]+i]){
					a[w]=i;
					bj[i]=true;
					dfs(w+1);
					bj[i]=false;
				}
			}else{
				a[w]=i;
				bj[i]=true;
				dfs(w+1);
				bj[i]=false;				
			}
		}
	}
}

int main(){
	cin>>n;
	a[1]=1;
	bj[1]=true;
	if(n%2==1){
		return 0;	
	}
	dfs(2);
	return 0;
}



