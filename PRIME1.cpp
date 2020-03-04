//Author : Vivek Dubey
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long int
#define f(i,s,e) for(int i=s;i<e;i++)
#define test ll t;cin>>t;while(t--)
#define mod 1000000007
#define pb push_back

void calcSieve(int N, vector<int> &primes){
    bool sieve[N+1];
    memset(sieve, false, sizeof(sieve));
    for(int i=2;i<=N;i++){
        if(!(sieve[i])){
            primes.pb(i);
            for(int j=i;(j)<=N;j+=i)
                sieve[j]=true;
        }
            
    }
}
void solve(){ 
    // for(int e:primes)
    //     cout<<e<<"\n";
    // cout<<primes.size()<<"\n";
    int m,n;
    cin>>m>>n;
    vector<int> primes;
    calcSieve((int)floor(sqrt(n))+1,primes);
    bool primNew[n-m+1];
    memset(primNew,false,sizeof(primNew));
    for(int e:primes){
        // cout<<e<<" ";
        // cout<<endl;
        for(int i=((m+e-1)/e)*e;i<=n;i+=e)
            {
                
                if(i<=e)
                continue;
                // cout<<i<<" ";
                primNew[i-m]=true;
            }
    }
    // cout<<"Marked values above\n";
    // if(m==1)
    // m++;
    if(m==1){
        primNew[0]=true;
    }
    for(int i=m;i<=n;i++)
        if(!primNew[i-m])
            cout<<i<<"\n";
    cout<<"\n";

}

int main(){
    test solve();
    return 0;
}