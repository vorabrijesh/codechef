#include<bits/stdc++.h>
using namespace std;
#define ll long long int
# define mod 1000000007 


ll count1;
void printSubArrays(vector<int> arr, int start, int end) 
{       
          
    if (end == arr.size())  
        return; 
        
    else if (start > end)  
        printSubArrays(arr, 0, end + 1);

    else
    {
        ll prod=1;
        for (int i = start; i <= end; i++){ 
            prod = prod * arr[i];
        }
          if(prod%4==0 || prod%2==1)
          {
              count1++;
          }
        printSubArrays(arr, start + 1, end); 
    } 
      
    return; 
} 

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> a;
        //int b[n]={0};
        int x;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            a.push_back(x);
            //b[i] = a[i]*b[i-1];
        }
        count1=0;
        printSubArrays(a,0,0);
        cout<<count1<<endl;
    }
}