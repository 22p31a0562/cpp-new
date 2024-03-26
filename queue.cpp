#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<int>q;
    q.push(3);
    q.push(8);
    q.emplace(9);
    //queue--> 3,8,9;
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    q.back()+=10;
    cout<<q.back()<<endl;
    q.pop();
    cout<<q.front()<<endl;

}