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
bool comparator(pii a, pii b){
    return (a.second)<(b.second);
}
void solve(){
    vector<pii> acti;
    int n, start,end;
    cin>>n;
    f(i,0,n){
        cin>>start>>end;
        acti.pb({start,end});
    }
    sort(acti.begin(),acti.end(),comparator);
    int ct=1,rese=acti[0].second;
    for(int i=1;i<n;i++){
        if(rese<=acti[i].first)
            {
                ct++;
                rese=acti[i].second;
            }
    }
    cout<<ct<<"\n";
}

int main(){
    test solve();
    return 0;
}