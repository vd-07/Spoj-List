//Author : Vivek Dubey
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long int
#define f(i,s,e) for(int i=s;i<e;i++)
#define test ll t;cin>>t;while(t--)
#define mod 1000000007
int a[1000];
void solve(){ 
    int n;
    memset(a,0,sizeof(a));
    a[999]=1;
    cin>>n;
    int carry=0,intermediate,last;
    for(int i=1;i<=n;i++){
        for(int j=999;j>=0;j--){
            intermediate=a[j]*i+carry;
            a[j]=intermediate%10;
            carry=intermediate/10;   
        }
    }
    for(int i=0;i<1000;i++)
        {
            if(a[i]!=0){
                for(int j=i;j<1000;j++)
                    cout<<a[j];
                break;
            }
        }
    cout<<"\n";

}

int main(){
    test solve();
    return 0;
}