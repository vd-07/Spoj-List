//Author : Vivek Dubey
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long int
#define f(i,s,e) for(int i=s;i<e;i++)
#define test ll t;cin>>t;for(int i=1;i<=t;i++)
#define mod 1000000007
void solve(){
    int a ,b;
    cin>>a>>b;
    if(a<=3){
        if(b<=3)
        cout<<(b-a+1)<<"\n";
        else
        cout<<(4-a)<<"\n";
    }
    else
    {
        cout<<0<<"\n";
    }
    
}

int main(){
    test solve();
    return 0;
}