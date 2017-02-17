#include<iostream>
using namespace std;
#include<algorithm>
int main()
{
	string s;
	while(cin>>s,s!="#")
	{
		if(next_permutation(s.begin(),s.end()))
		{
			cout<<s;
		}
		else
			cout<<"No Successor";
		cout<<"\n";
	}
	return 0;
}
