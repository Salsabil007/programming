#include<bits/stdc++.h>
using namespace std;

bool ispossible ( int a, int b, int x, int y )
{
    return (a>x && b >y) || (a>y && b>x);
}
int main()
{
    int n,i,j,k,l,m,x,y,z,q=1;
    while(cin>>n && n>0)
    {
        vector < pair <  pair < int, int > , int > >v;
        for(i=0;i<n;i++)
        {
            cin>>x>>y>>z;
            v.push_back(make_pair(make_pair(x,y),z));
             v.push_back(make_pair(make_pair(y,x),z));
              v.push_back(make_pair(make_pair(y,z),x));
               v.push_back(make_pair(make_pair(z,y),x));
                v.push_back(make_pair(make_pair(z,x),y));
                 v.push_back(make_pair(make_pair(x,z),y));
        }
        int mx=0,arr[v.size()];
        sort(v.begin(),v.end());
       reverse(v.begin(),v.end());
     //   mx=v[0].second;
        for(i=0;i<v.size();i++)
        {
            arr[i]=v[i].second;
            for(j=0;j<i;j++)
            {
                if(ispossible(v[j].first.first,v[j].first.second,v[i].first.first,v[i].first.second)) arr[i]=max(arr[i],v[i].second+arr[j]);
            }
            mx=max(arr[i],mx);
        }
        printf("Case %d: maximum height = %d\n", q, mx);
        q++;
    }
}

