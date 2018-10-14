#include<bits/stdc++.h>
using namespace std;
int main()
{

    map < string, int > mp;
    int n,i,j,k,cnt=0;
    cin>>n;
    string s;
    cin>>s;
    string t;
    for(i=0;i<n-1;i++)
    {
        string ss=s.substr(i,2);
        int flag=0;
        mp[ss]++;
        if(mp[ss] > cnt)
        {
            cnt=mp[ss] ;
            t=ss;
        }
    }
    cout<<t<<endl;
}
