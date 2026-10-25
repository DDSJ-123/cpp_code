#include<bits/stdc++.h>
using namespace std;
int n,n1,h[105];
char bm[105][105];
int main(){
    cin>>n>>n1;
    int n2=n;
    for(int i=1;i<=n;i++){
    	int s=0;
    	for(int j=1;j<=n1;j++){
    		cin>>bm[i][j];
    		if(bm[i][j]=='.'){
    			s++;
    			h[j]++;
			}
		}
		if(s==n1){
			i--;
			n--;
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n1;j++){
		    if(h[j]!=n2){
			    cout<<bm[i][j];		    	
			}		
		}
		cout<<endl;
	}
	return 0;
}

