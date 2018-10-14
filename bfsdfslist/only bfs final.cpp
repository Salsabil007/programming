#include<bits/stdc++.h>
using namespace std;

class graphh
{
public:
    int v;
    list<int>*arr;
    vector<int> parent;
    vector<int> visited;
    graphh(int x)
    {
        v=x;
        arr=new list<int>[v+1];
        for(int i=0;i<=x;i++)
        {
            parent.push_back(0);
            visited.push_back(0);
        }
    }
    void setedge(int a,int b)
    {
        arr[a].push_back(b);
        arr[b].push_back(a);
    }
    void bfs(int src)
    {

        queue<int>q;
        visited[src]=1;
        q.push(src);
        parent[src]=-1;
        while(!q.empty())
        {
            //cout<<"inside loop"<<endl;
            int u;
            u=q.front();
            cout<<u<<" ";
            q.pop();
            list<int>::iterator i;
            for (i = arr[u].begin(); i != arr[u].end(); ++i)
            {
                if(visited[*i]==0)
                {
                    visited[*i]=1;
                    q.push(*i);
                    parent[*i]=u;

                }
            }
        }
        return;

    }
};

int main()
{
    class graphh p(6);
    p.setedge(1,2);
    p.setedge(1,4);
    p.setedge(4,6);
    p.setedge(6,3);
    p.setedge(6,5);
    p.setedge(5,3);
    p.bfs(1);
    cout<<endl;
}
