#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int pw=10,ele,num=0,n,i,odd=0,cnt=0;
        scanf("%d",&n);
      //can't take inputof integer having 3000 digits, so we take it as a string input
        string s;
        cin>>s;
        for(i=0;i<s.size();i++){
          //converting each character into integer
            ele=int(s[i])-48;
            if(ele&1){
                cnt++;
                num=num+ele*pw;
                pw=pw/10;
                if(cnt==2)
                    break;
            }
        }
        if(cnt==2)
            printf("%d\n",num);
        else printf("-1\n");
    }
}
