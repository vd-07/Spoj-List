//Author : Vivek Dubey
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long int
#define f(i,s,e) for(int i=s;i<e;i++)
#define test ll t;cin>>t;while(t--)
#define mod 1000000007
char dict[]={'u','m','a','n','k'};
void solve(){ 
   ll  n;
   cin>>n;
   ll ct=5;
   string s="";
   while(n){
       s=dict[n%ct]+s;
       n-=n%ct+(!(n%ct))*5;
        n/=ct;
        // cout<<s<<" ";
   }
   cout<<s<<endl;

}

int main(){
    test solve();
    return 0;
}