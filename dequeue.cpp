#include<bits/stdc++.h>
using namespace std;
int main()
{
    deque<int>d;
    d.push_back(1);
    d.push_back(2);
    for(auto it:d)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    d.emplace_back(3);
    d.emplace_back(4);
    for(auto it:d)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    d.push_front(6);
    d.push_front(7);
    for(auto it:d)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    d.emplace_front(8);
    d.emplace_front(9);
    for(auto it:d)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    d.pop_back();
    for(auto it:d)
    {
        cout<<it<<" ";
    }
}