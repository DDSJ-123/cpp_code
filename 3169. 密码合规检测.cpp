#include<bits/stdc++.h>
using namespace std;
string sr,s;
void pd(string lz){
	if(lz.size()>=6 && lz.size()<=12){
		bool sz=false,dzm=false,xzm=false,fh=false;
		for(int i=0;i<lz.size();i++){
			if(lz[i]>='0' && lz[i]<='9'){
				sz=true;
			}else if(lz[i]>='a' && lz[i]<='z'){
				xzm=true;
			}else if(lz[i]>='A' && lz[i]<='Z'){
				dzm=true;
			}else if(lz[i]=='!' || lz[i]=='@' || lz[i]=='#' || lz[i]=='$'){
				fh=true;
			}else{
				return ;
			}
		}
		int sum=0;
		if(fh){
			if(sz) sum++;
			if(xzm) sum++;
			if(dzm) sum++;
			if(sum>=2){
				cout<<lz<<"\n";
			}
		}
	}
}
int main(){
	cin>>sr;
	int n=sr.find(','),l=0,a=0;
	while(n!=-1){
		s=sr.substr(l,n-l);
		pd(s);
		l=n+1;
		n=sr.find(',',n+1);
	}
	s=sr.substr(l,n-l);
	pd(s);
	return 0;
}



