
#include<bits/stdc++.h>
using namespace std;
#define forall(i,a,b)           for(int i=a;i<b;i++)
#define pb                        push_back
const int N=1e5+5;
typedef  vector<int>          vi;
bool vis[N],cat[N];
vi adj[N];
int n,m,cnt=0,ans=0;
void dfs(int v, int par, int conseq, int max_till_now){

    if(cat[v] == 0) conseq = 0;
    else    conseq++;
    max_till_now = max(max_till_now, conseq);

    int children = 0;
    for(int i=0;i<(int)adj[v].size();i++){
        int vv = adj[v][i];
        if(vv == par)   continue;
        children++;
        dfs(vv, v, conseq, max_till_now);
    }

    if(children == 0 && max_till_now <= m){
    // cout<<v<<endl;
        ans++;
    }
}

int main()
{
    int u,v;
  memset(vis,false,sizeof(vis));
  cin>>n>>m;
  forall(i,1,n+1)
    cin>>cat[i];
  forall(i,1,n)
  {
    cin>>u>>v;
    adj[u].pb(v);
    adj[v].pb(u);
  }
  dfs(1,0,0,0);
  cout<<ans;
  return 0;
}
