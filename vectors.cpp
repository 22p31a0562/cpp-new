#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.emplace_back(3);
    for(auto it=v.begin();it!=v.end();it++) // auto --> it automatically defines a datatypes like int, char,string etc..,
    {
        cout<<*it<<" "; // '*it' -> it access an elements in the memory
                        // it --> only gives memory address 
    }
    cout<<endl;
    //-----------------------------------------------------------------------------------------------
    vector<pair<int,int>>v1; // pairing in a vector
    v1.push_back({1,2});
    v1.push_back({3,4});
    for(auto i:v1)
    {
        cout<<v1[0].first<<" "<<v1[0].second<<" ";
    }
    cout<<endl;
    //-------------------------------------------------------------------------------------------------
    vector<int>v2(5,20); // filling a vector with only one value
    for(auto it=v2.begin();it!=v2.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    //--------------------------------------------------------------------------------------------------
    vector<int>v3(5); // creating a null vector
    for(auto it=v3.begin();it!=v3.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    //--------------------------------------------------------------------------------------------------
    vector<int>v4(5,80);
    vector<int>v5(v4); // copying of another vector
    for(auto it=v4.begin();it!=v4.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    for(auto it=v5.begin();it!=v5.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    //---------------------------------------------------------------------------------------------------
    vector<int>v6;
    for(int i=1;i<5;i++)
    {
        v6.push_back(i);
    }
    cout<<v6[0]<<endl;
    cout<<v6.at(1)<<endl;
    cout<<v6.back()<<endl;
    //--------------------------------------------------------------------------------------------------
    // deletion of a vector
    vector<int>v7;
    for(int i=1;i<5;i++)
    {
        v7.push_back(i);
    }
    v7.erase(v7.begin());
    v7.erase(v7.begin()+1,v7.begin()+3); // [start,end]
    for(auto it:v7)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    //-----------------------------------------------------------------------------------------------------
    //insertion of a vector
    vector<int>v8;
    for(int i=10;i<15;i++)
    {
        v8.push_back(i);
    }
    for(auto it:v8)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    v8.insert(v8.begin(),28);
    for(auto it:v8)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    //------------------------------------------------------------------------------------------------------
    // swapping of a vector
    vector<int>v9;
    for(int i=20;i<25;i++)
    {
        v9.push_back(i);
    }
    for(auto it:v9)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    cout<<v9.empty();
    v9.swap(v8); // v9 vector elements changes to v8 vector elements
    for(auto it:v9)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    v9.clear(); // clears entire vector elements
    cout<<v9.empty();
    
}