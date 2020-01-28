#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long int
#define f(i,s,e) for(int i=s;i<e;i++)
#define test ll t;cin>>t;while(t--)
ll rev(ll number){
    ll res=0;
    while(number){
        res=res*10+number%10;
        number/=10;
    }
    return res;
}
void solve(){
    ll a,b;
    cin>>a>>b;
    ll sum=rev(a)+rev(b);
    cout<<(rev(sum))<<"\n";
}
int main(){

    test solve();
    return 0;
}
