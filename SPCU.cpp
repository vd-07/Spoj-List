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
    int a[n];
    bool flag=true;
    f(i,0,n)
        {
            cin>>a[i];
            if(a[i]>i)
                flag=false;
        }
    if(a[0]!=0||flag==false)
    cout<<"NO\n";
    else
    {
        cout<<"YES\n";
    }
    
    
}

int main(){
    test solve();
    return 0;
}