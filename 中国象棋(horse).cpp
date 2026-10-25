#include<bits/stdc++.h>
using namespace std;
char qp[12][12],s;
int hz,hx;
void xs(){
	cout<<endl;
	for(int i=1;i<=11;i++){
		for(int j=1;j<=11;j++){
			cout<<qp[i][j]; 
		}
		cout<<endl;
	}
	cout<<endl;
}
int js(){
	int sum=0;
	if(qp[hz+1][hx]=='.'){
		if(qp[hz+2][hx+1]=='a') sum++,qp[hz+2][hx+1]='X';
		if(qp[hz+2][hx-1]=='a') sum++,qp[hz+2][hx-1]='X';
	}
	if(qp[hz-1][hx]=='.'){
		if(qp[hz-2][hx+1]=='a') sum++,qp[hz-2][hx+1]='X';
		if(qp[hz-2][hx-1]=='a') sum++,qp[hz-2][hx-1]='X';
	}
	if(qp[hz][hx+1]=='.'){
		if(qp[hz+1][hx+2]=='a') sum++,qp[hz+1][hx+2]='X';
		if(qp[hz-1][hx+2]=='a') sum++,qp[hz-1][hx+2]='X';
	}
	if(qp[hz][hx-1]=='.'){
		if(qp[hz+1][hx-2]=='a') sum++,qp[hz+1][hx-2]='X';
		if(qp[hz-1][hx-2]=='a') sum++,qp[hz-1][hx-2]='X';
	}
	return sum;
}
int main(){
	/*
	freopen("horse.in","r",stdin);
	freopen("horse.out","w",stdout);
	*/
	for(int i=1;i<=11;i++){
		for(int j=1;j<=11;j++){
			cin>>s;
			if(s=='H'){
				hz=i;
				hx=j;
				qp[i][j]='H';
			}else if(s>='A' && s<='Z'){
				qp[i][j]='b';
			}else if(s>='a' && s<='z'){
				qp[i][j]='a';
			}else{
				qp[i][j]='.';
			}
		}
	}
	cout<<js();
	//xs();
	return 0;
}

