#include<iostream>
#include<conio.h>
#include<queue>
#include<list>
using namespace std;


class graphh
{
    int v;
    list<int>*arr;
public:
    int parent[100];
    int dtime[100];
    int ftime[100];
    int time;
    int visited[100];
    graphh(int v)
    {
        this->v=v;
        arr=new list<int>[v+1];
        for(int i=1; i<=v; i++)
        {
            parent[i]=0;
            //distanc[i]=0;
            dtime[i]=0;
            ftime[i]=0;
            visited[i]=0;
        }
        time=0;
    }

    void setedge(int a,int b)

    {
        arr[a].push_back(b);
       // arr[b].push_back(a);

    }

    void bfs(int src)
    {

        queue<int>q;
        visited[src]=1;
        q.push(src);
        //cout<<src<<" ";;
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
                //if(arr[u][v] && color[v]==-1 && u!=v)
                if(visited[*i]==0)
                {
                    visited[*i]=1;
                    q.push(*i);
                    parent[*i]=u;

                }
                //else if(arr[u][v] && color[u]==color[v] &&u!=v ) return;
            }
        }
        return;

    }
    void DFSconnected(int a)
    {
        //colour[a]=-1;
        visited[a]=1;
        time=time+1;
        dtime[a]=time;
        cout<<a<<" ";
        list<int>::iterator i;
      for (i = arr[a].begin(); i != arr[a].end(); ++i)
      {

                if(visited[*i]==0)
                {
                    DFSconnected(*i);
                }
        }

        time=time+1;
        ftime[a]=time;
    }

    void dfs(int src)
    {
        //time=0;
        DFSconnected(src);
        for(int i=1; i<=v; i++)
        {
            if(visited[i]==0)
            {
                DFSconnected(i);
            }

        }
    }
};
int main()
{
    int n,e,a,b;

    class graphh p(6);
    p.setedge(1,2);
    p.setedge(1,4);
    p.setedge(4,6);
    p.setedge(6,3);
    p.setedge(6,5);
    p.setedge(5,3);
    //p.bfs(1);
    cout<<endl;
    p.dfs(1);

}

/*
7 11
1 2
2 3
4 3
3 5
4 5
5 4
1 4
2 5
6 7
7 3
6 3
b 1
d 1
*/
