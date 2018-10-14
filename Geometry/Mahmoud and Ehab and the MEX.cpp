#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,i,j,k,l,sum=0,mex;
    cin>>n>>x;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(i=0;i<n;i++)
    {
        if(arr[i]==x) {cout<<1;return 0;}
    }
    int pp=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]==pp) {pp++;}
        else if(arr[i]!=pp) {mex=pp;break;}
    }
    if(mex==x) {cout<<0;return 0;}
    else if(mex > x)
    {
        cout<<1<<endl;
        return 0;
    }
    else if(mex < x)
    {
        for(i=0;i<n;i++)
        {
            if(arr[i]>x) break;
            sum++;
        }
        cout<<x-sum;
    }
    else
    {

    }
}
