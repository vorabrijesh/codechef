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
        int n,m,k;
        cin>>n>>m>>k;
        int c[n][k];
        int a[n][m]={0};
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<k;j++)
            {
                cin>>c[i][j];
                a[i][c[i][j]-1]++;
            }
        }
        int ans[n]={0};
        int ma=0,in=0;
        for(int i=0;i<n;i++)
        {
            ma=0;
            in=0;
            for(int j=0;j<m;j++)
            {  
                if(ma<a[i][j])
                {
                    ma = a[i][j];
                    in = j+1;
                }
            }
            ans[i] = in;
        }
        for(int i=0;i<n;i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<"\n";

    }
}
       