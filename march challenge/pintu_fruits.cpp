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
        int n,m;
        cin>>n>>m;
        int a[n],b[n];
        int c[m],d[m]={0};
        memset(c,-1,sizeof(c));
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        for(int i=0;i<n;i++)
        {
            if(d[a[i]-1]==0)
            {
                c[a[i]-1]=0;
                c[a[i]-1]+=b[i];
                d[a[i]-1]=1;
            }
            else{
                c[a[i]-1]+=b[i];
            } 
            
        }
        int min=INT_MAX;
        for(int i=0;i<m;i++)
        {
            //cout<<c[i]<<" ";
            if(min>c[i] && c[i]!=-1)
            {
                min = c[i];
            }
        }
        
            cout<<min<<endl;
    }
}