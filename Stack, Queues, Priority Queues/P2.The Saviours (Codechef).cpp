#include <bits/stdc++.h>
using namespace std;

int main(){
  //*=food and 0=house, * can feed next two houses, find if all houses can be fed
  //simple , just using stack as a container (or a bag ) which makes the problem easier
  //can be done with simple iteration too
    int t;
    scanf("%d",&t);
    while(t--){
        int n,i,house=0,cnd=1;
        string s;
        cin>>s;
        stack<char> stk;
        for(i=0;i<s.size();i++){
            if(s[i]=='*'&&stk.empty())
                    stk.push('*');
            else{
                if(stk.empty()){
                    cnd=0;
                    break;
                }
                else{
                    house++;
                    if(house==2){
                        house=0;
                        stk.pop();
                    }
                }
            }
        }
        if(cnd==1) printf("YES\n");
        else printf("NO\n");
    }
}
