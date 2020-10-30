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
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int j=6,z=0,first_one=1,flag=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]==0)
            {
                z++;
            }
            else{
                
                if(first_one)
                {
                    first_one=0;
                }
                else{
                    if(z<5)
                    {
                        flag=1;
                        break;
                    }
                }
                z=0;
            }
        }
        if(flag==0)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}