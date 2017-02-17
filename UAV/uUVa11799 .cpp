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
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}

		sort(a,a+n);
		cout<<"Case "<<c++<<" "<<a[n-1];
		cout<<"\n";
	}
	return 0;
}
