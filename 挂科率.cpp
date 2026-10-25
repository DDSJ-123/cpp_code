#include<bits/stdc++.h>
using namespace std;
int n,sum;
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
    	int s;
    	for(int i=1;i<=5;i++){
    		cin>>s;
    		if(s<60){
    			sum++;
    			break;
			}
		} 
	} 
	cout<<sum<<endl;
	printf("%.1f",sum*1.0/n);
	return 0;
}

