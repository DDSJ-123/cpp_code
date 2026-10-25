#include<bits/stdc++.h>
using namespace std;

struct pp{
	int x,y;
	void jh(){
		if(y>x) swap(x,y);
		return ;
	} 
};

pp a,b;
int t;

int main(){
	cin>>t;
	while(t--){
		cin>>a.x>>a.y>>b.x>>b.y;
		a.jh();
		b.jh();
		if((a.x<b.x && a.y<b.y && a.x>b.y) || (a.x>b.x && a.y>b.y && a.x<b.y)){
			cout<<"YES";
		}else{
			cout<<"NO";
		}
		if(t!=0) cout<<"\n";
	}
	return 0;
}



