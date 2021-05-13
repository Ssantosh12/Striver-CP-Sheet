#include <bits/stdc++.h>
using namespace std;

//idea is somewhat similar to TWO SUM using hasing problem, it's just that there was single target sum
//here we create two arrays of squares and cubes upto the sum of max two elements, & we use each sqr and cube in their arrays as the target
//to find if (target-curr val) is present in the array or not
//NOTE: arrays of squares and cubes cannot have same values(ex 8^2=64, 4^3=64) because then cnt of pairs will give more than the correct ans

int bsearch(vector<int> a,int n,int x){
    int mid,left=0,right=n-1;
    while(left<=right){
        mid=(left+right)/2;
        if(a[mid]==x) return mid;
        else if(a[mid]<x) left=mid+1;
        else right=mid-1;
    }
    return -1;
}

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int val,temp,ele,n,i,j,cnt=0,sum,mx1=0,mx2=0,target;
        scanf("%d",&n);
        map<int,int> mp;
        for(i=0;i<n;i++){
            scanf("%d",&ele);
            //finding two maximums out of n numbers
            if(ele>mx1){
                temp=mx1;
                mx1=ele;
                mx2=temp;
            }
            else if(ele>mx2)
                mx2=ele;
            mp[ele]++;
        }
        sum=mx1+mx2;

        vector<int> sqr,cube;
        for(i=1;i*i<=sum;i++)
            sqr.push_back(i*i);
        for(i=1;i*i*i<=sum;i++){
           if(bsearch(sqr,sqr.size(),(i*i*i))==-1)

                cube.push_back(i*i*i);
        }
        for(auto x: mp){
            //for each element we check if a square sum or a cube sum can be obtained
            for(i=0;i<sqr.size();i++){
                target=sqr[i]-x.first;
                if(target==x.first)
                    cnt=cnt+mp[target]*(mp[target]-1);

                else cnt=cnt+x.second*mp[target];
            }
            for(i=0;i<cube.size();i++){
                target=cube[i]-x.first;
                if(target==x.first)
                    cnt=cnt+mp[target]*(mp[target]-1);

                else cnt=cnt+x.second*mp[target];
            }
        }
        printf("%d\n",cnt/2);
    }
}
