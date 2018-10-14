#include<bits/stdc++.h>
using namespace std;
map < pair < long long , long long > , long long > mp;
int main()
{
    long long x,y,n,i,j,k,l,sum=0;
    cin>>n;
    long long color[n+1];
    memset(color,0,sizeof(color));
  //  vector < pair < long long , vector > > v;
    for(i=1;i<n;i++)
    {
        cin>>x>>y;
        if(color[x]==0 && color[y]==0) {color[x]=1;color[y]=2;}
        else if(color[x]!=0 && color[y]==0)
        {
            if(color[x]==1) color[y]=2;
            else color[y]=1;
        }
        else if(color[x]==0 && color[y]!=0)
        {
            if(color[y]==1) color[x]=2;
            else color[x]=1;
        }
     //   v.push_back(make_pair(x,push_back(y)));
        mp[make_pair(x,y)]=1;
        mp[make_pair(y,x)]=1;
    }
    if(n==1) {cout<<"0";return 0;}
    map < pair < long long , long long > , long long > :: iterator it;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(color[i] ==color[j] ) {}
            else
            {
                if(mp[make_pair(i,j)]==0 && mp[make_pair(j,i)]==0) {sum++;mp[make_pair(i,j)]=1;mp[make_pair(j,i)]=1;}
            }
        }
    }
   cout<<sum;
 //  else cout<<sum-1;
}
