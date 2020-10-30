#include<bits/stdc++.h>

#define ll long long int
#define mod 1000000007

using namespace std;

int main()
{
    int t;
    cin>>t;
    ll sum=0;
    while(t--)
    {
        int n;
        cin>>n;
        int a[4][4]={0};
        if(n==0)
        {
            cout<<"-400"<<endl;
            sum-=400;
            break;
        }
        while(n--)
        {
            
            char c;
            int x;
            cin>>c;
            cin>>x;
            if(x==12)
                a[c-'A'][0]++;
            else
            {
                a[c-'A'][x/3]++;
            }
        }
        
        int profit=0;
        int b[4]={0,0,0,0};
        int c[4]={0,0,0,0};
        int v[4]={0,0,0,0};
        int j=0;
        int flag=0;
        // queue<int> q;
        // q.push(0);
        // q.push(1);
        // q.push(2);
        // q.push(3);
        for(j=0;j<4;j++)
        {
            int m=0,in=0;
            int sum=0;
            priority_queue<pair<int,int> > h;
            for(int i=0;i<4;i++)
            {
                h.push({a[i][j],i});
                sum+=a[i][j];
            }
            if(sum==0)
            {
                profit-=100;  
            }
            else{

                
                while(!h.empty() && (b[0]!=1 || b[1]!=1 || b[2]!=1 || b[3]!=1))
                {
                    int flag=0;
                    m = h.top().first;
                    in = h.top().second;
                    if(b[in]==0)
                    {
                        for(int k=j-1;k>=0;k--)
                        {
                            if(m<a[in][k] )
                            {
                                // m=a[in][k];
                                // ind=k;
                                flag=1;     
                            }
                        }
                        for(int k=j+1;k<4;k++)
                        {
                            if(m<a[in][k])
                            {
                            //    m=a[in][k];
                            //     ind=k;
                                flag=1;
                            }
                        }
                    }
                    if(flag==1 || b[in]==1)
                    {
                        h.pop();
                        //cout<<"hi";
                    }
                    else{
                        //cout<<"j="<<m<<endl;
                        b[in]=1;
                        v[j]=m;
                        
                        break;
                        
                        // c[ind]=1;
                    }
                }
                if(h.empty())
                {
                    profit-=100;
                }
                //cout<<in<<" "<<ind<<" "<<m<<endl;
            }
        }
        //cout<<v[0]<<" "<<v[1]<<" "<<v[2]<<" "<<v[3]<<endl;
        sort(v,v+4);
        reverse(v,v+4);
        for(int i=0;i<4;i++)
        {
            //cout<<v[i]<<" ";
            profit+= v[i]*(100-25*i);
        }
        cout<<profit<<endl;
        sum+=profit;
    }

    cout<<sum<<endl;
}