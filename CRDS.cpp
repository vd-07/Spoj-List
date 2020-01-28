#include <iostream>
using namespace std;
#define ll long long int
#define ull unsigned long long int
#define f(i,s,e) for(int i=s;i<e;i++)
#define test ll t;cin>>t;while(t--)
#define mod 1000007
void solve(){
ll n;
cin>>n;
ll res=((n*(n+1))%mod+((n*(n-1))/2)%mod)%mod;
cout<<res<<"\n";
}

int main(){
    test solve();
    return 0;
}