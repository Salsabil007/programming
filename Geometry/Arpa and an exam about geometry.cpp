#include<bits/stdc++.h>
using namespace std;

double INF = 1e100;
double EPS = 1e-12;

struct PT
{
    double x, y;
    PT() {}
    PT(double x, double y) : x(x), y(y) {}
    PT(const PT &p) : x(p.x), y(p.y) {}
    PT operator + (const PT &p) const
    {
        return PT(x+p.x, y+p.y);
    }
    PT operator - (const PT &p) const
    {
        return PT(x-p.x, y-p.y);
    }
    PT operator * (double c) const
    {
        return PT(x*c, y*c );
    }
    PT operator / (double c) const
    {
        return PT(x/c, y/c );
    }
};

double ComputeSignedArea(const vector<PT> &p)
{
    double area = 0;
    for(int i = 0; i < p.size(); i++)
    {
        int j = (i+1) % p.size();
        area += p[i].x*p[j].y - p[j].x*p[i].y;
    }
    return area / 2.0;
}

double ComputeArea(const vector<PT> &p)
{
    return fabs(ComputeSignedArea(p));
}

double dot(PT p, PT q)
{
    return p.x*q.x+p.y*q.y;
}
double dist2(PT p, PT q)
{
    return dot(p-q,p-q);
}

int main()
{
    double ax,ay,bx,by,cx,cy;
    cin>>ax>>ay>>bx>>by>>cx>>cy;

    PT a = PT(ax,ay);
    PT b = PT(bx,by);
    PT c = PT(cx,cy);

    vector<PT> pnt;
    pnt.push_back(a);
    pnt.push_back(b);
    pnt.push_back(c);

    double area = ComputeArea(pnt);
    if(fabs(area-0)<=EPS)
    {
        cout<<"No"<<endl;
        return 0;
    }

    if(dist2(a,b)!=dist2(b,c))
    {
        cout<<"No"<<endl;
        return 0;
    }

    cout<<"Yes"<<endl;

    return 0;
}
