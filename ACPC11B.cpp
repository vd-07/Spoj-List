//Author : Vivek Dubey
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long int
#define f(i,s,e) for(int i=s;i<e;i++)
#define test ll t;cin>>t;while(t--)
#define mod 1000000007
void solve(){
    int an;
    cin>>an;
    int a[an];
    for(int i=0;i<an;i++)
        cin>>a[i];
    int bn;
    cin>>bn;
    int b[bn];
    for(int i=0;i<bn;i++)
        cin>>b[i];
    sort(a,a+an);
    sort(b,b+bn);
    int res=10000000;
    //approach 1
    // for(int i=0;i<an;i++){
    //     int bval=lower_bound(b,b+bn,a[i])-b;
    //     if(bval<bn)
    //     res=min(res,abs(a[i]-b[bval]));
    //     if(bval>0)
    //         res=min(res,abs(a[i]-b[bval-1]));
    // }
    //approach 2
    int i=0,j=0;
    while(i<an&&j<bn){
        res=min(res,abs(a[i]-b[j]));
        if(a[i]<b[j])
            i++;
        else
            j++;
    }
    cout<<res<<"\n";
}

int main(){
    test solve();
    return 0;
}