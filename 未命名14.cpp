#include<bits/stdc++.h>
using namespace std;
int a[11],n;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		int s=i;
		while(s!=0){
			if(s%10==0){
				a[1]++;
			}else if(s%10==1){
				a[2]++;
			}else if(s%10==2){
				a[3]++;
			}else if(s%10==3){
				a[4]++;
			}else if(s%10==4){
				a[5]++;
			}else if(s%10==5){
				a[6]++;
			}else if(s%10==6){
				a[7]++;
			}else if(s%10==7){
				a[8]++;
			}else if(s%10==8){
				a[9]++;
			}else if(s%10==9){
				a[10]++;
			}
			s/=10;
		}
	}
	for(int i=1;i<=10;i++){
		cout<<a[i]<<endl; 
	}
	return 0;
}

