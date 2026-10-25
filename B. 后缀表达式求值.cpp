#include<bits/stdc++.h>
using namespace std;
stack<int> q;
string sr;
int n,s,nn; 
int zh(string s){
    int ml=0;
    for(int i=0;i<s.size();i++){
        ml=ml*10+(s[i]-'0');
    }
    return ml;
} 
int main(){
    cin>>sr;
    while(sr!="@"){
        if(sr=="+"){
            n=q.top();
            q.pop();
            nn=q.top();
            q.pop();
            q.push(nn+n);
        }else if(sr=="-"){
            n=q.top();
            q.pop();
            nn=q.top();
            q.pop();
            q.push(nn-n);
        }else if(sr=="*"){
            n=q.top();
            q.pop();
            nn=q.top();
            q.pop();
            q.push(nn*n);
        }else if(sr=="/"){
            n=q.top();
            q.pop();
            nn=q.top();
            q.pop();
            q.push(nn/n);
        }else{
            q.push(zh(sr));    
        } 
        cin>>sr;
    }
    cout<<q.top();
    return 0;
}
