#include<bits/stdc++.h>
using namespace std;
const long long  INF=1e18;
int main()
{
    long long  n,m,i,j,k;
    cin>>n>>m;
    long long arr[n], ara[m];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(j=0;j<m;j++)
    {
        cin>>ara[j];
    }
    long long  x=INF;
    long long y=-INF;
    for(i=0;i<n;i++)
    {
        y=-INF;
        for(j=0;j<n;j++) if(j!=i)
        {
            for(k=0;k<m;k++)
            {
                y=max(y,arr[j]*ara[k]);
            }
        }
        x=min(x,y);
    }


    cout<<x<<endl;
}
