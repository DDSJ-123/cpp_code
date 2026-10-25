#include<bits/stdc++.h>
using namespace std;
int n,ans,s=0;
const int N=50;
char a[N][N];
int pd(int x,int y){
    for(int i=1;i<=n;i++){
		if(a[x-i][y]=='#' || a[x-i][y]=='*' || a[x-i][y]==' '){
        	break;
		}else if(a[x-i][y]!='+'){
			s++;
			a[x-i][y]='+';
		}		
	}
	for(int i=1;i<=n;i++){
		if(a[x+i][y]=='#' || a[x+i][y]=='*' || a[x+i][y]==' '){
        	break;
		}
		if(a[x+i][y]!='+'){
			s++;
		}
		a[x+i][y]='+';
	}
	for(int i=1;i<=n;i++){
		if(a[x][y-i]=='#' || a[x][y-i]=='*' || a[x][y-i]==' '){
        	break;
		}
		if(a[x][y-i]!='+'){
			s++;
		}
		a[x][y-i]='+';
	}
	for(int i=1;i<=n;i++){
		if(a[x][y+i]=='#' || a[x][y+i]=='*' || a[x][y+i]==' '){
        	break;
		}
		if(a[x][y+i]!='+'){
			s++;
		}
		a[x][y+i]='+';
	}
} 
int main(){
    cin>>n;
    int x1=0,y1=0;
    for(int i=1;i<=n;i++){
    	for(int j=1;j<=n;j++){
    		cin>>a[i][j];
    		if(a[i][j]=='*'){
    			ans++;
    			x1=i,y1=j;
			}
		}
	}
	if(ans==1){
		cout<<pd(x1,y1);
		return 0;
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(a[i][j]=='*'){
				pd(i,j);
			}
		}
	}
	cout<<s;	
	return 0;
}
