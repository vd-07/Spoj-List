//Author : Vivek Dubey
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long int
#define f(i,s,e) for(int i=s;i<e;i++)
#define test ll t;cin>>t;while(t--)
#define mod 1000000007
void solve(){ 
    int n;
    cin>>n;
    ll sum=0,temp;
    f(i,0,n){
        cin>>temp;
        sum+=temp;
    }
    if(sum%n)
    cout<<n-1<<"\n";
    else
    {
        cout<<n<<"\n";
    }
    

}

int main(){
    test solve();
    return 0;
}