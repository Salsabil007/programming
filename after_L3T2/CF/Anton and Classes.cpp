#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j,k,l,r,diff=0,mn=0,less_end1=INFINITY,most_start1=0,less_end2=INFINITY,most_start2=0;
    vector< pair < int, int > > chess;
    vector< pair < int, int > > prog;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>l>>r;
        chess.push_back(make_pair(l,r));
        if(l>most_start1) most_start1=l;
        if(r<less_end1) less_end1=r;
    }
    cin>>m;
    for(i=0; i<m; i++)
    {
        cin>>l>>r;
        prog.push_back(make_pair(l,r));
        if(l>most_start2) most_start2=l;
        if(r<less_end2) less_end2=r;
    }
    vector< pair < int, int > >::iterator it,it1;
    int mn1=most_start2-less_end1;
    int mn2=most_start1-less_end2;
 //   cout<<mn1<<" "<<mn2<<endl;
    mn=mn1>mn2?mn1:mn2;
    if(mn<0) cout<<0;
    else cout<<mn;
}
