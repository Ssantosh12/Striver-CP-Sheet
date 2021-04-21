#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d",&t);
    map<string,int> mp;
    while(t--){
        int n,i,cnt;
        string s;
        cin>>s;
        if(mp[s]==0){
            printf("OK\n");
            mp[s]++;
        }
        else{
            cout<<s<<mp[s]<<"\n";
            mp[s]++;
        }
    }
}
