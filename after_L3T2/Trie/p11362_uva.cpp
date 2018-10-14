#include<bits/stdc++.h>
using namespace std;
struct node
{
    int sum=0;
    node* next[10];
    node()
    {
        for(int i=0;i<10;i++)
        {
            next[i]=0;
        }
        sum=0;
    }
};
node* root=new node();
void add(string s)
{
    node* temp=root;
    for(int i=0;i<s.length();i++)
    {
        if((temp->next[s[i]-'0']) == 0 )
        {
            temp->next[s[i]-'0']=new node();
        }
        temp=temp->next[s[i]-'0'];
    }
    temp->sum++;
}

bool flag = true;

void _find(node* temp= root, int was = 0) {
if (temp -> sum && was) flag = false;
if(flag == false) return ;
	for (int i = 0; i < 10; i++) {
		if (temp -> next[i] != 0) {
			_find(temp -> next[i], max(temp -> sum, was));
		}
	}
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		root = new node();
		int n;
		cin >> n;
		while(n--) {
			string s;
			cin >> s;
			add(s);
		}
		flag = true;
		_find();
		if (flag)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
	return 0;
}































