#include<bits/stdc++.h>
//#include<conio.h>
using namespace std;
class comp
{
	int a;
	int *arr;
public:
	comp(int x)
	{
		a=x;
		arr=new int [x+1];
		for(int i=1;i<=x;i++)
		{
			arr[i]=-13;
		}
	}
	int find(int p)
	{
		if(arr[p]== -13) return p;
		else
		{
			arr[p]=find(arr[p]);
			return arr[p];
		}
	}
	void union1(int x,int y)
	{
		int r1,r2,countcomp=0;
		r1=find(x);
		r2=find(y);

		if(r2 != r1)
		{
			arr[r2]=r1;
			for(int i=1;i<=a;i++)
			{
				if(arr[i]== -13) countcomp++;
			}

			cout<<countcomp<<endl;
		}

		if(r1==r2)
		{
			for(int i=1;i<=a;i++)
			{
				if(arr[i]== -13) countcomp++;
			}
			cout<<countcomp<<" "<<"CYCLE FORMED!"<<endl;

		}
		//cout<<countcomp(n,p)<<" "<<"CYCLE FORMED!"<<endl;

	}
};


int main()
{
	int n,a,b;
	//int *arr;
	cin>>n;
	comp my(n);
	while(cin>>a)
	{
		cin>>b;
		my.union1(a,b);
	}

	return 0;
}

