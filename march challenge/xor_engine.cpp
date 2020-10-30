#include<bits/stdc++.h>
using namespace std;
#define ll long long int
# define mod 1000000007 

bool findParity(int x) 
{ 
    int y = x ^ (x >> 1); 
    y = y ^ (y >> 2); 
    y = y ^ (y >> 4); 
    y = y ^ (y >> 8); 
    y = y ^ (y >> 16); 
  
    // Rightmost bit of y holds the parity value 
    // if (y&1) is 1 then parity is odd else even 
    if (y & 1) 
        return 1; 
    return 0; 
} 
int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n,q;
        cin>>n>>q;
        int y;
        int even=0;
        for(int i=0;i<n;i++)
        {
            cin>>y;
            if(findParity(y)==0)
                even++;
        }
        int x;
        for(int i=0;i<q;i++)
        {
            cin>>x;
            if(findParity(x)==0)
            {
                cout<<even<<" "<<n-even<<"\n";
            }
            else{
                cout<<n-even<<" "<<even<<"\n";
            }
        }
    }
}