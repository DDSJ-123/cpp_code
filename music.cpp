#include<bits/stdc++.h>
using namespace std;
const int N = 105;
int n,m;
bool bj[N];
bool bjw[N];
int ans;
int main(){
	
	freopen("music.in","r",stdin);
	freopen("music.out","w",stdout);
	
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		int srn,sr;
		memset(bjw,false,sizeof(bjw));
		cin>>srn;
		for(int j=1;j<=srn;j++){
			cin>>sr;
			bjw[sr]=true;
		}
		for(int j=1;j<=m;j++){
			if(i==1){
				if(bjw[j]){
					bj[j]=true;
				}
			}else if(bj[j] && bjw[j]){
				bj[j]=true;
			}else{
				bj[j]=false;
			}
		}
	} 
	for(int i=1;i<=m;i++){
		if(bj[i]) ans++;
	}
	cout<<ans;
	return 0;
}



