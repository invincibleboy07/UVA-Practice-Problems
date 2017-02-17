#include<iostream>
using namespace std;


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
					cout<<"NO";
			}
			else
			{
				if(y>n)
					cout<<"SE";
				else
					cout<<"SO";
			}
		}
	}
	return 0;
}

