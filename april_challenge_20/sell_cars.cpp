#include<bits/stdc++.h>
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
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        reverse(a,a+n);
        ll sum=0;
        for(int i=0;i<n;i++)
        {
            a[i]=a[i]-i;
            if(a[i]>0)
            {
                sum=(sum+a[i])%mod;
            }
        }
        cout<<sum<<endl;
    }
}