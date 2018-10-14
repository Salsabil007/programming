#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,i,j;
    cin>>t;
    for(int qq=1;qq<=t;qq++)
    {
        double p,q,theta,s,r,a,b;
        char c;
        cin>>a>>c>>b;
        p=sqrt((a/2.00)*(a/2.00)+(b/2.00)*(b/2.00));
        theta=acos((b/2.00)/p);
     //   cout<<"theta "<<theta<<endl;
        theta=((3.1415926535)/2.00)-theta;
        theta=2.00 * theta;
        s= p * theta;
        q=(400.00)/((2*s)+(2*a));
        printf("Case %d: %.7lf %.7lf\n",qq,q*a,q*b);
    }
}
