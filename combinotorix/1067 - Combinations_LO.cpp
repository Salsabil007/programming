#include<bits/stdc++.h>
using namespace std;
int p=1000003;
long long nCrModp(int n, int r)
{

    long long C[r+1];
    memset(C, 0, sizeof(C));

    C[0] = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = min(i, r); j > 0; j--)

            C[j] = (C[j] + C[j-1])%p;
    }
    return C[r];
}
int main()
{
    int t,i,j,k,l,n;
    cin>>t;
    for(int qq=1;qq<=t;qq++)
    {
        cin>>n>>k;
        long long x=nCrModp(n, k);
        printf("Case %d: %lld\n",qq,x);
    }
}
