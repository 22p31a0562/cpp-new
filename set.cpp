#include<bits/stdc++.h>
using namespace std;
int main()
{
    // set stores elements in a sorted order
    //set stores only unique elements
    set<int>s;
    s.insert(3); //{3}
    s.insert(4); //{3,4}
    s.insert(10);//{3,4,10}
    s.insert(1); //{1,3,4,10}
    auto it =s.find(2);
    cout<<*it<<endl;
    s.erase(10);
    auto a=s.find(3);
    cout<<*a<<endl;
    int c=s.count(1); // returns 1-->if element is present , 0-->if element is absent
    cout<<c<<endl; 
    set<int>ss;
    //inserting elements into a set
    for(int i=1;i<=10;i++)
    {
        ss.insert(i);
    }
    for(auto it=ss.begin();it!=ss.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    // searching an element in a set
    if(ss.find(1)!=ss.end())
    {
        cout<<"element present";
    }
    else
    {
        cout<<"element not present";
    }
    cout<<endl;
    // deleting an element in a set
    ss.erase(ss.begin());
    for(auto it: ss)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    // checking empty or not
    cout<<ss.empty()<<endl; // 0-->not empty , 1-->empty
    // clearing all elements
    ss.clear();
    cout<<ss.empty()<<endl;
    //-------------------------------------------------------------------------------
    //**MULTISET**
    // It is same as the set
    // It stores duplicate elements also
    multiset<int>m;
    m.insert(1);//{1}
    m.insert(3);//{1,3}
    m.insert(4);//{1,3,4}
    m.insert(1);//{1,1,3,4}
    m.insert(3);//{1,1,3,3,4}
    int b = m.count(3); // counts the no of occurences of an element
    cout<< b<<endl;
    m.erase(1); // erases all the 1's in a set
    for(auto it=m.begin();it !=m.end();it ++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    m.erase(m.find(4)); //only single elenent will be erased
    for(auto it=m.begin();it !=m.end();it ++)
    {
        cout<<*it<<" ";
    }
    // rest all functions are same as the set
    //---------------------------------------------------------------------------------
    unordered_set < int > us;
    for (int i = 1; i <= 10; i++) {
        us.insert(i);
    }
    cout << "Elements present in the unordered set: ";
    for (auto it = us.begin(); it != us.end(); it++) {
        cout << * it << " ";
    }
    cout << endl;
    int n = 2;
    if (us.find(2) != us.end())
        cout << n << " is present in unordered set" << endl;
    us.erase(us.begin());
    cout << "Elements after deleting the first element: ";
    for (auto it = us.begin(); it != us.end(); it++) {
        cout << * it << " ";
    }
    cout << endl;
    cout << "The size of the unordered set is: " << us.size() << endl;
    if (us.empty() == false)
        cout << "The unordered set is not empty " << endl;
    else
        cout << "The unordered set is empty" << endl;
    us.clear();
    cout << "Size of the unordered set after clearing all the elements: " << us.size();

}
