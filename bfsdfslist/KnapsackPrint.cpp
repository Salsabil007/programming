#include<iostream>
using namespace std;

int path[1000][30];

int knapsack(int *w,int *val,int n,int KnapW)
{
	int p[1000][30];

	for(int i=0;i<=KnapW;i++)
    {
        p[0][i] = 0;
        path[0][i] = -1;
    }
    for(int i=0;i<=n;i++)
    {
        p[i][0] = 0;
        path[i][0] = -1;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=KnapW;j++)
        {
            if(j>=w[i])
            {
                if( (val[i]+p[i-1][j-w[i]]) > p[i-1][j])
                {
                    p[i][j] = val[i]+p[i-1][j-w[i]];
                    path[i][j] = j-w[i];
                    cout<<"i "<<i<<" j "<<j<<" "<<p[i][j]<<endl;
                }
                else
                {
                    p[i][j] = p[i-1][j];
                    path[i][j] = j;
                    cout<<"i "<<i<<" j "<<j<<" "<<p[i][j]<<endl;
                }
            }
            else
            {
                p[i][j] = p[i-1][j];
                path[i][j] = j;
                cout<<"i "<<i<<" j "<<j<<" "<<p[i][j]<<endl;
            }
        }
    }
    return p[n][KnapW];
}

void printPath(int i,int j)
{
    if(path[i][j]==-1)
        return;
    else
    {
        printPath(i-1,path[i][j]);
        if(path[i][j]!=j)
            cout<<i;
    }
}

int main()
{
    int w[1000];
    int val[1000];
    int N,W;
    w[0] = 0;
    val[0] = 0;
    cin>>N;
    for(int i=1;i<=N;i++)
    {
        cin>>w[i]>>val[i];
    }
    cin>>W;

    cout<<knapsack(w,val,N,W)<<endl;
    printPath(3,26);


	return 0;
}

/*
3
17 72
23 44
24 31
26

4
2 12
1 10
3 20
2 15
5
*/
