#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,s,k,x,y,i,j,l,mid,p,q;
    cin>>a>>s>>k>>x>>y;
    p=a;
    q=s;
    long long high=k,low=0;
    while(low<=high)
    {
   //     cout<<"**"<<endl;
        mid=(high+low)/2;
        p=a+(mid*x);
        q=s+((k-mid)*y);
        if(p==q) {cout<<mid<<endl;return 0;}
       else if(p > q)
        {
            high=mid-1;
        }
        else  low=mid+1;
    }
    cout<<"-1"<<endl;
    return 0;

}

