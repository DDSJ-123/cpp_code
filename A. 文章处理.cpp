#include<bits/stdc++.h>
using namespace std;
string s,s1[105];
int sum;
bool k(string p){
	for(int j=0;j<sum;j++){
		if(s1[j]==p){
			return 0;
		}
	}
	return 1;
}
int main(){
	getline(cin,s);
	int a=s.find(" "),a1=0;
	for(int i=1;i=i;i++){
		string q=s.substr(a1,a-a1);
		if(k(q)){
	        s1[sum]=q;	
	        sum++;
		}	
		a1=a+1;	
		while(s[a1]==' '){
			a1++;
		}
		a=s.find(" ",a1);
		if(a==-1){
			string q=s.substr(a1,a-a1);
		    if(k(q)){
	        	s1[sum]=q;	
	        	sum++;
				for(int b=0;b<sum;b++){
					for(int b1=b+1;b1<sum;b1++){
						if(s1[b]>s1[b1]){
							swap(s1[b],s1[b1]);
						}
					}
				}
				for(int r=0;r<sum;r++){
					cout<<s1[r]<<endl;
				}
			}	
			return 0;
		}
	}
	return 0;
}

