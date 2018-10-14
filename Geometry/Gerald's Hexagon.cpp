#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ax,ay,bx,by,cx,cy,i,j,k,l,ans;
    cin>>ax>>ay>>bx>>by>>cx>>cy;
    ans=(ay+bx+by)*(ay+bx+by);
    ans=ans-ay*ay-cy*cy-by*by;
    cout<<ans<<endl;
}
