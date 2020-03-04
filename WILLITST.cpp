//Author : Vivek Dubey
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long int
#define f(i,s,e) for(int i=s;i<e;i++)
#define test ll t;cin>>t;while(t--)
#define mod 1000000007
void solve(){ 
    ll n;
    cin>>n;
    if(n&(n-1))
        cout<<"NIE\n";
    else
        cout<<"TAK\n";

}

int main(){
    solve();
    return 0;
}