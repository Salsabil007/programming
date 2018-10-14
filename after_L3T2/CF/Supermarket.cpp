#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j;
    float a,b,f,mn=INFINITY;
    cin>>n>>m;
    for(i=1;i<=n;i++)
    {
        cin>>a>>b;
        f=((a*1.00)/(b*1.00))*(m*1.00);
        if(f<=mn) mn=f;

    }
    printf("%0.8f\n",mn);

}
