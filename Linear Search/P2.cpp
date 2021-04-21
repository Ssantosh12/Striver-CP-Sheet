#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int ele,sum=0,cnt=0,n,i,mxmn=-INT_MAX;
    scanf("%lld",&n);
    for(i=0;i<n;i++){
        scanf("%lld",&ele);
        if(ele>=0){
            sum=sum+ele;
            cnt++;
        }
        else{
            if(ele>mxmn)
                mxmn=ele;
        }
    }
  //since we have to choose a non empty subset, then if all are -ve elements, we choose just 1 which is maximum among negatives
    if(cnt==0){
        cnt=1;
        sum=mxmn;
    }
    printf("%lld %lld\n",sum,cnt);
}
