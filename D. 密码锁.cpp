#include<bits/stdc++.h>
using namespace std;

int pd(char m,char z){
	if(m==z){
		return 0;
	}
	if(m>z){
		int a1=int(m-z);
		int a2=int('9'-z+m);
		return min(a1,a2);
	}
	int a1=int(z-m);
	int a2=int('9'-m+z);
	return min(a1,a2); 
}

string sr,mb;
int ans;

void dfs(int c,int z){
	if(c==4){
		if(sr==mb){
			ans=min(ans,z);
		}
		return ;
	}
	if(c!=3){
		swap(sr[c],sr[c+1]);
		dfs(c+1,z+1);
		swap(sr[c],sr[c+1]);
	}else{
		int lsc=pd(mb[c],sr[c]);
		sr[c]=mb[c];
		dfs(c+1,z+lsc);
	}
}

int main(){
	cin>>sr>>mb;
	dfs(0,0);
	cout<<ans;
	return 0;
}


