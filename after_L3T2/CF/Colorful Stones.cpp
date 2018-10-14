#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    int i,j,k,l;
    cin>>s1>>s2;
    int pos=0;
    for(i=0; i<s2.length();i++)
    {
        if(s1[pos]==s2[i]) pos++;
        if(pos==s1.length()-1) break;
    }
    cout<<pos+1;
    return 0;
}
