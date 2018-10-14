#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,i,j,k,l;
    cin>>t;
    for(int q=1;q<=t;q++)
    {
        double a,b,c,d,mx,mn,area1,area2;
        cin>>a>>b>>c>>d;
        mx=a > c ? a:c;
        mn=a<c?a:c;
        a=mx;
        c=mn;
        area1=((a-c)+b+d)/2.00;
        area1=sqrt(area1*(area1-(a-c))*(area1-b)*(area1-d));
        mx=(area1*2.00)/(a-c);
    //    cout<<"mx "<<mx<<endl;
        area2=0.5 * mx * (a+c);
        printf("Case %d: %0.10lf\n",q,area2);

    }
}
