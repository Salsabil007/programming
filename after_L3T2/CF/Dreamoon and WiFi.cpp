#include<bits/stdc++.h>
using namespace std;
int main()
{
    int rp=0,rm=0,hp=0,hm=0,ques=0,x,y;
    float c;
    float ans=1.000000;
    string s1,s2;
    cin>>s1>>s2;
    int i,j,k;
    float arr[]={1.00,1.00,2.00,6.00,24.00,120.00,720.00,5040.00,40320.00,362880.00, 3628800};
    for(i=0;i<s1.length();i++)
    {
        if(s1[i]=='+') rp++;
        if(s1[i]=='-') rm++;
        if(s2[i]=='+') hp++;
        if(s2[i]=='-') hm++;
        if(s2[i]=='?') ques++;

    }
 //   cout<<ques<<endl;
    if(ques == 0)
    {
        if(rp==hp && rm==hm) printf("%0.12f\n",ans);
        else
        {
            ans=0.0000;
            printf("%0.12f\n",ans);
        }
        return 0;
    }
    if(hp> rp || hm>rm)
    {
        ans=0.0000;
            printf("%0.12f\n",ans);
            return 0;
    }
   x=rp-hp;
    y=rm-hm;
    c=(arr[ques])/(arr[x]*arr[y]);
    ans=c/pow(2,ques);
    printf("%0.12f\n",ans);



}
