#include<bits/stdc++.h>
using namespace std;
class student
{
	int val;
	string name;
public:
	void name(string s)
	{
		name=s;

	}
	int name(string n)
	{
		val=n;
	}
}
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	student s1;
	cout<<s1.name("arvind")<<endl;
	cout<<s1.name(4);
	return 0;
}