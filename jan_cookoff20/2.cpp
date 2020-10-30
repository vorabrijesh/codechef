#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define root2 1.414213562
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        vector<int> v;
        v.push_back(0);
       
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            v.push_back(a[i]);
        }
        sort(a,a+n);
        int ma=a[n-1];
        int j=2;
        
            for(int i=0;i<n;i++)
            {
                j=2;
                while(a[i]*j<=ma)
                {
                    v.push_back(a[i]*j);
                    j++;
                }
            }
        
        
        sort(v.begin(),v.end());
        int m=0;
        for(int i=0;i<v.size()-1;i++)
        {
            if(m<v[i+1]-v[i])
                m=v[i+1]-v[i];
        }
        cout<<m<<endl;
    }
}