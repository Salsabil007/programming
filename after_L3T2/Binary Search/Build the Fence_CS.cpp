#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k,i,j,l,mx=-1;
    cin>>n>>k;
    long long arr[n];
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
        if(arr[i]>mx) mx=arr[i];
    }
    long long low,high,mid=0;
    low=0;
    high=mx;
    long long ans;
    long long prevmid=0;
    while(low<=high)
    {
        ans=low;
        long long sum=0;
        mid=(low+high)/2;
        if(mid==0) {cout<<0<<endl;return 0;}
        for(i=0; i<n; i++)
        {
            sum+=(arr[i]/mid);
        }
        if(sum>=k)
        {
            low=mid+1;
            if(prevmid<mid)
            {
                prevmid=mid;
            }
        }
        else high=mid-1;

    }
    cout<<prevmid<<endl;
    return 0;
}
