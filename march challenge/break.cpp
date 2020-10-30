#include<bits/stdc++.h>
using namespace std;
#define ll long long int
# define mod 1000000007 
 
int main()
{
    int t,s;
    cin>>t>>s;
    int n;
    int i,j;
    int a[100002],b[100002];
    if(s==1)
    {
        while(t--)
        {
            cin>>n;
            for(i=0;i<n;i++)
            {
                cin>>a[i];
            }
            for(i=0;i<n;i++)
            {
                cin>>b[i];
            }
            sort(a,a+n);
            sort(b,b+n);
            int flag=0;
            unordered_set <int> st;
            for(i=0;i<n;i++)
            {
                if(a[i] < b[i] && (i==0 || st.count(a[i])>0))
                {
                    st.insert(a[i]);
                    st.insert(b[i]);
                    
                }
                else{
                    flag=1;
                    break;
                }
               
            }
            if(flag==1)
            {
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }

        }
    }
}