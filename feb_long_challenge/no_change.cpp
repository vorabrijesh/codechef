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
        int n,p;
        cin>>n>>p;
        int a[n];
        int b[n]={0};
        int j=0;
        int count=0;
        int w=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(p%a[i]==0)
            {
                count++;
            }
            if(p%a[i]!=0 && w==0)
            {
                w=1;
                b[i]=p/a[i]+1;
            }
        }
        if(count==n)
        {
            int flag=0;
            int x,y;
            for(int i=0;i<n;i++)
            {
                b[i]=0;
            }
            for(int i=0;i<n-1;i++)
            {
                for(int j=i+1;j<n;j++)
                {
                    if(a[j]>a[i] )
                    {
                        
                        x = (p-a[j])/a[i] +1;
                        y = 1;
                        if((x-1)*a[i]+a[j]<p)
                        {
                            b[i]=x;
                            b[j]=y;
                            flag=1;
                            break;
                        }
                    }
                    else if(a[j]<a[i] )
                    {
                        x = (p-a[i])/a[j]+1;
                        y = 1;
                        if((x-1)*a[j]+a[i]<p)
                        {
                            b[j]=x;
                            b[i]=y;
                            flag=1;
                            break;
                        }
                        
                    }
                }
                if(flag==1)
                    break;
            }
            if(flag==1)
            {
                cout<<"YES"<<" ";
                for(int i=0;i<n;i++)
                {
                    cout<<b[i]<<" ";
                }
                cout<<endl;
            }
            else{
            cout<<"NO"<<endl;
            
            }
        }
        else{
            cout<<"YES ";
            for(int i=0;i<n;i++)
            {
                cout<<b[i]<<" ";
            }
            cout<<endl;
        }
    }
}