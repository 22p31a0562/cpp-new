#include<bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int>p;
    p.push(1); //{1}
    p.push(3); //{3,1}
    p.push(7); //{7,3,1}
    cout<<p.top()<<endl; // 7
    p.pop(); //{3,1}
    cout<<p.top()<<endl; //3
    //--------------------------------------
    priority_queue<int, vector<int>,greater<int>>pq;
    pq.push(3);//{3}
    pq.push(2);//{2,3}
    pq.push(1);//{1,2,3}
    cout<<pq.top()<<endl; //1
    pq.pop();//{2,3}
    cout<<pq.top();//2

}