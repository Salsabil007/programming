#include<iostream>
#include<conio.h>
using namespace std;

void insertion(int *arr,int l)
{
	int i,j;
	for(j=1;j<l;j++)
	{
		int key = arr[j];
		i = j-1;
		while(i>=0 && arr[i]>key)
		{
			arr[i+1] = arr[i];
			i--;
		}

		arr[i+1] = key;

	for(int k=0;k<l;k++)
	{
		cout<<arr[k]<<" ";
	}
	cout<<endl;
	}
}

int main()
{
	int n,arr[100];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	insertion(arr,n);
	getch();
	return 0;
}
