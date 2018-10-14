#include <bits/stdc++.h>
#define ll             long long
#define f(i,a,b)       for(int i=(a);i<(b);i++)
#define fd(i,a,b)      for(ll i=(a);i>(b);i--)
#define x              first
#define y              second
#define si(a)          scanf("%d",&a)
#define sii(a,b)       scanf("%d %d",&a,&b)
#define siii(a,b,c)    scanf("%d %d %d",&a,&b,&c)
#define sl(a)          scanf("%I64d",&a)
#define sll(a,b)       scanf("%I64d %I64d",&a,&b)
#define slll(a,b,c)    scanf("%I64d %I64d %I64d",&a,&b,&c);
#define pfci(n,ans)    printf("Case %I64d: %d\n",n,ans)
#define pfcl(n,ans)    printf("Case %I64d: %I64d\n",n,ans)
#define pfcd(n,ans)    printf("Case %I64d: %lf\n",n,ans)
#define pb             push_back
#define all(v)         v.begin(),v.end()
#define MOD 1000000009
#define ld long double
#define mp make_pair
using namespace std;
#define INF 1e12
#define EPS 1e-12
//#define double long double




int main()
{
    int n;
    int r,R;
    cin>>n>>R>>r;
    if(n==1)
    {
        if(R>=r)  cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        return 0;
    }
    if(n==2)
    {
        if(R>=2*r) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        return 0;
    }
    if(2*r<=R)
    {
        double xx= 2.0 * (R-r);
        double x= xx * sin(3.14159265358979/n);
        //cout<<asin(180/n)<<" "<<(2.0*r)<<endl;

        if(x>(2.0*r) || abs(x-(2.0*r))<=EPS ) cout<<"YES"<<endl;
        //else if(abs(x-(2.0*r))<=EPS)  cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    else cout<<"NO"<<endl;
}
