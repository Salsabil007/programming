#include<bits/stdc++.h>
using namespace std;
int B_search(int arr[100], int key)
{
    int low = 0,mid;
    int high=sizeof(arr)-1;
    int index=-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(key == arr[mid])
        {
            index=mid;
            break;
        }
        else if(key > arr[mid])
        {
            low=mid+1;
        }
        else if(key < arr[mid])
        {
            high=mid-1;
        }
    }
    return index;
}
int main()
{
    int arr[]={10,20,20,30,30,40,50};
    vector<int> v(arr,arr+7);
    int i=B_search(arr,10);
 //   cout<<i<<endl;
    vector<int>::iterator k,kk;
    k=lower_bound(v.begin(),v.end(),500);
    kk=upper_bound(v.begin(),v.end(),500);
    cout<<kk-v.begin()<<endl;

}
