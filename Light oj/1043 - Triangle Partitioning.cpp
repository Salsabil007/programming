#include<bits/stdc++.h>
using namespace std;
double triangle_ratio(double ab,double bc, double ca, double ad)
{
    double ae=(ca*ad)/ab;
    double de=(bc*ad)/ab;
    double s1=(ab+bc+ca)/2.00;
    double s2=(ad+ae+de)/2.00;
    double triarea=sqrt(s2*(s2-ad)*(s2-ae)*(s2-de));
    double recarea=sqrt(s1*(s1-ab)*(s1-bc)*(s1-ca)) - sqrt(s2*(s2-ad)*(s2-ae)*(s2-de));
    return triarea/recarea;
}
double getad(double ab,double bc, double ca,double rio)
{
    double low=0.00,high=ab,mid,ad;
    for(int i=0;i<100;i++)
    {
        mid = (low+high)/2.0;
        ad = mid;

        if(triangle_ratio(ab,bc,ca,ad)>rio)
            high=mid;

        else
            low=mid;
    }
    return ad;
}
int main()
{
    double ab,bc,ca,rat,ad,de,ea,rt;
    int t,q;
    cin>>t;
    for(q=1;q<=t;q++)
    {
        cin>>ab>>ca>>bc>>rt;
        double ans=getad(ab,bc, ca,rt);
        printf("Case %d: %0.10f\n",q,ans);
    }

}
