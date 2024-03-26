#include<bits/stdc++.h>
using namespace std;
int main()
{
	unordered_set<int>s;
	for(int i=1;i<=20;i++)
	{
		s.insert(i);
	}
	for(auto it=s.begin;it!=s.end();it++)
	{
		cout<<*it<<" ";
	}
}
