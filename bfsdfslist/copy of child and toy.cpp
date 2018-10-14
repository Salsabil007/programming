#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define pii pair<int,int>
#define f first
#define s second
#define pb emplace_back
#define mp make_pair
class SORT//For sorting the vertices in order of their weight
{
public:
    bool operator ()(pii &p1, pii&p2)
    {
        return (p1.s<p2.s);
    }
};
int main()
{
    int n,m;
    cin>>n>>m;
    int w[n+1];//storing weight of vertices
    vector <int> a[n+1];//graph in form of adjacency list
    vector <pii> v;//vector for storing edges to remove first
    int a1,b1;
    for(int i=1;i<=n;i++)
    {
        cin>>w[i];
        v.push_back(make_pair(i,w[i]));//storing (vertex,weight)
    }
    for(int i=1;i<=m;i++)
    {
        cin>>a1>>b1;
        a[a1].push_back(b1);//undirected graph so vertices added to both entries
        a[b1].push_back(a1);
    }
    sort(v.begin(),v.end(),SORT());
    long long sum=0;
    while(!v.empty())
    {
        pii cur=v[v.size()-1];
        v.pop_back();
        int cv=cur.f;//current vertex
        int cw=cur.s;//its weight
        for(int i=0;i<a[cv].size();i++)//iterating through all adjacent vertices of this vertex
        {
            sum+=w[a[cv][i]];//adding weights of adjacent vertices
        }
        w[cv]=0;//Since the vertex has been removed, weight is 0
    }
    cout<<sum;
    return 0;
}

