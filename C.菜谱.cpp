#include<bits/stdc++.h>
using namespace std;
string a[4];
int s[4][26];
int n;
string sr;
bool pd(string lz){
	bool bj[4][4];
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			bj[i][j]=false;
		}
	}
	for(int i=0;i<lz.size();i++){
		int jl=lz[i]-'A';
		for(int j=0;j<4;j++){
			if(s[j][jl]>0){
				bj[i][j]=true;
			}
		}
	}
	if(lz.size()==1){
		for(int i=0;i<4;i++){
			if(bj[0][i]==true){
				return true;
			}
		}
		return false;
	}
	if(lz.size()==2){
		for(int i=0;i<4;i++){
			if(bj[0][i]==true){
				for(int j=0;j<4;j++){
					if(bj[1][j]==true && j!=i){
						return true;
					}
				}
			}
		}
		return false;
	}
	if(lz.size()==3){
		for(int i=0;i<4;i++){
			if(bj[0][i]==true){
				for(int j=0;j<4;j++){
					if(bj[1][j]==true && j!=i){
						for(int k=0;k<4;k++){
							if(bj[2][k]==true && k!=j && k!=i){
								return true;
							}
						}
					}
				}
			}
		}
		return false;
	}
	if(lz.size()==4){
		for(int i=0;i<4;i++){
			if(bj[0][i]==true){
				for(int j=0;j<4;j++){
					if(bj[1][j]==true && j!=i){
						for(int k=0;k<4;k++){
							if(bj[2][k]==true && k!=j && k!=i){
								for(int o=0;o<4;o++){
									if(bj[3][o]==true && o!=i && o!=j && o!=k){
										return true;
									}
								}
							}
						}
					}
				}
			}
		}
		return false;
	}
	return false;
}
int main(){
	cin>>n;
	for(int i=0;i<4;i++){
		cin>>a[i];
		for(int j=0;j<a[i].size();j++){
			s[i][int(a[i][j]-'A')]++;
		}
	}
	for(int i=0;i<n;i++){
		cin>>sr;
		if(pd(sr)){
			cout<<"YES\n";
		}else{
			cout<<"NO\n";
		}
	}
	return 0;
}



