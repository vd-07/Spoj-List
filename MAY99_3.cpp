//Author : Vivek Dubey
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long int
#define f(i,s,e) for(int i=s;i<e;i++)
#define test ll t;cin>>t;while(t--)
#define mod 1000000007
ll gcd(ll a, ll b){
    // cout<<a<<" "<<b<<endl;
    if(b==0)
        return a;
    return gcd(b,a%b);
}
void solve(){ 
    ll x,y,z;
    cin>>x>>y>>z;
    if(x<z&&y<z)
        cout<<"NO\n";
    else
    {
        if(z%gcd(((x>y)?x:y),((x>y)?y:x)))
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }
}

int main(){
    test solve();
    return 0;
}