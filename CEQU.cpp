//Author : Vivek Dubey
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long int
#define f(i,s,e) for(int i=s;i<e;i++)
#define test ll t;cin>>t;for(int i=1;i<=t;i++)
#define mod 1000000007
int gcd(int a, int b){
    if(b==0)
        return a;
    return gcd(b,a%b);
}
void solve(){ 
    int a,b,c;
    cin>>a>>b>>c;
    if(c%(gcd(a,b)))
        cout<<"No\n";
    else
        cout<<"Yes\n";
}

int main(){
    test {cout<<"Case "<<i<<": ";solve();}
    return 0;
}