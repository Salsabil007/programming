#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,k,l;
    cin>>n;
    int prev1=2,prev2=1;
    if(n==1) {cout<<"O";return 0;}
    else if(n==2) {cout<<"OO";return 0;}
    cout<<"OO";
    for(i=3;i<=n;i++)
    {
        if(i==prev1+prev2)
        {
            cout<<"O";
            prev2=prev1;
            prev1=i;
        }
        else cout<<"o";
    }
}
