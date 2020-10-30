#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        ll x =abs(a-b);
        ll count=0;
        for(int i=1;i*i<=x;i++)
        {
            if(x%i==0)
            {
                if(x/i==i)
                    count++;
                else{
                    count+=2;
                }
            }
        }
        if(a==1 && b==1)
        {
            cout<<"-1"<<endl;
        }  
        else cout<<count<<endl;
    }
}