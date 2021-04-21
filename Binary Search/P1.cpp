#include <bits/stdc++.h>
using namespace std;

int main(){
     //using both prefix sum array and multiset upper_bound in each query
     int n,q,i,pw,sum=0,ind;
     scanf("%d",&n);
     int a[n],pre[n];
     multiset<int> mst;
     for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        mst.insert(a[i]);
     }
     sort(a,a+n);
     for(i=0;i<n;i++){
        sum=sum+a[i];
        pre[i]=sum;
     }
     scanf("%d",&q);
     while(q--){
         scanf("%d",&pw);
         ind=distance(mst.begin(),mst.upper_bound(pw));
         printf("%d %d\n",ind,pre[ind-1]);
     }
}
