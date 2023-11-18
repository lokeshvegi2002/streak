#include<bits/stdc++.h>
using namespace std;
int main(){
    
string s;
cin>>s;

int n=0;
int c=0;
if(s[0]>=48 and s[0]<=57){
      cout<<0;
      return 0;
}

if(s.size()<4){
    cout<<0;
    return 0;
}
for(auto i:s){
    if(i==' ' or i=='/'){
        cout<<0;
        return 0;
    }
    if(i>='A' and i<='B'){
        c=1;
    }
    if(i>='0' and i<='9'){
        n=1;
    }
}

if(n and c){
    cout<<1;
}
else{
    cout<<0;
}




















    
}