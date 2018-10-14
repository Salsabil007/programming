#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Graph
{
public:
    int v;
    list<int>*arr;
    bool *color;
    Graph(int v)
    {
        this->v=v;
        arr=new list<int>[v];



    }
    void addedge(int a,int b)
    {
        arr[a].push_back(b);
        arr[b].push_back(a);

    }
    bool iscycleutil(int u,bool color[],int parent)
    {
        color[u]=true;
        list<int>::iterator i;
        for(i=arr[u].begin();i!=arr[u].end();i++)
        {
            if(!color[*i])
            {
                if(iscycleutil(*i,color,u))
                    return true;
            }
            else if(*i != parent) return true;
        }
        return false;
    }
    bool iscycle()
    {
        bool *color=new bool [v];
        for(int i=0;i<v;i++)
        {
            color[i]=false;
        }
        for(int i=0;i<v;i++)
        {

            if(!color[i])
            {
                if(iscycleutil(i,color,-1)) return true;
            }
        }
        return false;

    }

};
int main()
{
    Graph g1(5);
    g1.addedge(1, 0);
    g1.addedge(0, 2);
    g1.addedge(2, 0);
    g1.addedge(0, 3);
    g1.addedge(3, 4);
    g1.iscycle()? cout << "Graph contains cycle\n":
                   cout << "Graph doesn't contain cycle\n";

    Graph g2(3);
    g2.addedge(0, 1);
    g2.addedge(1, 2);
    g2.iscycle()? cout << "Graph contains cycle\n":
                   cout << "Graph doesn't contain cycle\n";

    return 0;
}
