#include<bits/stdc++.h>
using namespace std;
int main()
{
    // Stack - Last In First Out(LIFO)
    // In Stack, there are only 3 operations -> push or emplace, pop, top
    // we cannot access particular elements in a stack
    stack<int>s;
    s.push(1);
    s.push(3);
    s.emplace(4);
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    cout<<s.size();
    cout<<s.empty();
}