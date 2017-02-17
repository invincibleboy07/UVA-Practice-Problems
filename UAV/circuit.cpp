#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	int ca=1;
	while(t--)
	{
	
		int n;
		cin>>n;
		int a[n],b[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		for(int i=0;i<n;i++)
			cin>>b[i];

		int c[n];
		c[0]=a[0]-b[0];
		for(int i=1;i<n;i++)
		{
			c[i]=a[i]-b[i];
		}

		int sum=0;
		for(int i=0;i<n;i++)
			sum=sum+c[i];

		if(sum<0)
			cout<<"Case "<<ca++<<": "<<"Not possible";
		else
		{
			/*int i;
			for(i=n-1;i>0;i--)
			{
				if(c[i]<0)
					break;
			}
			cout<<"Case "<< ca++ <<": "<<"Possible from station "<< (i+2);

			*/
			for(int i=0;i<n;i++)
			{
				int j,k=0;
				j=i;
				sum=0;
				while((sum)>=0)
				{
				//	cout<<" "<<sum;
					sum+=c[j];
					j++;
					k++;
					if(j==n-1)
						j=0;
					if(k==n)
						break;
				}
				if(k==n && sum>=0)
				{
						cout<<"Case "<< ca++ <<": "<<"Possible from station "<<i+1; break;
				}
			}
			

		}
		cout<<"\n";
	}
	return 0;
}


