#include<bits/stdc++.h>
using namespace std;
#define ll long long int
# define mod 1000000007 
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,q;
        cin>>n>>q;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int x1,x2,y;
        int res=0;
        for(int i=0;i<q;i++)
        {
            res=0;
            cin>>x1>>x2>>y;
            for(int j=x1-1;j<x2-1;j++)
            {
                if((y>=a[j] && y<=a[j+1]) || (y>=a[j+1] && y<=a[j]))
                {
                    res++;
                }
            }
            cout<<res<<"\n";
        }

    }
}