//Author : Vivek Dubey
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long int
#define f(i,s,e) for(int i=s;i<e;i++)
#define test ll t;cin>>t;while(t--)
#define mod 1000000007
void solve(){ 
    ll A,B;
    cin>>A>>B;
    set<ll> factors;
    for(ll i=1;i*i<=B;i++){
        if(B%i)
            continue;
        factors.insert(B/i);
        factors.insert(i);
    }
    for(auto fac : factors){
        if(A%(B/fac))
            continue;
        cout<<fac<<" "<<((A*fac)/B)<<"\n";
        break;
    }
}

int main(){
    test solve();
    return 0;
}