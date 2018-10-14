#include<bits/stdc++.h>
using namespace std;
const double pi = acos(-1);
int main()
{
    double x1,y1,x2,y2,x,ang1,ang2,r1,r2,d,area;
    int t,i,j;
    cin>>t;
    for(int q=1;q<=t;q++)
    {
        printf("Case %d: ",q);
        cin>>x1>>y1>>r1>>x2>>y2>>r2;
        d=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));

        if (d >= r1 + r2) {
  //  printf("Case %d: %d\n", q,0);
    printf("%d\n",0);
    continue;
  }
  else if (d + r1 <= r2) {
  //  printf("Case %d: %0.10lf\n", q, pi * r1 * r1);
    printf("%0.10lf\n",pi*r1*r1);
    continue;
  }
  else if (d + r2 <= r1) {
//    printf("Case %d: %0.10lf\n", q, pi * r2 * r2);
    printf("%0.10lf\n",pi*r2*r2);
    continue;
  }
    double area2;
        x=(r1+r2+d)/2.00;
        x=sqrt(x*(x-r1)*(x-r2)*(x-d));
        x=(2.00*x)/d;
        y1=sqrt(r1*r1-x*x);
        y2=sqrt(r2*r2-x*x);
        ang1=2.00* asin(x/r1);
        ang2=2.00* asin(x/r2);
        area= (abs(ang1*r1*r1)/2.00) - abs(y1 * x);
        area=abs(area);
        area2= (abs(ang2*r2*r2)/2.00) - abs(y2 * x);
        area2=abs(area2);
     //   cout<<"Case "<<q<<": "<<area<<endl;
   //     printf("Case %d: %0.10lf\n",q,area);
        printf("%0.10lf\n",area+area2);
    }
}
