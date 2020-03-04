//Author : Vivek Dubey
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long int
#define f(i,s,e) for(int i=s;i<e;i++)
#define test ll t;cin>>t;while(t--)
#define mod 1000000007
void solve(){ 
    ll x,a;
    cin>>x>>a;
    ll n=a-x;
    ll largest=((a+1)*n)-(n*(n-1))/2;
    cout<<largest<<"\n";

}

int main(){
    test solve();
    return 0;
}