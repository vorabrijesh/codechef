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
       int n;
       cin>>n;
       int a[n];
       for(int i=0;i<n;i++)
       {
           cin>>a[i];
       } 
       int b[n]={0};
        for(int i=1;i<n;i++)
        {
            b[i-1]= abs(a[i]-a[i-1]);
        }
        int worst=0, lr=0, best=100,lf=0;
        int flag=0,j=0,k=0;
        for(int i=0;i<n;i++)
        {
            k=j=i;
            lf =lr=0;
            while(j+1<n && abs(a[j]-a[j+1])<=2)
            {
                j++;
                lr++;
            }
            while(k-1>=0 && abs(a[k]-a[k-1])<=2)
            {
                k--;
                lf++;
            }
            worst = max(worst,lr+lf);
            best = min(best,lr+lf);
        }
        
        cout<<best+1<<" "<<worst+1<<"\n";
    }

}