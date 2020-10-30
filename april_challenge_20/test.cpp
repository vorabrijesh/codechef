#include<bits/stdc++.h>
using namespace std;
#define ll long long int
# define m 1000000007 
 ll countDivisors(ll n) 
{ 
	ll cnt = 0; 
	for (int i = 1; i <= sqrt(n); i++) { 
		if (n % i == 0) { 
			// If divisors are equal, 
			// count only one 
			if (n / i == i) 
				cnt++; 

			else // Otherwise count both 
				cnt = cnt + 2; 
		} 
	} 
	return cnt; 
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
        
        int x,y;
       
        vector<int> a[n+1];
        for(int i=0;i<n-1;i++)
        {
            cin>>x>>y;
            a[x].push_back(y);
            a[y].push_back(x);

        }
        vector<int> c(n+1,0);
        
        for(int i=1;i<=n;i++)
        {
            cin>>c[i];
            //c.push_back(x);
        }
        vector<vector<ll>> A;
        for(int u=1;u<=n;u++)
        {
            vector<ll> p(n+1,1);
            vector<bool> visited(n+1, 0);  
            queue <ll> Q; 
           
            Q.push(u);
            p[u]=c[u];
            visited[u] = true; 

            while (!Q.empty()) 
            { 
                x = Q.front(); 
                Q.pop(); 
                
                for (int i=0; i<a[x].size(); i++) 
                { 
                    if (visited[a[x][i]]) 
                        continue; 
                     
                    p[a[x][i]] = (p[x] * c[a[x][i]])%m;
                    Q.push(a[x][i]); 
                    visited[a[x][i]] = 1; 
                } 
            } 
            A.push_back(p);
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<=n;j++)
            {
                cout<<A[i][j]<<" ";
            }
            cout<<"\n";
        }
        int q,u,v;
        cin>>q;
        while(q--)
        {
            cin>>u>>v;
            cout<<countDivisors(A[u-1][v])<<"\n";   
        }
    }
}