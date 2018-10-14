#include<bits/stdc++.h>
using namespace std;
int main()
{
    string arr[]={"a","b","c","ab","ac","bb","bz"};
    sort(arr,arr+7);
    for(int i=0;i<7;i++)
    {
        cout<<arr[i]<<endl;
    }
}
