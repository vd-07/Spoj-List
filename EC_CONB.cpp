#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long int
#define f(i,s,e) for(int i=s;i<e;i++)
#define test ll t;cin>>t;while(t--)
ll deci2bin(ll number){
    ll ans=0;
    while(number){
        ans=ans*2+(number%2);
        number/=2;
    }
    return ans;
}
void solve(){
    ll a,answer;
    cin>>a;
    if(a&1)
    answer=a;
    else
    answer=deci2bin(a);
    cout<<answer<<"\n";
}
int main(){

    test solve();
    return 0;
}
