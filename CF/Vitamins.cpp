#include<bits/stdc++.h>
using namespace std;
int main()
{
    int A=1000000,B=1000000,C=1000000,AB=1000000,BC=1000000,AC=1000000,ABC=1000000, i,j,k,l,n,x;
    int flaga=0,flagb=0,flagc=0;
    cin>>n;
    string s;
    for(i=0;i<n;i++)
    {
        cin>>x;
        cin>>s;
        if(s=="A")
        {
            if(x<A)
            {
                flaga=1;
                A=x;
            }
        }
        else if(s=="B")
        {
            if(x<B)
            {
                flagb=1;
                B=x;
            }
        }
        else if(s=="C")
        {
            if(x<C)
            {
                flagc=1;
                C=x;
            }
        }
        else if(s=="AB" || s=="BA")
        {
            if(x<AB)
            {

                flaga=1;
                flagb=1;
                AB=x;
            }
        }
        else if(s=="BC" || s=="CB")
        {
            if(x<BC)
            {
                flagb=1;
                flagc=1;
                BC=x;
            }
        }
        else if(s=="CA" || s=="AC")
        {
            if(x<AC)
            {
                flaga=1;
                flagc=1;
                AC=x;
            }
        }
        else
        {
            if(x< ABC)
            {
                flaga=1;
                flagb=1;
                flagc=1;
                ABC=x;
            }
        }

    }
  //  cout<<A<<" "<<B<<" "<<C<<" "<<AB<<" "<<BC<<" "<<AC<<" "<<ABC<<endl;

    int p=min(A+B+C, AB+C) ;
    p=min(p,BC+A);
    p=min(p,AC+B);
    p=min(p,ABC);
    p=min(p,AB+BC);
    p=min(p,AC+BC);
     p=min(p,AC+AB);
    if(flaga && flagb && flagc) {cout<<p<<endl;}
    else cout<<"-1"<<endl;
}
