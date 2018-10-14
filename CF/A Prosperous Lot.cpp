#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,i,j,l;
    int cnt_8=0,cont_0=0;
    cin>>k;
    if(k > 36) {cout<<"-1"<<endl;return 0;}
    if(k == 1) {cout<<"9"<<endl;return 0;}
    if(k % 2 == 0)
    {
        int x=k/2;
        for(i=1;i<=x;i++)
        {
            cout<<"8";
        }
        cout<<endl;
        return 0;
    }
    else
    {
        int x=k/2;
        for(i=1;i<=x;i++)
        {
            cout<<"8";
        }
        cout<<"9"<<endl;
        return 0;
    }

}
