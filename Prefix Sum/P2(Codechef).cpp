#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long int ele,n,i,sum=0;
        scanf("%lld",&n);

        for(i=0;i<n;i++){
            scanf("%lld",&ele);
            if(ele==-1)
                ele=sum/i;
            printf("%lld ",ele);
            sum=sum+ele;
        }
        cout<<"\n";
    }
}
