#include<bits/stdc++.h>
using namespace std;
long long check(long long mid, long long n,long long m,long long x,long long y)
{
    long long p,q,r;
        p=mid * x;
        r=n-mid;
        r=r*y;
        q=m+r;
        if(q >= p) return 1;
        else return 0;
}
int main()
{
    long long n,m,x,y,i,j,k,p,q,r;
    cin>>n>>m>>x>>y;
    long long mid,high,low;
    long long ans;
    high=n,low=0;
    while(low<=high)
    {
        mid=(high+low)/2;

        if(check(mid,n,m,x,y))
        {
            ans=mid;
            low=mid+1;
        }
        else high=mid-1;

    }
    cout<<ans<<endl;
}
