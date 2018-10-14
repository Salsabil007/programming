#include<bits/stdc++.h>
//#include<conio.h>
using namespace std;
	int *arr;
class comp
{

public:
    	int a;

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

		}

	}
};


int main()
{
	int n,x,b,cnt=0;
	//int *arr;
	cin>>n;
	comp my(n);
	for(int i=1;i<=n;i++)
    {
        cin>>x;
        my.union1(i,x);
    }
    for(int i=1;i<=n;i++)
    {
        if(arr[i]== -13) cnt++;
    }
    cout<<cnt;
	return 0;
}


