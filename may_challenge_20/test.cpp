#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
# define mod 1000000007 

int main()
{
    fast;
    int t;
    cin>>t;
    ll x=17,y=4,l=0,r=2*max(x,y);
    cin>>x>>y>>l>>r;
    while(t--)
    {
        ll f=max(x&r,y&r);
        ll g =x&l;
        cout<<x<<" "<<y<<" "<<l<<" "<<r<<" "<<f<<"\n";
        // cin>>x>>y>>l>>r;
        ll m=-1;
        ll s=0;
        ll in=0;
        for(ll i=l;i<=r;i++)
        {
            s = (x&i)*(y&i);
            if(m<s)
            {
                m = s;
                in = i;
            } 
        }
        cout<<in<<"\n";
       r++;
    }
}