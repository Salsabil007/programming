#include<bits/stdc++.h>
using namespace std;
//#define pi 3.14159265358979
int main()
{
    long long t,i,j,k,l,r1,r2,h,p;
    cin>>t;
    for(int q=1;q<=t;q++)
    {
        cin>>r1>>r2>>h>>p;
        double x = ((h-p)*1.00/h*1.00) * (r1-r2);
  //      cout<<x<<endl;
        double r = r1 - x;
   //     cout<<r<<endl;
        double area = (3.14159265358979 * p * (r*r + r2 * r2 + r * r2))/3.00;
   //     cout<<area<<endl;
        printf("Case %d: %.9f\n", q,area);
    }
}
