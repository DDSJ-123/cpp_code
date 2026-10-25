#include<bits/stdc++.h>
using namespace std;
int r,c;
char s[3000][3000];
int mf;
int main(){
    cin>>r>>c;
    for(int i=1;i<=r;i++){
    	for(int j=1;j<=c;j++){
    		cin>>s[i][j];
		}
	}
	
	for(int i=1;i<=r;i++){
		for(int j=1;j<=c;j++){
			if(s[i][j]>='0' && s[i][j]<='9'){
				for(int i1=1;i1<=r;i1++){
					for(int j1=1;j1<=c;j1++){
						int hf=abs(i1-i)+abs(j1-j);
						if(hf<=int(s[i][j]-'0') && s[i1][j1]!=s[i][j] && s[i1][j1]=='#'){
							 s[i1][j1]='.';
						}
					}
				}
				s[i][j]='.';
			}
		}
	}
	for(int i=1;i<=r;i++){
		for(int j=1;j<=c;j++){
			cout<<s[i][j];
		}
		cout<<endl;
	}
	return 0;
}

