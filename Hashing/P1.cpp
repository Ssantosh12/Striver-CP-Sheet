#include <bits/stdc++.h>
using namespace std;

int main(){
    int i,mx=0;
    string s;
    getline(cin,s);
    map<char,int> mp;
    for(i=0;i<s.size();i++){
        //if(s[i]!=' ')
            mp[s[i]]++;
    }
    for(auto x: mp){
        if(x.second>mx)
            mx=x.second;
    }
    for(auto x: mp){
        if(x.second==mx){
            cout<<x.first<<" "<<x.second<<"\n";
            break;
        }
    }
}
