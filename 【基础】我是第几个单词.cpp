#include<bits/stdc++.h>
using namespace std;
string s,s1,s2,s3[256]; 
int main(){
	getline(cin,s);
	getline(cin,s1);
	int a=0,a1=0,a2=0;
	for(int i=0;i<=s.size();i++){
	    if(a==1){
		    a1++;
			s3[a1]=s2;
			s2="";
			a=0;	
		}
		if(s[i]!=' ' && s[i]!='.'){
			s2+=s[i];
			a2++;
			//cout<<s[i]<<" "<<a2<<endl;
		}else{
		    a++;	
		}		
	}
	a2--;
	/*for(int i=1;i<=a1+1;i++){
		cout<<s3[i]<<endl;
	}*/
	int z=0,a3=0;
	for(int i=1;i<=a1+1;i++){
		//cout<<s3[i]<<endl;
		if(s3[i]==s1){
			z=1;
			a3=i;
			break;
		}
	}
	if(z==1){
		cout<<a3;
	}else{
		cout<<a2;
	}
	return 0;
}

