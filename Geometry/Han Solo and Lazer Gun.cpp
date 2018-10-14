#include<bits/stdc++.h>
using namespace std;
double INF = 1e100;
double EPS = 1e-12;
int main()
{
    int n,x1,y1,x2,y2,i,j,k,l;
    map < pair < int, int > , int > mp;
    cin>>n>>x1>>y1;
    for(i=0;i<n;i++)
    {
        cin>>x2>>y2;
        mp[make_pair(x2,y2)]=1;
    }
    int sum=0;
    map < pair < int, int > , int > :: iterator it,it2;
    for(it=mp.begin();it!=mp.end();it++)
    {
        if((*it).second==1)
        {
            sum++;
                (*it).second=0;
                for(it2=it;it2!=mp.end();it2++)
                {
                    if(((*it).first.first-x1)*((*it2).first.second -y1) == ((*it2).first.first-x1)*((*it).first.second -y1)  )
                    {
                        (*it2).second=0;
                    }

                }
        }
    }
    cout<<sum<<endl;
}
