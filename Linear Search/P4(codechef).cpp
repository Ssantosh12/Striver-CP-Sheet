#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int i,cnt=0,cnd=0;
        string s;
        cin>>s;
        //we have to count no. of continuous 1's
        //non overlapping problem , can be solved with just breaking points
        for(i=0;i<s.size();i++){
            if(s[i]=='1'){
                cnd=1;
                if(i==(s.size()-1))
                    cnt++;
            }
            else{
                if(cnd==1){
                    cnt++;
                    cnd=0;
                }
            }
        }
        if(cnt==1) printf("YES\n");
        else printf("NO\n");
    }
}
