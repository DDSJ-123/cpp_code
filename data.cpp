#include<bits/stdc++.h>
//#include<Windows.h>
using namespace std;
int main( )
{
	srand(time(0));//³õÊ¼»¯ÑùÀı 
	int a,b,c;
	bool bj=true;
	while(bj){
		a=rand()%1000+1;
		b=rand()%1000+1;
		c=rand()%1000+1;
		if(a<=b && b<=c) bj=false;
	} 
	cout<<a<<" "<<b<<" "<<c;
	//Sleep(1000);
    
	return 0;
}

