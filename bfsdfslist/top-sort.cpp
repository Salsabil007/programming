#include<iostream>
#include<conio.h>
using namespace std;
class folder
{
	int n;
	int arr[100][100];
	int colour[100];
public:
	int d[100];
	int f[100];
	int r[100];
	int time;
	void setnode(int a)
	{
		n=a;
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				arr[i][j]=0;
			}
		}
		for(int i=1;i<=n;i++)
		{
			colour[i]=1;
		}
		for(int i=1;i<=n;i++)
		{
			d[i]=0;
		}
		for(int i=1;i<=n;i++)
		{
			f[i]=0;
		}
	}
	void setedge(int a,int b)
	{
		arr[a][b]=1;
	}
	void visit(int a)
	{
		colour[a]=-1;
		time=time+1;
		d[a]=time;
		for(int i=1;i<=n;i++)
		{
			if(arr[a][i]==1)
			{
				if(colour[i]==1)
				{
					r[i]=a;
					visit(i);
				}
			}
		}
		colour[a]=0;
		time=time+1;
		f[a]=time;
	}
	void DFS()
	{
		time=0;
		for(int i=1;i<n;i++)
		{
			if(colour[i]==1)
			{
				visit(i);
			}
		}
	}

};
int main()
{
	int n,a,b,c,d;
	cin>>n;
	folder my;
	my.setnode(n);
	for(int i=1;i<n;i++)
	{
		cin>>a>>b;
		my.setedge(a,b);
	}
	my.DFS();
	while(cin>>c>>d)
	{
		if((my.f[c])>(my.f[d])) cout<<"YES";
		else cout<<"NO";
	}
	getch();
	return 0;

}