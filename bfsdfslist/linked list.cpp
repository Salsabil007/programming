#include<bits/stdc++.h>
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
            tail->next='\0';
        }
        else
        {
            node *temp=new node();
            tail->ele=n;
            tail->next=temp;
            temp->next='\0';
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


int main()
{
    int n;
    cin>>n;
    linkedlist obj;
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        obj.insertt(x);
    }
    obj.printt();
}
