#include<bits/stdc++.h>
using namespace std;
int main()
{
     //   freopen("parin.in","r",stdin);
 //   freopen("parout.out","w",stdout);
    int t,i,j,k,l;
    string s;
   scanf("%d",&t);
    cin.ignore();
    for(j=1;j<=t;j++)
    {

       getline(cin,s);
      // cin>>s;
        stack<char>stc;
   //     if(s.length()==1) {printf("No\n");continue;}
      //  stc.push(s[0]);
        for(i=0;i<s.length();i++)
        {
              //  if(stc.empty()) stc.push(s[i]);
                if(stc.empty()==0 && stc.top()=='(' && s[i]==')') stc.pop();
                else if(stc.empty()==0 && stc.top()=='[' && s[i]==']') stc.pop();
                else stc.push(s[i]);
        }
        if(stc.empty()) printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}

/*#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;

    scanf("%d",&t);
    cin.ignore();

    while(t--)
    {
        string str;

        getline(cin,str);

        stack<char> stk;

        for(int i=0;i<str.length();i++)
        {
            if(!stk.empty() && str[i]==')' && stk.top()=='(')
            {
                stk.pop();
            }
            else if(!stk.empty() && str[i]==']' && stk.top()=='[')
            {
               stk.pop();
            }
            else
            {
                stk.push(str[i]);
            }
        }

        if(stk.empty())
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }

    return 0;
}
*/
