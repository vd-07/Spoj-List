//Author : Vivek Dubey
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long int
#define f(i,s,e) for(int i=s;i<e;i++)
#define test ll t;cin>>t;while(t--)
#define mod 1000000007
int a[1000];
ll solve(){ 
    ll n;
    cin>>n;
    return sqrt(n+1)-1;  
}

int main(){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    cout<<"Case "<<i<<": "<<solve()<<"\n";
    return 0;
}