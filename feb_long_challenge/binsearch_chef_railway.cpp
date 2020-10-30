#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        vector<int> px,nx,py,ny;
        vector<int> px1(100001,0);
        vector<int> nx1(100001,0);
        vector<int> py1(100001,0);
        vector<int> ny1(100001,0);
        int zero=0;
        for(int i=0;i<x;i++)
        {
            int a;
            cin>>a;
            if(a>0)
            {
                px1[a]=1;
    
            }
            else if(a<0)
            {
                nx1[-a]=1;
            }
            else{
                zero=1;
            }
        }
        for(int i=0;i<y;i++)
        {
            int a;
            cin>>a;
            if(a>0)
            {
                py1[a]=1;
            }
            else if(a<0)
                ny1[-a]=1;
            else
                zero=1;

        }
        ll i,j,k;
        ll count=0;
        ll a,b,c;

        for(i=1;i<=100000;i++)
        {
            if(px1[i]==1)
            {
                px.push_back(i);
            }
            if(nx1[i]==1)
                nx.push_back(-i);
            if(py1[i]==1)
                py.push_back(i);
            if(ny1[i]==1)
                ny.push_back(-i);
        }
        reverse(nx.begin(),nx.end());
        reverse(ny.begin(),ny.end());
        // sort(px.begin(),px.end());
        // sort(py.begin(),py.end());
        // sort(nx.begin(),nx.end());
        // sort(ny.begin(),ny.end());
        for(i=0;i<nx.size();i++)
        {
            for(j=0;j<px.size();j++)
            {
                b= abs(nx[i]*px[j]);
                long double h = sqrt(b);
                if((floor(h)-h)==0)
                {
                    
                    if(py1[h]==1)
                        count++;
                    if(ny1[h]==1)
                        count++;
                }
            }
        }
        
        for(i=0;i<ny.size();i++)
        {
            for(j=0;j<py.size();j++)
            {
                b= abs(ny[i]*py[j]);
                long double h = sqrt(b);
                if((floor(h)-h)==0)
                {
                    
                    if(px1[h]==1)
                        count++;
                    if(nx1[h]==1)
                        count++;
                }
            }
        }
        
        if(zero==1)
        {
            count+= px.size()*py.size() + px.size()*ny.size() +nx.size()*py.size() + nx.size()*ny.size();
        }
        cout<<count<<endl;

    }
}