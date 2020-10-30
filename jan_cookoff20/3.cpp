#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
using namespace std;
ll andOperator(ll a, ll b){ 
while(a < b){ 
     
    b -= (b & -b); 
} 
return b; 
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll l ,r;
        cin>>l>>r;
        ll ans=l;
        ll p=l;
        ll j=1;

        for(ll i=l+1;i<=r;i++)
        {
            p =p &i;
            ans =(ans+ p)%mod;
        }
        cout<<ans<<endl;
    }

}