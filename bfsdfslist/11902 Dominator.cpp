#include<bits/stdc++.h>
using namespace std;
int arr[105][105],visited[105],ans[105][105],n;
void dfs(int src,int dest)
{
    if(src==dest) return;
    visited[src]=1;
    int i=0;
    for(i=0;i<n;i++)
    {
        if(arr[src][i]==1 && visited[i]==0)
            dfs(i,dest);
    }
}
int main()
{
    int t,qq,i,j,k,l;
    cin>>t;
    for(qq=1;qq<=t;qq++)
    {
        memset(visited,0,sizeof(visited));
        int f[105];
        cin>>n;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                cin>>arr[i][j];
            }
        }
        dfs(0,-1);
        for(i=0;i<n;i++)
        {
            f[i]=visited[i];
        }
        for(i=0;i<n;i++)
        {
            memset(visited,0,sizeof(visited));
            dfs(0,i);
            for(j=0;j<n;j++)
            {
                if(f[j] && visited[j]==0)
                {
         //           cout<<"yeee"<<endl;
                    ans[i][j]=1;
                }
                else ans[i][j]=0;
            }
            ans[i][i]=f[i];
        }
        printf("Case %d:\n",qq);
        putchar('+');
        for(i=1;i<=(n*2)-1;i++)
        {
            putchar('-');
        }
        puts("+");
        for(i=0;i<n;i++)
        {
            putchar('|');
            for(j=0;j<n;j++)
            {
                if(ans[i][j]==1) putchar('Y');
                else putchar('N');
                putchar('|');
            }
            cout<<endl;
                    putchar('+');
        for(j=1;j<=(n*2)-1;j++)
        {
            putchar('-');
        }
        puts("+");

        }
    }
}














