#include<iostream>
using namespace std;

#include <bits/stdc++.h>
int main()
{
	int t;
	while(cin>>t,t)
	{
		int a[t];
		while(1){
			cin>>a[0];
			if(!a[0])
				break;
			for(int i=1;i<t;i++)
			{
				cin>>a[i];
			}
			stack<int> mstack;
			mstack.push(-1);
			int count=t,arr_index=t-1;
			while(1)
			{
				if(arr_index==-1 && mstack.top()!=count)
					break;
				if(a[arr_index]==count)
				{
					count--;
					arr_index--;
				}
				else if(mstack.top()==count)
				{
					count--;
					mstack.pop();
				}
				else 
					mstack.push(a[arr_index--]);
			//	cout<<"\n----"<<count;
				
			}	
			if(count==0)
				cout<<"Yes";
			else
				cout<<"No";
			cout<<"\n";
		}
		cout<<"\n";
	}
	return 0;
}

