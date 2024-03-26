#include<bits/stdc++.h>
using namespace std;
int main()
{
    // list is similar as vector but in list both insertion and deletion is possible at the both ends of a list
    list<int>ls;
    ls.push_back(1);
    for(auto it:ls)
    {
        cout<<it;
    }
    cout<<endl;
    ls.emplace_back(6);
    for(auto it:ls)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    ls.push_front(3);
    for(auto it:ls)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    ls.emplace_front(9);
    for(auto it:ls)
    {
        cout<<it<<" ";
    }
}