
#include <bits/stdc++.h>
using namespace std;

int main(){
    int j,t,i;
    scanf("%d",&t);
  
    //Using Pre Computation technique
    //generating all primes upto 10^6 using Sieve of Eratosthenes
  
    bool primes[1000000];
    for(i=0;i<1000000;i++)
        primes[i]=true;
    primes[0]=false; primes[1]=false;
    for(i=2;i*i<1000000;i++){
        if(primes[i]){
            for(j=i*i;j<1000000;j=j+i)
                primes[j]=false;
        }
    }
    set<int> st;
    for(i=0;i<1000000;i++){
        if(primes[i])
            st.insert(i);
    }
    st.insert(1000003); //sieve generated only primes upto 10^6 and last prime upto 10^6 is 999983
                        //so one more prime is inserted (1000003) which acts as the prime on right side of inputs greater than 999983
  
    set<int>::iterator it;
    while(t--){
        int pl,pr,n,ans;
        scanf("%d",&n);
        if(n==1||n==2)
            ans=2;
        else{
            it=st.lower_bound(n);
            if(*it!=n)
                it--;
            pl=*it;
            it=st.upper_bound(n);
            pr=*it;
            if((n-pl)<=(pr-n))
                ans=pl;
            else ans=pr;
        }
        printf("%d\n",ans);
    }
}
