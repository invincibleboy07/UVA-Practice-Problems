#include<iostream>
using namespace std;
#include<algorithm>
int main()
{

	int t;
	cin>>t;
		int c=1;
	while(t--)
	{
		int a[3];
	
		cin>>a[0]>>a[1]>>a[2];

		sort(a,a+3);

		cout<<"Case "<<c++<<": "<<a[1];
		cout<<"\n";
	}
	return 0;
}
