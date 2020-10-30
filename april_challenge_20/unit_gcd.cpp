#include<bits/stdc++.h>
using namespace std;
#define ll long long int
# define mod 1000000007 
# define N 1000000

int main()
{
   
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int> >ans;
        if(n==1)
        {
            cout<<1<<endl;
            cout<<1<<" "<<1<<endl;
        }
        else
        {
            if(n%2==0)
            {
                cout<<n/2<<endl;
                for(int i=1;i<=n;i=i+2)
                {  
                   cout<<"2 ";
                   cout<<i<<" "<<i+1<<"\n"; 
                }
            }
            if(n%2==1)
            {
                
                    cout<<(n-1)/2<<endl;
                    cout<<"3 1 2 "<<n<<endl;

                    for(int i=3;i<n;i=i+2)
                    {  
                        cout<<"2 ";
                        cout<<i<<" "<<i+1<<"\n"; 
                    } 
                
                
            }
        }
               
    }
}