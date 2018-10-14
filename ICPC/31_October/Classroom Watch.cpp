#include<bits/stdc++.h>
using namespace std;
int Sum_Of_Dig(int n)
{
    int sum=0,rem;
    while(n!=0)
    {
        rem=n%10;
        n=n/10;
        sum+=rem;
    }
    return sum;
}
int main()
{
    vector < int > vec;
    int n,i,j,k,l,p;
    cin>>n;
    for(i=1;i<=81;i++)
    {
        p=n-i;
        if(p>0 && i==Sum_Of_Dig(p))
        {N
            vec.push_back(p);
        }
    }
    sort(vec.begin(),vec.end());
    cout<<vec.size()<<endl;
    for(i=0;i<vec.size();i++)
    {
        cout<<vec[i]<<" ";
    }
    return 0;
}
