//Author : Vivek Dubey
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long int
#define f(i,s,e) for(int i=s;i<e;i++)
#define test ll t;cin>>t;while(t--)
#define mod 1000000007
#define pb push_back
#define pii pair<int,int> 
void solve(int n){
    queue<pii> wines;
    queue<pii> demand;
    ll temp, ans=0;
    for(int i=0;i<n;i++){
        cin>>temp;
        if(temp>0)
            wines.push({temp,i});
        if(temp<0)
            demand.push({temp,i});
    }
    while(!demand.empty()){
        pii d=demand.front(), w=wines.front();
        ans+=abs(d.second-w.second)*(min(-d.first,w.first));
        if(-d.first==w.first){
            demand.pop();
            wines.pop();
        }
        else if(-d.first>w.first){
            wines.pop();
            demand.front().first=d.first+w.first;
        }
        else{
            demand.pop();
            wines.front().first=w.first+d.first;
        }
    }
    cout<<ans<<"\n";
}

int main(){
    ll n;
    while(cin>>n){
        if(n==0)
            break;
        solve(n);
    }
    return 0;
}