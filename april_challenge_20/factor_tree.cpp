#include<bits/stdc++.h>
using namespace std;
#define ll long long int
# define m 1000000007 
const long long MOD2 = static_cast<long long>(m) * m;
//  ll countDivisors(ll n) 
// { 
// 	ll cnt = 0; 
// 	for (int i = 1; i <= sqrt(n); i++) { 
// 		if (n % i == 0) { 
// 			// If divisors are equal, 
// 			// count only one 
// 			if (n / i == i) 
// 				cnt++; 

// 			else // Otherwise count both 
// 				cnt = cnt + 2; 
// 		} 
// 	} 
// 	return cnt; 
// } 

void SieveOfEratosthenes(ll n, bool prime[], 
                         bool primesquare[], ll a[]) 
{ 
    for (ll i = 2; i <= n; i++) 
        prime[i] = true; 
  
    
    for (ll i = 0; i <= (n * n + 1); i++) 
        primesquare[i] = false; 
  
    prime[1] = false; 
  
    for (ll p = 2; p * p <= n; p++) { 
         
        if (prime[p] == true) { 
            // Update all multiples of p 
            for (ll i = p * 2; i <= n; i += p) 
                prime[i] = false; 
        } 
    } 
  
    ll j = 0; 
    for (ll p = 2; p <= n; p++) { 
        if (prime[p]) { 
            // Storing primes in an array 
            a[j] = p; 
  
            primesquare[p * p] = true; 
            j++; 
        } 
    } 
} 
  
// Function to count divisors 
ll countDivisors(ll n) 
{ 
    
    if (n == 1) 
        return 1; 
  
    bool prime[n + 1], primesquare[n * n + 1]; 
  
    ll a[n]; // for storing primes upto n 
  
    
    SieveOfEratosthenes(n, prime, primesquare, a); 

    ll ans = 1; 
  
    // Loop for counting factors of n 
    for (ll i = 0;; i++) { 
        // a[i] is not less than cube root n 
        if (a[i] * a[i] * a[i] > n) 
            break; 
  
        // Calculating power of a[i] in n. 
        ll cnt = 1; // cnt is power of prime a[i] in n. 
        while (n % a[i] == 0) // if a[i] is a factor of n 
        { 
            n = n / a[i]; 
            cnt = cnt + 1; // incrementing power 
        } 

        ans = ans * cnt; 
    } 
  
     
    if (prime[n]) 
        ans = ans * 2; 
  
    // Second case 
    else if (primesquare[n]) 
        ans = ans * 3; 
  
    // Third casse 
    else if (n != 1) 
        ans = ans * 4; 
  
    return ans;  
} 


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        //int a[n+1][n+1]={0};
        int x,y;
        vector<vector<vector<ll>>> A,B;
        for(int i=0;i<=n;i++)
        {
            vector<vector<ll>> e(n+1, vector<ll>(n+1,0));
            A.push_back(e);
            B.push_back(e);
        }
        
        for(int i=0;i<n-1;i++)
        {
            cin>>x>>y;
            A[0][x][y]=1;
            A[0][y][x]=1;
            B[0][x][y]=1;
            B[0][y][x]=1;
        }
        int c[n+1]={0};
        for(int i=1;i<=n;i++)
        {
            cin>>c[i];
        }
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                B[0][j][i]= B[0][j][i]*c[i];
                B[1][j][i]= A[0][j][i]*c[i]*c[j];
            }
        }
        for(int l=1;l<=n-1;l++)
        {
            for(int i=1;i<=n;i++)
            {
                for(int j=1;j<=n;j++)
                {
                    A[l][i][j]=0;
                    if(l>1)
                        B[l][i][j]=0;
                    for(int k=1;k<=n;k++)
                    {
                        A[l][i][j] += (A[l-1][i][k]*1ll*A[0][k][j]);
                        if(l>1)
                            B[l][i][j] += (B[l-1][i][k]*1ll*B[0][k][j]);
                        while( A[l][i][j]>= MOD2)
                            A[l][i][j]-= MOD2;
                        while( B[l][i][j]>= MOD2)
                            B[l][i][j]-= MOD2;
                    }
                    A[l][i][j] = A[l][i][j]%m;
                    if(l>1)
                        B[l][i][j] = B[l][i][j]%m;
                }
            }
        }
        // for(int l=0;l<n-1;l++)
        // {
        //     for(int i=1;i<=n;i++)
        //     {
        //         for(int j=1;j<=n;j++)
        //         {
                    
        //             cout<<A[l][i][j]<<" ";
                
        //         }
        //         cout<<"\n";
        //     }
        //     cout<<"\n";
        // }
        int q,u,v;
        cin>>q;
        while(q--)
        {
            cin>>u>>v;
            if(u==v)
            {
                
                cout<<countDivisors(c[u])<<"\n";
                continue;
            }
            
            for(int i=0;i<n;i++)
            {
                if(A[i][u][v]==1)
                {
                    cout<<countDivisors(B[i+1][u][v])<<"\n";
                    break;
                }
            }
        }
    }
}