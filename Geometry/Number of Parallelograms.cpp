#include<bits/stdc++.h>
using namespace std;
vector   < pair < int , int >  >v,v1;
map < pair < int, int > , int > mp;
int main()
{
    int n,i,j,k,l,x,y,t;

    cin>>t;
    for(int pp=1;pp<=t;pp++)
    {
        long long ans=0;

    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x>>y;
        v.push_back (make_pair(x,y));
    }
    for(i=0;i<v.size()-1;i++)
    {
        for(j=i+1;j<v.size();j++)
        {
            int p=v[i].first+v[j].first;
            int q=v[i].second+v[j].second;
            v1.push_back(make_pair(p,q));
        }
    }
    l=1;
    sort(v1.begin(),v1.end());
    for(i=1;i<v1.size();i++)
    {
        if(v1[i].first==v1[i-1].first && v1[i].second==v1[i-1].second)
        {
            l++;
        }
        else
        {
            ans+=(l*(l-1))/2;
            l=1;
        }
    }
    cout<<"Case "<<pp<<": "<<ans<<endl;
    mp.clear();
    v.clear();
    v1.clear();
    }


}
