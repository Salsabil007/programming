#include<iostream>
#include<stack>
using namespace std;

class graph
{
public:
    int v;
    int visited[100];
    int arr[100][100];
    int dtime[100];
    int ftime[100];
    graph(int n)
    {
        v=n;
        for(int i=1;i<=n;i++)
        {
            visited[i]=0;
            dtime[i]=0;
            ftime[i]=0;
            for(int j=1;j<=n;j++)
            {
                arr[i][j]=0;
            }
        }
    }
    void setedge(int a,int b)
    {
        arr[a][b]=1;
    }

    void dfs(int src)
    {

        int time=1;
        stack<int> st;
        st.push(src);
        dtime[src]=time;
        visited[src]=1;
        while(!st.empty())
        {
            int flag=0;
            int u=st.top();
            int i;
            for(i=1;i<=v;i++)
            {

                if(arr[u][i]==1 && visited[i]==0)
                {
                    time++;
                    dtime[i]=time;
                    visited[i]=1;
                    st.push(i);
                    flag=1;
                    break;
                }

            }
            if(flag==0)
            {
                cout<<st.top()<<" ";
                time++;
                ftime[st.top()]=time;
                st.pop();
            }

        }
    }
};

int main()
{

    graph g(9);
    g.setedge(1,2);
    g.setedge(1,3);
    g.setedge(1,4);
    g.setedge(3,5);
    g.setedge(3,6);
    g.setedge(4,7);
    g.setedge(6,8);
    g.setedge(7,8);
    g.setedge(7,9);
    g.dfs(1);

    for(int i=1;i<=9;i++)
    {
        cout<<i<<" "<<g.dtime[i]<<" "<<g.ftime[i]<<endl;
    }
}
