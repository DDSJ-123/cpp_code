#include<bits/stdc++.h>
using namespace std;
bool ss[25]={false,false,true,true,false,true,false,true,false,false,false,true,false,true,false,false,false,true,false,true,false,false,false,true,false};
int sum=0,n;
int a[20];
bool bj[20];

void print(int w){
	cout<<sum<<":";
	for(int i=1;i<=w;i++){
		cout<<a[i]<<" ";
	}
	cout<<"\n";
}

void dfs(int w){
	if(w==n+1 && ss[a[n]+a[1]]){
		sum++;
		print(w-1);
		return ;
	}
	for(int i=1;i<=n;i++){
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
	dfs(1);
	cout<<"total:"<<sum;
	return 0;
}



