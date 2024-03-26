#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,int>mp;
    //insertion of elements
    mp[1]=2;
    mp.insert({4,1});
    mp.insert({3,2});
    for(auto it=mp.begin();it!=mp.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
    cout<<endl;
    //another way of inserting
    map < int, int > m;
    for (int i = 1; i <= 5; i++) {
        m.insert({i , i * 10});
    }

    cout << "Elements present in the map: " << endl;
    cout << "Key\tElement" << endl;
    for (auto it = m.begin(); it != m.end(); it++) {
        cout << it -> first << "\t" << it -> second << endl;
  }

}