#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, i, j, l;
    cin>>n>>k;
    int arr[n],arr1[k];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<k;i++)
    {
        cin>>arr1[i];
    }
    sort(arr1,arr1+k);
    reverse(arr1,arr1+k);
    j=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]==0) {arr[i]=arr1[j];j++;}
    }
    int flag=1;
    for(i=1;i<n;i++)
    {
        if(arr[i]>arr[i-1]) {}
        else {flag=0;break;}
    }
    if(flag==1) cout<<"No"<<endl;
    else cout<<"Yes"<<endl;


}
