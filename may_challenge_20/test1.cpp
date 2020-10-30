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
            
            vector<int> w;
            i1 = i;
            i2 = b[i];
            i3 = a[i];
            if(i2==i3)
            {
                d = i+1;
                 while(d<=n && (a[d]==d || d==i2 || d ==i3))
                 {
                     d++;
                 }
                 if(d==n+1)
                 {
                     flag=1;
                     break;
                 }
                 i3 = d;
            }
            w.push_back(i1);
            w.push_back(i2);
            w.push_back(i3);
            sort(w.begin(),w.end());
            i1 = w[0];
            i2 = w[1];
            i3 = w[2];
            //cout<<i1<<" "<<i2<<" "<<i3<<"\n";
            p1 = a[i1];
            p2 = a[i2];
            p3 = a[i3];
            vector<int> s;
            if(a[i3]==i1)
            {
                a[i1] =p3;
                a[i2] =p1;
                a[i3] =p2;
                s.push_back(i1);
                s.push_back(i2);
                s.push_back(i3);
                v.push_back(s);
            }
            else if(a[i2]==i1)
            {
                a[i1] = p2;
                a[i2] = p3;
                a[i3] = p1;
                s.push_back(i3);
                s.push_back(i2);
                s.push_back(i1);
                v.push_back(s); 
            }
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