#include<bits/stdc++.h>
using namespace std;
map < string , string > parent;
map < string , int > visited;
map < string, vector < string > > graph;
//vector < vector < string > > par;

int bfs(string src,string dest)
{
    queue< string > q;
    visited[src]=1;
    parent[src]="null";
    q.push(src);
    while(! q.empty())
    {
        string s=q.front();
        q.pop();
        if(s== dest ) return 1;
      //  map < string, vector < string > > :: iterator it;
     //   vector < vector < string > >:: iterator it;
        //while(it=graph[s].begin();it!=graph[s].end();it++)
        for(int i=0;i<graph[s].size();i++)
        {
            if(visited[graph[s][i]] == 0)
            {
                visited[graph[s][i]] =1;
                parent[graph[s][i]] = s;
                q.push(graph[s][i]);

            }
         //   if(graph[s][i]== dest ) return 1;
        }
    }
    return 0;

}
void printpath(string a, string b){
  if(a==b){return;}
  printpath(parent[a],b);
  cout<<parent[a]<<" "<<a<<endl;;
}
int main()
{
    int n,i,j,k,l;
    string s1,s2;
    bool primera = false;
    while(cin>>n)
    {
//        par.clear();
        parent.clear();
        graph.clear();
        visited.clear();
        for(i=1;i<=n;i++)
        {
            cin>>s1>>s2;
       //     par[s1].push_back(s2);
         //   par[s2].push_back(s1);

            graph[s1].push_back(s2);
            graph[s2].push_back(s1);
            visited[s1]=0;
            visited[s2]=0;
        }
        cin>>s1>>s2;
        if(primera) printf ("\n"); primera = true;
        int k=bfs(s1,s2);
        if(k==0)cout<<"No route"<<endl;
        else
        {
         //   printpath(s2,s1);
            vector < string > v;
            string t=s2;
            v.push_back(t);
        //    cout<<"t "<<t<<endl;

            while(1)
            {
                if(parent[t] == s1) {v.push_back(s1);break;}
                v.push_back(parent[t]);
            //    cout<<"t "<<parent[t]<<endl;
                t=parent[t];
              //  k++;
            }
            for(i=v.size()-1;i>0;i--)
            {
                cout<<v[i]<<" "<<v[i-1]<<endl;
            }
        }
    }
}
