#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,k,l,x,sum=0;
    cin>>n;
    vector < int > v;
    for(i=0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    for(i=0;i<n-1;i++)
    {
        sum+=v[i];
    }
    cout<<1+v[n-1]-sum<<endl;
    return 0;

}
