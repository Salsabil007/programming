#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,k,l;
    cin>>n;
    int arr[n+1];
    for(i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    int flag=0;
    for(i=1;i<=n;i++)
    {
        if(i==arr[arr[arr[i]]])
        {
            cout<<"YES";
            flag=1;
            return 0;
        }
    }
    if(flag==0) cout<<"NO";

}
