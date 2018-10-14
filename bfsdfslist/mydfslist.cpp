
#include<bits/stdc++.h>
#include<stack>
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
        tail='\0';
    }
    void insertt(int n)
    {
        if(head==tail)
        {
            node *temp=new node();
            temp->ele=n;
            temp->next=tail;
            head=temp;
            tail='\0';
        }
        else
        {
            node *temp=new node();
            tail->ele=n;
            tail->next=temp;
            temp='\0';
            tail=temp;

        }
    }

    void printt()
    {
        node *temp=head;
        while(temp->next!='\0')
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
            obj[i].insertt(i);
            visited[i]=0;
        }
    }
    void setedge(int a,int b)
    {
        obj[a].insertt(b);
        //obj[b].insertt(a);
    }
    void dfs(int src)
    {
        stack<int> st;
        st.push(src);
        visited[src]=1;
        while(!st.empty())
        {
            int flag=0;
            int u=st.top();
            //cout<<u<<" ";
            //st.pop();
            node *temp;
            node *temp1=obj[u].head;
            while(temp1->next!='\0')
            {
                if(visited[temp1->ele]==0)
                {
                    temp=temp1;
                    flag=1;
                    break;
                }
            }
            if(flag==1)
            {
                while(temp->next!='\0')
                {
                    if(visited[temp->ele]==0)
                    {
                        st.push(temp->ele);
                        visited[temp->ele]=1;
                    }

                    cout<<temp->ele<<" ";
                    temp=obj[temp->ele].head;
                }
            }
            cout<<st.top()<<" ";
            st.pop();
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
    //g.setedge(1,2);
    //g.setedge(1,3);
    g.setedge(1,4);
    g.setedge(3,5);
    g.setedge(3,6);
    g.setedge(4,7);
    g.setedge(6,8);
    g.setedge(7,8);
    g.setedge(7,9);
    g.dfs(1);

}


