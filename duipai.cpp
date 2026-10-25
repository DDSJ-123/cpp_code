#include<bits/stdc++.h>
using namespace std;
int main( )
{
	int t=1;//统计测试第几组
	while(1){
		cout<<"测试样例:"<<t++ <<endl;
		system("data.exe > data.in");
		system("a.exe < data.in > a.out");
		system("b.exe < data.in > b.out");
		if(system("fc a.out b.out > 错误样例.txt")){
			cout<<"当前样例测试错误";
			break; 
		}
		cout<<"当前样例没问题，继续测试\n";
		
	} 
    
	return 0;
}

