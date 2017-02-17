#include<iostream>
using namespace std;

#include<stdio.h>
#include<vector>
int main()
{

	int a, b;

	while(scanf("%d %d",&a,&b),(a||b))
	{
		//vector<int> ar(a+1,-1);
		int left[a+1],right[a+1];
		for(int i=0;i<=a;i++)
		{
			left[i]=i-1;
			right[i]=i+1;
		}
		while(b--)
		{
			int d1,d2;
			cin>>d1>>d2;
			if(left[d1]==0)
				cout<<"*";
			else
				cout<<left[d1];
			cout<<" ";
			if(right[d2]==a+1)
				cout<<"*";
			else
				cout<<right[d2];
			cout<<"\n";

			left[right[d2]]=left[d1];
			right[left[d1]]=right[d2];

				




		}	
		cout<<"-\n";		


			//d2-=1;
			
			
			/*if(it-1==ar.begin())
				cout<<"*";
			else
				cout<<*(it-1);
			cout<<" ";
			if(it+1=ar.end())
				cout<<"*\n";
			else
			cout<<*(it+1)<<endl;
			//for( ;it!=d2;i++)
				ar.erase(it1,it2);
			
			
		}
		cout<<"-\n";*/
	}
	return 0;
}
