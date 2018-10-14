#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,sum=0;
    string s;
    cin>>s;
    int n=s.length();
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            for(k=j+1;k<n;k++)
            {
                if(s[i]=='Q' && s[j]=='A' && s[k]=='Q') sum++;
            }
        }
    }
    cout<<sum<<endl;
}
