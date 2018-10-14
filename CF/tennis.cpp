#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n1,n2,i,j,k,l;
    cin>>n1>>n2;
    if(n1 % 2 == 0 && n2 == n1+1)
    {
        cout<<"1"<<endl;
    }
    else if(n1 % 2 != 0 && n2 == n1-1)
    {
        cout<<"1"<<endl;
    }
    int x1=n1/2, x2= n2/2;
    if((x1 >= 0 && x1 <= 3) && (x2 >= 4 && x2 <= 7))
       {
           cout<<"4"<<endl;
       }
    else if(x1 % 2 ==0 && x2 == x1+1)
    {
        cout<<(x2 - x1)+1<<endl;
      //  cout<<(x1 * 2)+(x2-x1)<<endl;
    }
    else cout<<"3"<<endl;
}
