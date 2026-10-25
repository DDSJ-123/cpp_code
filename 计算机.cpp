#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	char s;
	cin>>n>>m>>s;
	switch(s){
		case '+':
			cout<<n+m;
			break;
		case '-':
			cout<<n-m;
			break;
		case '/':
			if(m==0){
				cout<<"Divided by zero!";
			}
			else{
				cout<<n/m;
			}
			break;
		case '*':
			cout<<n*m;
			break;
	   default:
		    cout<<"lnvalid operator!";
    }
	return 0;
} 
