#include<iostream>
using namespace std;

#include<stdio.h>
int main()
{
	int a;
	while (scanf("%d", &a), (a)) 
	{
		int m,n;
		cin>>m>>n;
		while(a--)
		{
			int x,y;
			cin>>x>>y;

			//check
			if(x==m || y==n)
				cout<<"divisa";
			else if(x>m)
			{
				if(y>n)
					cout<<"NE";
				else
					cout<<"SE";
			}
			else
			{
				if(y>n)
					cout<<"NO";
				else
					cout<<"SO";
			}
			cout<<"\n";
		}
	}
	return 0;
}


