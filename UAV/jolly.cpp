#include<iostream>
using namespace std;
#include<cmath>

#include<set>
#include<vector>
#include<stdio.h>
int main()
{
	int n;
	//cin>>n;
	while(scanf("%d",&n)!=EOF){
	//int n;
	
	vector <int> vec(n,0),vec1;
	for(int i=0;i<n;i++)
	{
		int temp;
		cin>>temp;
		vec1.push_back(temp);
	}
	
	set<int> s;
	for(int i=1;i<n;i++)
	{
		//vec[vec1[i]-vec1[i-1]]++;
		s.insert(abs(vec1[i]-vec1[i-1]));
	}
	int flag=1;
	set<int>::iterator it;
	int c=1;
	//cout<<s.size();
	for( it=s.begin();it!=s.end();it++)
	{
	//	cout<<" "<<*it<<" ";
		if((*it)!=c)
		{
			flag=0;
			break;
		}
		c++;
	}
	if(s.size()!=n-1)
		flag=0;
	if(flag)
		cout<<"Jolly";
	else
		cout<<"Not jolly";
	cout<<"\n";
	}
	return 0;
}
