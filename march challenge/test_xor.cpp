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
        int n,q;
        cin>>n>>q;
        int a[n],b[n];
        int even=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int x;
        for(int i=0;i<q;i++)
        {
            cin>>x;
            int y;
            even =0;
            for(int j=0;j<n;j++)
            {
                y = x^a[j];
                if(__builtin_popcount(y)%2==0)
                {
                    even++;
                }
            }
            cout<<even<<" "<<n-even<<endl;
        }
    }
}