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
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int a[n+1];
        int b[n+1]={0};
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
            b[a[i]]=i;
        }
        int i1,i2,i3;
        vector<vector<int> >v;
        int flag=0;
        int d,e;
        int p1,p2,p3;
        for(int i=1;i<=n;i++)
        {
            if(a[i]==i)
                continue;
        
            p1 = a[i];
            i1 = i;
            d = i+1;
            while(d<=n && a[d]==d)
            {
                d=d+1;
            }
            
            if(a[d]==i)
            {
                p3 = a[d];
                i3 = d;
                
                e = d+1;
                while(e<=n && a[e]==e)
                {
                    e++;
                }
                if(e>=n+1)
                {
                    flag=1;
                    break;
                }
                p2 = a[e];
                i2 =e;
            }
            else{
                p2 = a[d];
                i2 =d;
                i3 = b[i];
                p3 = a[i3];
            }
            a[i1] = p3;
            a[i2] = p1;
            a[i3] = p2;
            vector<int> s;
            s.push_back(i1);
            s.push_back(i2);
            s.push_back(i3);
            v.push_back(s);
        }
        if(flag==1)
            cout<<"-1\n";
        else if(k<v.size())
        {
            cout<<"-1\n";
        }
        else{
            int j=1;
            while(j<=n && a[j]==j)
            {
                j++;
            }
            if(j<=n)
            {
                cout<<"-1\n";
            }
            else{
                cout<<v.size()<<"\n";
                for(int i=0;i<v.size();i++)
                { 
                    for(int j=0;j<3;j++)
                    {
                        cout<<v[i][j]<<" ";
                    }
                    cout<<"\n";
                }
            }
        }
        
    }
}