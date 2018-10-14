#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,i,j,k,l,n,m,updown=4,op_cl=3,en_ex=5,q;
    cin>>t;
    for(q=1;q<=t;q++)
    {
        cin>>n>>m;
        long long sum=0;
        sum=3*op_cl+abs(n-m)*4+n*4+2*en_ex;
        cout<<"Case "<<q<<": "<<sum<<endl;
    }
}
