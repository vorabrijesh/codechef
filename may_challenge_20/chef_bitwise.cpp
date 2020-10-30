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
    ll x=50,y=51,l=0,r=2*max(x,y);
    // cin>>x>>y>>l>>r;
    while(t--)
    {
       cout<<x<<" "<<y<<" "<<l<<" "<<" "<<r<<"\n";
        // cin>>x>>y>>l>>r;
        
        ll e=max(x,y),c=0;
        
        while(e!=0)
        {
            e = e/2;
            c++;   
        }
        // cout<<c<<"\n";
        while(r<pow(2,c))
        {
            c-=1;
        }
        // if(y>x)
        // {
        //     if(y>r)
        //     {
        //         cout<<x<<"\n";
        //     }
        //     else{
        //         ll w = pow(2,c+1);
        //         cout<<min(r,w-1)<<"\n";
        //     }
        // }
        // if(x>y)
        // {
        //     if(x>=r)
        //     {
        //         cout<<l<<"\n";
        //     }
        //     else{
        //         ll w = pow(2,c+1);
        //         cout<<min(r,w-1)<<"\n";
        //     }
        // }
        // if(x==y)
        // {
        //     ll f = r&max(x,y);
        // if(f==r)
        // {
        //     if(min(x,y)<=r)
        //     {
        //         cout<<min(x,y)<<"\n";
        //     }
        //     else
        //         cout<<r<<"\n";
        // }
        // else if(r>=max(x,y)){
        //     cout<<max(x,y)<<"\n";
        // }
        // else{
        //     ll s,m=-1,in=f;
        //     for(ll i=f;i<=r;i++)
        //     {
        //         s = (x&i)*(y&i);
        //         if(m<s)
        //         {
        //             m = s;
        //             in =i;
        //         } 
        //     }
        //     cout<<in<<"\n";
        // }
            
            
        // }
        if(x==y)
        {
            cout<<x<<"\n";
        }
        else{
            ll w = pow(2,c);
            cout<<min(x+y,w-1)<<"\n";
        }
        
        r++;
    }
}