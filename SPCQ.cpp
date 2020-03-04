//Author : Vivek Dubey
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long int
#define f(i,s,e) for(int i=s;i<e;i++)
#define test ll t;cin>>t;while(t--)
#define mod 1000000007
ll sumofdigits(ll num){
    ll res=0;
    while(num){
        res+=num%10;
        num/=10;
    }
    return res;
}

void solve(){ 
    ll n;
    cin>>n;
    while(1){
        if(n%sumofdigits(n))
            n++;
        else
        {
            cout<<n<<"\n";
            break;
        }
        
    }
    
}

int main(){
    test solve();
    return 0;
}