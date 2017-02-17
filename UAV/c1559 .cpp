#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int p,b,h,w;
		cin>>p>>b>>h>>w;
		int mbud=b+1;

		while(h--)
		{
			int c=0;
			cin>>c;
			int max=-1;
			for(int i=0;i<w;i++)
			{
				int temp;
				cin>>temp;
				if(temp>max)
					max=temp;
			}
			if(max<p)
				continue;
			else
				int tmep1=p*c;
			if(tmep1<mbud)
				mbud=tmep1;

		}

		if(mbud<=b)
			cout<<mbud;
		else
			cout<<"stay home";
		cout<<"\n";
	}
	return 0;
}


