#include <bits/stdc++.h>
using namespace std;

int main(){
    int t,cnt=0;
    scanf("%d",&t);
    while(t--){
        long long int ones=0,n,i;
        scanf("%lld",&n);
        for(i=63;i>=0;i--){
            if((1LL<<i)&n)
            ones++;
        }
        if(ones==1)
            cnt++;
    }
    printf("%d\n",cnt);
}
