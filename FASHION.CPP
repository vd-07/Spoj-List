//Author : Vivek Dubey
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long int
#define f(i,s,e) for(int i=s;i<e;i++)
#define test ll t;cin>>t;while(t--)
#define mod 1000000007
void solve(){
    int ng,nm,temp;
    cin>>ng>>nm;
    int gmax=0,mmax=0;
    f(i,0,ng){
        cin>>temp;
        if(gmax<temp)
        gmax=temp;
    }
    f(i,0,nm){
        cin>>temp;
        if(mmax<temp)
            mmax=temp;
    }
    if(gmax>=mmax)
        cout<<"Godzilla\n";
    else
        cout<<"MechaGodzilla\n";
    
}

int main(){
    test solve();
    return 0;
}