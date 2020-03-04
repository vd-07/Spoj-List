//Author : Vivek Dubey
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long int
#define f(i,s,e) for(int i=s;i<e;i++)
#define test ll t;cin>>t;while(t--)
#define mod 1000000007
void solve(){ 

}

int main(){
    float overhang=0.00;
    ll i=1;
    map<float,ll> mp;
    while(overhang<=5.20){
        overhang+=1/(i+1);
        mp[overhang]=i;
    }
    while(cin>>overhang){
        if(overhang==0.00)
            break;
        auto it=mp.upper_bound(overhang);
        cout<<(it->second)<<" card(s)\n";
    }
    return 0;
}