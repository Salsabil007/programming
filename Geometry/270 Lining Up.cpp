#include<bits/stdc++.h>
using namespace std;
//int gcd(int x, int y) {
//	if(y == 0)	return x;
//	x = abs(x);
//	y = abs(y);
//	int tmp;
//	while(x%y) {
//		tmp = x, x = y, y = tmp%y;
//	}
//	return y;
//}
int gcd(int x, int y) {
	if(y == 0)	return x;
	x = abs(x);
	y = abs(y);
	int tmp;
	while(x%y) {
		tmp = x, x = y, y = tmp%y;
	}
	return y;
}
int main()
{
    vector < pair < int, int > > v,v1;
    int t,i,j,k,x,y;
    cin>>t;
    while(t--)
    {
        v.clear();
        while(scanf("%d %d",&x,&y) != -1)
        {
            v.push_back(make_pair(x,y));
        }
        int ans,ans1=0;
        for(i=0;i<v.size()-1;i++)
        {
            v1.clear();
            for(j=i+1;j<v.size();j++)
            {

                int p=v[i].first-v[j].first;
                int q=v[i].second-v[j].second;
                int pp=gcd(p,q);
                p=p/pp;
                q=q/pp;
             //   if(p<0) p=-p,q=-q;
        //        cout<<"gcd "<<pp<<endl;
                v1.push_back(make_pair(p,q));

            }


        sort(v1.begin(),v1.end());
     //   reverse(v1.begin(),v1.end());
//      for(i=0;i<v1.size();i++)
//        {
//            cout<<v1[i].first<<" "<<v1[i].second<<"###"<<endl;
//        }
        int lastx=v1[0].first,lasty=v1[0].second,temp=1;
        ans=1;
        for(int ii=1;ii<v1.size();ii++)
        {
            if(lastx==v1[ii].first && lasty==v1[ii].second) {temp++;}
            else
            {
         //       cout<<"***"<<endl;
                if(temp>ans) {ans=temp;}
                temp=1;
                lastx=v1[ii].first,lasty=v1[ii].second;
            }
        }
        if(temp>ans) {ans=temp;}

        }
        cout<<ans+1<<endl;

    }
}
