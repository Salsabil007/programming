#include<bits/stdc++.h>
using namespace std;
double INF = 1e100;
double EPS = 1e-12;

struct PT {
  double x, y;
  PT() {}
  PT(double x, double y) : x(x), y(y) {}
  PT(const PT &p) : x(p.x), y(p.y)    {}
  PT operator + (const PT &p)  const { return PT(x+p.x, y+p.y); }
  PT operator - (const PT &p)  const { return PT(x-p.x, y-p.y); }
  PT operator * (double c)     const { return PT(x*c,   y*c  ); }
  PT operator / (double c)     const { return PT(x/c,   y/c  ); }
};
double ComputeSignedArea(const vector<PT> &p) {
  double area = 0;
  for(int i = 0; i < p.size(); i++) {
    int j = (i+1) % p.size();
    area += p[i].x*p[j].y - p[j].x*p[i].y;
  }
  return area / 2.0;
}

double ComputeArea(const vector<PT> &p) {
  return fabs(ComputeSignedArea(p));
}
vector < PT > v;
int main()
{
    long long ax,ay,bx,by,cx,cy,dx,dy;
    int t,q;
    cin>>t;
    for(q=1;q<=t;q++)
    {
        cin>>ax>>ay>>bx>>by>>cx>>cy;
        dx=ax+cx-bx;
        dy=ay+cy-by;
        PT a=PT(ax,ay);
        PT b=PT(bx,by);
        PT c=PT(cx,cy);
        PT d=PT(dx,dy);

    v.push_back(a);
    v.push_back(b);
    v.push_back(c);
    v.push_back(d);
    long long ans=ComputeArea(v);
    cout<<"Case "<<q<<": "<<dx<<" "<<dy<<" "<<ans<<endl;
    v.clear();

    }


}
