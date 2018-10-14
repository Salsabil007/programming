#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,qq,i,j,k,l,n;
    cin>>t;
    for(qq=1;qq<=t;qq++)
    {
        cin>>n>>k;
        unsigned long long int sum=0;
        if(n*n >=k)
        {
            sum=1;
            for(i=1;i<=k;i++)
            {
                sum=sum*(n*n)/i;
                n--;
            }
        }
        printf("Case %d: %llu\n",qq,sum);
      //  printf("Case %d: %llu\n", tc++, ans);

    }
}
