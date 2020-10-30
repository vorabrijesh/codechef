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
        int zero=0;
        for(int i=0;i<x;i++)
        {
            int a;
            cin>>a;
            if(a>0)
            {
                px.push_back(a);
            }
            else if(a<0)
            {
                nx.push_back(a);
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
                py.push_back(a);
            }
            else if(a<0)
            {
                ny.push_back(a);
            }
            else{
                zero=1;
            }
        }
        ll i,j,k;
        ll count=0;
        ll a,b,c;
        for(i=0;i<nx.size();i++)
        {
            for(j=0;j<px.size();j++)
            {
                for(k=0;k<py.size();k++)
                {
                    a = nx[i]*nx[i] + py[k]*py[k];
                    b = px[j]*px[j] +  py[k]*py[k];
                    c = (px[j] - nx[i])*(px[j] - nx[i]);
                    if(a+b==c)
                    {
                        count++;
                    }
                }
            }
        }
        for(i=0;i<nx.size();i++)
        {
            for(j=0;j<px.size();j++)
            {
                for(k=0;k<ny.size();k++)
                {
                    a = nx[i]*nx[i] + ny[k]*ny[k];
                    b = px[j]*px[j] +  ny[k]*ny[k];
                    c = (px[j] - nx[i])*(px[j] - nx[i]);
                    if(a+b==c)
                    {
                        count++;
                    }
                }
            }
        }
        for(i=0;i<ny.size();i++)
        {
            for(j=0;j<py.size();j++)
            {
                for(k=0;k<px.size();k++)
                {
                    a = ny[i]*ny[i] + px[k]*px[k];
                    b = py[j]*py[j] +  px[k]*px[k];
                    c = (py[j] - ny[i])*(py[j] - ny[i]);
                    if(a+b==c)
                    {
                        count++;
                    }
                }
            }
        }
        for(i=0;i<ny.size();i++)
        {
            for(j=0;j<py.size();j++)
            {
                for(k=0;k<nx.size();k++)
                {
                    a = ny[i]*ny[i] + nx[k]*nx[k];
                    b = py[j]*py[j] +  nx[k]*nx[k];
                    c = (py[j] - ny[i])*(py[j] - ny[i]);
                    if(a+b==c)
                    {
                        count++;
                    }
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