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
       int n,q;
       cin>>n>>q;
       string s;
       cin>>s;
       int a[26]={0};
       for(int i=0;i<s.size();i++)
       {
           a[s[i]-'a']++;
       }
       while(q--)
       {
           int c;
           cin>>c;
           ll count=0;
           for(int i=0;i<26;i++)
           {
               if(a[i]-c>0)
                   count+=a[i]-c;
           }
            cout<<count<<"\n";
       }
       
    }

}