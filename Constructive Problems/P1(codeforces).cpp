#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int k,n,i,j,sum=0;
        scanf("%d%d",&n,&k);
        int a[n],b[n];
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        for(i=0;i<n;i++)
            scanf("%d",&b[i]);
        sort(a,a+n);
        sort(b,b+n);
        i=0; j=n-1;
        while(k>0&&b[j]>a[i]){
            swap(a[i],b[j]);
            i++;
            j--;
            k--;
        }
        for(i=0;i<n;i++)
            sum=sum+a[i];
        printf("%d\n",sum);
    }
}
