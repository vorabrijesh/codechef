#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define max_l 100000
int main()
{
    int t;
    cin>>t;
    vector<vector<int>> m;
    ll h,j;
        vector<int> d;
        d.push_back(0);
        m.push_back(d);
        for(h=1;h<=10000000000;h++)
        {
            vector<int> t;
            for(j=1;j<=sqrt(h);j++)
            {
                if (h%j == 0) 
                {   
                    if (h/j == j) 
                    {
                        
                        d.push_back(j); 
                    }
                    else 
                    {
                        d.push_back(j);
                        //d.push_back(h/j);
                    }
                } 
            }
            m.push_back(d);
        } 
    while(t--)
    {
        ll x,y;
        ll i;
        ll count=0;
        ll a,b,c;
        cin>>x>>y;
        vector<int> px,nx,py,ny;
        vector<int> px1(100005,0);
        vector<int> nx1(100005,0);
        vector<int> py1(100005,0);
        vector<int> ny1(100005,0);
        int zero=0;
        for(i=0;i<x;i++)
        {
            int a;
            cin>>a;
            if(a>0)
            {
                px1[a]=1;
                px.push_back(a);
            }
            else if(a<0)
            {
                nx1[-a]=1;
                nx.push_back(a);
            }
            else
                zero=1;
        }
        for(i=0;i<y;i++)
        {
            int a;
            cin>>a;
            if(a>0)
            {
                py1[a]=1;
                py.push_back(a);
            }
            else if(a<0)
            {
                ny1[-a]=1;
                ny.push_back(a);
            }
            else
                zero=1;

        }
        
        for(i=0;i<py.size();i++)
        {
            h= abs(py[i]*py[i]);
            
            vector<int> t = m[h];
            for(j=0;j<t.size();j++)
            {

                if (h/t[j] == t[j]) 
                {
                    if(t[j]<=max_l && px1[t[j]]==1 && nx1[t[j]]==1)
                        count++;
                }
                else 
                {
                    
                    if(t[j]<=max_l && h/t[j]<=max_l &&nx1[h/t[j]]==1 && px1[t[j]]==1)
                    {
                        count++;
                    }
                    if(t[j]<=max_l && h/t[j]<=max_l &&nx1[t[j]]==1 && px1[h/t[j]]==1)
                    {
                        count++;
                    } 
                }
            }
            
        }
        for(i=0;i<px.size();i++)
        {
            h= abs(px[i]*px[i]);
           
                vector<int> t = m[h];
                for(j=0;j<t.size();j++)
                {
                    
                    if (h/t[j] == t[j]) 
                    {
                        if(t[j]<=max_l && py1[t[j]]==1 && ny1[t[j]]==1)
                            count++;
                    }
                    else 
                    {
                        
                        if(t[j]<=max_l && h/t[j]<=max_l &&ny1[h/t[j]]==1 && py1[t[j]]==1)
                        {
                            count++;
                        }
                        if(t[j]<=max_l &&h/t[j]<=max_l &&ny1[t[j]]==1 && py1[h/t[j]]==1)
                        {
                            count++;
                        } 
                    }    
                }
            
        }
        for(i=0;i<ny.size();i++)
        {
            h= abs(ny[i]*ny[i]);
            
                vector<int> t = m[h];
                for(j=0;j<t.size();j++)
                {
                    
                    if (h/t[j] == t[j]) 
                    {
                        if(t[j]<=max_l && px1[t[j]]==1 && nx1[t[j]]==1)
                            count++;
                    }
                    else 
                    { 
                        if(t[j]<=max_l && h/t[j]<=max_l &&nx1[h/t[j]]==1 && px1[t[j]]==1)
                        {
                            count++;
                        }
                        if(t[j]<=max_l && h/t[j]<=max_l &&nx1[t[j]]==1 && px1[h/t[j]]==1)
                        {
                            count++;
                        } 
                    }
                    
                }
            
        }
        for(i=0;i<nx.size();i++)
        {
            h= abs(nx[i]*nx[i]);
            vector<int> t = m[h];
            for(j=0;j<t.size();j++)
            { 
                if (h/t[j] == t[j]) 
                {
                    if(t[j]<=max_l && py1[t[j]]==1 && ny1[t[j]]==1)
                        count++;
                }
                else 
                {
                    
                    if(t[j]<=max_l && h/t[j]<=max_l &&ny1[h/t[j]]==1 && py1[t[j]]==1)
                    {
                        count++;
                    }
                    if(t[j]<=max_l &&h/t[j]<=max_l &&ny1[t[j]]==1 && py1[h/t[j]]==1)
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