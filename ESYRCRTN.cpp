//Author : Vivek Dubey
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long int
#define f(i,s,e) for(int i=s;i<e;i++)
#define test ll t;cin>>t;while(t--)
#define mod 1000000007
int f[3]={2,1,3};
void solve(){
    ull n;
    cin>>n;
    if(n>=2)
        cout<<(f[(n-1)%3]+3)<<"\n";
    else
        cout<<f[n%3]<<"\n";
    
    
}

int main(){
    test solve();
    return 0;
}