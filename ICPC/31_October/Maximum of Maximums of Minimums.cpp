#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,i,j,l;
    cin>>n>>k;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);

    if(k==1)
    {
        cout<<arr[0]<<endl;
    }

    else cout<<arr[n-1]<<endl;
}
