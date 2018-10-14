#include<bits/stdc++.h>
using namespace std;
int check[10000+1];
void sieve()
{
    int i,j;
    for(i=2;i<=100;i++)
    {
        if(check[i]==0)
        {
            for(j=i*i;j<=10000;j=j+i)
            {
                check[j]=1;
            }
        }
    }
}
void arr(int n,int ara[])
{
    int t=3;
    while(n)
    {
        int r=n%10;
        n=n/10;
        ara[t]=r;
        t--;
    }
}
int num_change(int ara[])
{
    int q=0;
    int temp=0;
    while(q<=3)
    {
        temp=temp*10+ara[q];
        q++;
    }
    return temp;
}
int main()
{
    int t;
    scanf("%d",&t);
    sieve();
    while(t--)
    {
        int digit[4],dist[10009],a,b,parent[10009];
        scanf("%d%d",&a,&b);
        memset(dist,-1,sizeof(dist));
        memset(parent,-1,sizeof(parent));
        queue<int> q;
        dist[a]=0;
        q.push(a);
        parent[a]=0;
        while(!q.empty())
        {
            int num = q.front();
            for(int k=3;k>=0;k--)
            {
                arr(num,digit);
                for(int i=0;i<=9;i++)
                {
                    digit[k] = i;
                    int temp = num_change(digit);
                    if((!check[temp]) && dist[temp]==-1 && temp>=1000)
                    {
                        dist[temp]= dist[num] + 1;
                        parent[temp]=num;
                        q.push(temp);
                    }
                }
            }
            q.pop();
        }
        dist[b]==-1 ? cout<<"Impossible"<<endl : cout<<dist[b]<<endl;
    }

}
