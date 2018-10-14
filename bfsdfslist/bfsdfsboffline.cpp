#include<iostream>
#include<queue>
#include<string>
using namespace std;
int ii=1;
class virtecs
{
public:
    int ind;
    string ss;
};

class graph
{
public:
    virtecs obj[100];
    string arry[100];
    int arr[100][100];

    int n;
    int e;
    int visited[100];
    int parent[100];

    void set(int a,int b)
    {
        n=a;
        e=b;
        for(int i=1; i<=a; i++)
        {
            for(int j=1; j<=b; j++)
            {
                arr[i][j]=0;
            }
        }

        for(int i=1;i<=a;i++)
		{
			visited[i]=0;
			parent[i]=0;
		}
    }
    void setstring(string sss)
    {
          arry[ii++]=sss;
    }

    /*void setedge(int a,int b)
    {
        arr[a][b]=1;
        arr[b][a]=1;
    }*/

    void setedge()
    {
        for(int i=1;i<=ii;i++)
        {
            string st=arry[i];
            for(int j=1;j<=ii;j++)
            {
                string st1=arry[j];
                int count=0;
                for(int k=0;k<st.length();k++)
                {
                    if(st[k]!=st1[k])
                        {
                            count++;
                            if(count>1)
                                break;
                        }
                }
                if(count==1)
                {
                    arr[i][j]=1;
                    arr[j][i]=1;
                }
            }
        }
    }



    void bfs(int src,string strr)
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
            //cout<<u<<" "<<arry[u]<<endl;
            if(arry[u]==strr)
                break;
            q.pop();

            for(int v=1; v<=10; v++)
            {
                //cout<<"inside loop1"<<endl;
                if(arr[u][v]==1 && visited[v]==0)
                {
                    visited[v]=1;
                    q.push(v);
                    parent[v]=u;
                    //cout<<v<<" ";
                }
            }
        }
        return;

    }

};
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int n=s1.length();


    string dic[]= {"air","aeroplane","cool","dance","fail","fall","foil","fool","foul","page","pale","pall","poll","pope","sage","sale"};
    graph g;

    g.set(20,20);
    for(int i=0;i<=15;i++)
    {
        if(dic[i].length()==n)
        {
            g.setstring(dic[i]);
        }
    }

    int nnn,kk;


    for(int i=1;i<=ii;i++)
    {
        //cout<<g.arry[i]<<endl;
        if(s1==g.arry[i])
        {
            //cout<<i<<endl;
            nnn=i;;
        }
        if(s2==g.arry[i])
        {
            kk=i;
        }
    }

    g.setedge();

    g.bfs(nnn,s2);

    cout<<"final solution......"<<endl<<endl<<endl;
    int xx=0;
    string solution[20];
    while(1)
    {
        int aa=g.parent[kk];
        //cout<<g.arry[kk]<<endl;
        solution[xx++]=g.arry[kk];
        if(aa==-1)
            break;

        kk=aa;
    }
    for(int i=xx-1;i>=0;i--)
    {
        cout<<solution[i]<<endl;
    }
    cout<<endl<<endl<<"final solution......"<<endl<<endl<<endl;


    /*g.setstring("one");
    g.setstring("two");
    g.setstring("three");
    g.setstring("four");
    g.setstring("five");
    g.setstring("six");

    g.setedge(1,3);
    g.setedge(1,2);
    g.setedge(4,2);
    g.setedge(3,5);
    g.setedge(6,2);*/



}
