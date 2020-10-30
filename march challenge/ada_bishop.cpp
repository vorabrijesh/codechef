#include<bits/stdc++.h>
using namespace std;
#define ll long long int
# define mod 1000000007 
 
int main()
{
    int t;
    cin>>t;

    int a[16]={8,7,6,1,3,8,7,4,1,5,8,7,2,1,7,8};
    int b[16]={8,7,8,3,1,6,5,8,5,1,4,3,8,7,1,2};

    while(t--)
    {
        int r,c;
        cin>>r>>c;
        if(r!=1 || c!=1)
        {
            if(r==c)
            {
                cout<<"17"<<endl;
                cout<<"1"<<" "<<"1"<<endl;
            }
            else{
                cout<<"18"<<endl;
                cout<<(r+c)/2<<" "<<(r+c)/2<<endl;
                cout<<"1"<<" "<<"1"<<endl;
            }
        }
        else{
            cout<<"16"<<endl;
        }
        for(int i=0;i<16;i++)
        {
            cout<<a[i]<<" "<<b[i]<<endl;
        }
    }
}