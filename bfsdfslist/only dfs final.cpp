#include<bits/stdc++.h>
using namespace std;

class graphh
{
public:
    int v;
    list<int>*arr;
    vector<int> parent;
    vector<int> visited;
    vector<int> dtime;
    vector<int> ftime;
    int time;
    graphh(int x)
    {
        v=x;
        arr=new list<int>[v+1];
        for(int i=0; i<=x; i++)
        {
            parent.push_back(0);
            visited.push_back(0);
            dtime.push_back(0);
            ftime.push_back(0);
        }
        time=0;
    }
    void setedge(int a,int b)
    {
        arr[a].push_back(b);
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
    class graphh p(9);
    p.setedge(1,2);
    p.setedge(3,4);
    p.setedge(4,5);
    p.setedge(5,6);
    p.setedge(4,7);
    p.setedge(7,8);
    p.setedge(8,9);
    //p.setedge(3,1);
    p.dfs(3);
    cout<<endl;
}

