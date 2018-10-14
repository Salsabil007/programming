#include<bits/stdc++.h>
#include<iostream>
#include<queue>
using namespace std;

class node
{
public:
    int ele;
    node* next;
};

class linkedlist
{
public:
    node *head;
    node *tail;
    linkedlist()
    {
        node *temp= new node();
        head=tail=temp;
    }
    void insertt(int n)
    {
        if(head==tail)
        {
            node *temp=new node();
            temp->ele=n;
            temp->next=tail;
            head=temp;
            //tail->next='\0';
        }
        else
        {
            node *temp=new node();
            tail->ele=n;
            tail->next=temp;
            //temp->next='\0';
            tail=temp;

        }
    }

    void printt()
    {
        node *temp=head;
        //while(temp->next!='\0')
        {
            cout<<temp->ele<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
};

class graph
{
public:
    int v;
    linkedlist obj[100];
    int visited[100];
    graph(int n)
    {
        v=n;
        for(int i=1; i<=v; i++)
        {
            visited[i]=0;
        }
    }
    void setedge(int a,int b)
    {
        obj[a].insertt(b);
        obj[b].insertt(a);
    }
    void bfs(int src)
    {
        queue<int> q;
        q.push(src);
        visited[src]=1;
        while(!q.empty())
        {
            int u=q.front();
            cout<<u<<" ";
            q.pop();
            node *temp=obj[u].head;
            while(temp->next!='\0')
            {
                if(visited[temp->ele]==0)
                {
                    q.push(temp->ele);
                    visited[temp->ele]=1;
                }
                temp=temp->next;
            }
        }

    }
};


int main()
{
    /*int n;
    cin>>n;
    linkedlist obj;
    for(int i=1; i<=n; i++)
    {
        int x;
        cin>>x;
        obj.insertt(x);
    }
    obj.printt();*/


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
    g.bfs(2);

}

