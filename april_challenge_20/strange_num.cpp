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
        int n,k;
        cin>>n>>k;
        int count = 0; 
        ll sum=0;
         
        while (!(n % 2)) { 
            n >>= 1;  
            count++; 
        } 
    
        
        if (count) 
        {
          //  cout << 2 << "  " << count << endl;
            sum+=count;
        }
    
     
        for (long long i = 3; i <= sqrt(n); i += 2) { 
            count = 0; 
            while (n % i == 0) { 
                count++; 
                n = n / i; 
            } 
            if (count) 
            {
                sum+=count; 
                //cout << i << "  " << count << endl;
            }
        } 
    
        
        if (n > 2) 
        {
            //cout << n << "  " << 1 << endl; 
            sum++;
        }
        
        if(sum>=k)
        {
            cout<<1<<endl;
        }
        else
        {
            cout<<0<<endl;
        }
        
    }

}