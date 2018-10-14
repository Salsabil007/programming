#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cnt=0;
    map < string, int > mp;
    std::ifstream file("Read1.txt");
    std::string str1;
    while (std::getline(file, str1))
    {
        mp[str1]++;
    }

    std::ifstream file2("Read2.txt");
    std::string str2;
    while (std::getline(file2, str2))
    {
        if(mp[str2] > 0)
        {
            cout<<str2<<endl;
            cnt++;
            mp[str2]--;
        }
    }
    cout<<cnt<<endl;
    return 0;


}
