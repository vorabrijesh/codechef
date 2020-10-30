#include<bits/stdc++.h>

#define ll long long int
#define mod 1000000007

using namespace std;

int main()
{
    int t,i,j,k,l;
    cin>>t;
    ll sum=0;
    while(t--)
    {
        int n;
        cin>>n;
        int a[4][4]={0};
       
        while(n--)
        {
            
            char c;
            int x;
            cin>>c;
            cin>>x;
            a[c-'A'][x/3-1]++;
        }
        
        int profit=-401;
        int temp;
        int movie[4]={0,0,0,0};
        int curr[4]={0,0,0,0};
        int price[4]={100,75,50,25};
        for(i=0;i<4;i++)
        {
            movie[0] = a[i][0];
            for(j=0;j<4;j++)
            {
                 movie[1] = a[j][1];
                for(k=0;k<4;k++)
                {
                    movie[2] = a[k][2];
                    for(l=0;l<4;l++)
                    {

                        movie[3] = a[l][3];
                        curr[i] = max(curr[i],movie[0]);
                        curr[j] = max(curr[j],movie[1]);
                        curr[k] = max(curr[k],movie[2]);
                        curr[l] = max(curr[l],movie[3]);

                        sort(curr,curr+4);
                        reverse(curr,curr+4);
                        temp =0;

                        for(int x=0;x<4;x++)
                        {
                            if(curr[x] == 0)
                                temp -= 100;
                            
                            temp = temp+ curr[x]*price[x];
                            
                        }
                        curr[0]=0;
                        curr[1]=0;
                        curr[2]=0;
                        curr[3]=0;
                        profit = max(profit, temp);

                    }
                }
            }
        }

        cout<<profit<<endl;
        sum+=profit;
    }

    cout<<sum<<endl;
}