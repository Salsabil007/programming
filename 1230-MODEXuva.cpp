#include <bits/stdc++.h>
using namespace std;


long long bigmod(long long x,long long y,long long n)
{
    if(y==0) return 1;
    else if(y%2==1)
    {
        return ((x%n)*bigmod(x,y-1,n))%n;
    }
    else return (bigmod(x,y/2,n)*bigmod(x,y/2,n))%n;
}



long long big(long long a,long long p,long long m)
{
    long long r = 1;
    while(p!=0)
    {
        if(p%2==1) r = (r*a)%m;
        a = (a*a)%m;
        p = p/2;
    }
    return r;
}

int main()
{
    long long x,y,n;
    int t;
    cin>>t;
    while(t--)
    {
        scanf("%lld %lld %lld",&x,&y,&n);
        {
            long long ans=big(x%n,y,n);
            cout<<ans<<endl;
        }
    }
    cin>>t;
    return 0;
}


