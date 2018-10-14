#include<bits/stdc++.h>
using namespace std;
int main()
{
    int na,nb, k,m,x;
    cin>>na>>nb;
    vector < int > A,B;
    cin>>k>>m;
    int i,j;
    for(i=0;i<na;i++)
    {
        cin>>x;
        A.push_back(x);
    }
    for(i=0;i<nb;i++)
    {
        cin>>x;
        B.push_back(x);
    }
    int mn=A[k-1],mx=B[nb-m];
    if(mn < mx) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
