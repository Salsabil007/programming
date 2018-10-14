#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,q,i,j,n;
    scanf("%d",&t);
    for(int qq=1; qq<=t; qq++)
    {
        printf("Case %d:\n",qq);
        scanf("%d",&n);
        vector <unsigned  int > v;
        vector <unsigned  int > input;
        v.push_back(0);
        input.push_back(0);
        unsigned  int x;
        for(i=0; i<n; i++)
        {
            scanf("%u",&x);
            //
            int tt=x ^ v[i];
            //cout<<tt<<" ";
            if(tt==0) tt=x;
            v.push_back(tt);
            input.push_back(x);
        }
        scanf("%d",&q);
        int l,d;
        for(i=1; i<=q; i++)
        {
            scanf("%d %d",&l,&d);
            unsigned int ans;
            if(d==l) ans=input[d+1];
            else if((d-1)%2==1) ans = input[d+1] ^ input[l+1];
            else ans= v[d+1] ^ v[l];

            //cout<<v[d+1]<<" "<<v[l]<<" "<< ans<<endl;
            printf("%u\n",ans);
        }

    }
}
