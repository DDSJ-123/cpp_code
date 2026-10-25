#include<bits/stdc++.h>
using namespace std;
string zh1(int n){ //将十进制转十六进制 
	if(n<10){
		return to_string(n);
	}
	if(n==10) return "A";
	if(n==11) return "B";
	if(n==12) return "C";
	if(n==13) return "D";
	if(n==14) return "E";
	if(n==15) return "F";
}
string zh(char a){ //将字符转换为数字 
	if(a<='9') return to_string(int(a-48));
	if(a=='A') return "10";
	if(a=='B') return "11";
	if(a=='C') return "12";
	if(a=='D') return "13";
	if(a=='E') return "14";
	if(a=='F') return "15";
} 
string sr,sc;//输入,输出
string zj;//中介,将输入转换为10进制 
int jz1,jz2;//进制1转换为进制2 
int main(){
    cin>>jz1>>jz2;//输入"进制1"和"进制2"
	cin>>sr;
	if(sr=="0"){//如果"输入"为0直接输出0 
		cout<<0;
		return 0;
	} 
	int n=1;
	for(int i=sr.size()-1;i>=0;i--){//"输入"转换为10进制 
		zj+=n*zh(sr[i]);
		n*=jz1;
	}
	cout<<zj<<endl;
	if(jz2==10){ //如果"进制2"为十进制时直接输出"中介" 
		cout<<zj;
	}else{	
	    while(zj!=0){
		    sc+=zh1(zj%jz2);
		    zj/=jz2;
	    } 
	    reverse(sc.begin(),sc.end());
	    cout<<sc;
    }
	return 0;
}

