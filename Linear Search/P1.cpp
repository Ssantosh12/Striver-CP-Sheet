#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,i;
    scanf("%d",&n);
    long long int a[n],k;
    for(i=0;i<n;i++)
        scanf("%lld",&a[i]);
    scanf("%lld",&k);
    for(i=0;i<n;i++){
        if(a[i]==k)
            printf("%d\n",i);
        break;
    }
}
