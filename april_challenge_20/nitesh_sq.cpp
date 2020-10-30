#include <bits/stdc++.h>
using namespace std;
#define ll long long int
# define mod 1000000007 


int main()
{
   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
   
 
    while(t--)
    {
        ll odd_in = -1;
        ll count= 0;
        ll n;
        cin>>n;
        vector<ll> l(n),a(n),r(n);
        bool flag =true;
       
        for(int i = 0; i < n; i++)
        {
            cin>>a[i];
            a[i]=abs(a[i]);
        }
        for(int i = 0; i < n;i++)
        {
            if(odd_in == -1)
                l[i] = 0;
            else
                l[i] = i - odd_in;
            if(a[i]%2 && flag)
            {
                odd_in = i;
                flag = false;
            }
            if(a[i]%2==0 )
            {
                odd_in  =-1;
                flag =true;
            }
           
        }
        odd_in = -1;
        flag = true;
        for(int i = n-1; i >= 0; i--)
        {
            if(odd_in ==-1)
                r[i] = 0;
            else
                r[i] = odd_in - i;
            if(a[i]%2==1 && flag)
            {
                odd_in = i;
                flag = false;
            }
            if(a[i]%2==0 )
            {
                odd_in = -1;
                flag = true;
            }
        }

        for(int i = 0; i < n; i++)
        {
            if(a[i]%2 != 1 && a[i]%4 != 0)
            {
                count += l[i] + r[i] + 1 + l[i]*r[i];
            }
        }
       
        ll ans = n*(n+1)/2;
        cout<<ans-count<<"\n";
    }
       
}
