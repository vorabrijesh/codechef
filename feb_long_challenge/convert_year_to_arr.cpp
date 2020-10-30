#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
int main()
{
    vector<int> v1 ={3,9,14,15,20,25,26,31,37,42,43,48,53,54,59,65,70,71,76,81,82,87,93,98,99};
    vector<int> v2 ={105,110,111,116,121,122,127,133,138,139,144,149,150,155,161,166,167,172,177,178,183,189,194,195,200};
    vector<int> v3 ={201,206,207,212,217,218,223,229,234,235,240,245,246,251,257,262,263,268,273,274,279,285,290,291,296};
    vector<int> v4 ={302,303,308,313,314,319,325,330,331,336,341,342,347,353,358,359,364,369,370,375,381,386,387,392,397,398};

    vector<int> a1(100,0);
    a1.push_back(0);
    vector<int> a2(100,0);
    a2.push_back(0);
    vector<int> a3(100,0);
    a3.push_back(1);
    vector<int> a4(100,0);
    a4.push_back(0);
    int j=0;
    for(int i=1;i<100;i++)
    {
        if(i==v1[j])
        {
            a1[i]=a1[i-1]+1;
            j++;
        }
        else{
            a1[i]=a1[i-1];
        }
        cout<<a1[i]<<", ";
    }
    cout<<endl;
    j=0;
    for(int i=1;i<100;i++)
    {
        if(i==v2[j]-100)
        {
            a2[i]=a2[i-1]+1;
            j++;
        }
        else{
            a2[i]=a2[i-1];
        }
        cout<<a2[i]<<", ";
    }
    cout<<endl;
    j=0;
    for(int i=1;i<100;i++)
    {
        if(i==v3[j]-200)
        {
            a3[i]=a3[i-1]+1;
            j++;
        }
        else{
            a3[i]=a3[i-1];
        }
        cout<<a3[i]<<", ";
    }
    cout<<endl;
    j=0;
    for(int i=1;i<100;i++)
    {
        if(i==v4[j]-300)
        {
            a4[i]=a4[i-1]+1;
            j++;
        }
        else{
            a4[i]=a4[i-1];
        }
        cout<<a4[i]<<", ";
    }
    cout<<endl;


}