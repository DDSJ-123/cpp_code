#include<bits/stdc++.h>
using namespace std;

int t;
string sr,sr1,sc;

int main(){
    
    freopen("carry.in","r",stdin);
    freopen("carry.out","w",stdout);
    
    cin>>t;
    while(t--){
        cin>>sr1;
        sr='0';
        sc="";
        sr+=sr1;
        for(int i=sr.size()-1;i>1;i--){
            if(sr[0]=='0'){
                sc=sr.substr(1);
            }else{
                sc=sr;
            }
            cout<<sc<<" -> ";
            if(sr[i]+1>='5'){
                int l=i-1;
                while(sr[l]+1>'9' && l>0){
                    sr[l]='0';
                    l--;
                }
                sr[l]+=1;
            }           
            sr[i]='0';
        }
        if(sr[0]=='0'){
            sc=sr.substr(1);
        }else{
            sc=sr;
        }
        cout<<sc<<"\n";
    }
    return 0;
}