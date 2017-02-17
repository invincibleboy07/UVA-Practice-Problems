#include<iostream>
using namespace std;

int c;

check(string big[],string small [],int n, int m)
{
	for(int i=0;i<=n-m;i++)
		for(int j=0;j<=n-m;j++)
		{
			int co=0;
			for(int k=0;k<2;k++)
				for(int l=0;l<2;l++)
				{
					if(big[i+k][j+l]==small[k][l])
						co++;
				}
			if(co==m*m)
			{c++; cout<<" "<<i<<" "<<j;}
		}
}
			




				
int main()
{

	int n,m;
	
	while(cin>>n>>m,(n||m))
	{

		string big[n];
		string small[m];
		for(int i=0;i<n;i++)
		{
			cin>>big[i];
		}

		for(int i=0;i<n;i++)
		{
			cin>>small[i];
		}


		for(int cn=0;cn<3;cn++)
		{
			check(big,small,n,m);
			//rotate(small,m);
			
		}
		cout<<"\n"<<c;
	}
	return 0;
}

