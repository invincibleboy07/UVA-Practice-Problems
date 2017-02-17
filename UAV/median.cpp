#include<iostream>
using namespace std;
#include<stdio.h>
#include<algorithm>
#include<vector>
#include <functional>
vector<int> a;
int main()
{
	//vector<int> a;
	int n,count=0;
	while(scanf("%d",&n)!=EOF)
	{
		count++;
		a.push_back(n);
		int k=count/2;
	//	sort(a.begin(),a.end());
		(nth_element(a.begin(),a.begin()+ k-1,a.end()) );
	       	(nth_element(a.begin(),a.begin() + k,a.end()));
		if(count%2==0)
		{
			
			cout<<(int)((a[count/2-1]+a[count/2+1-1])/2);
		//	cout<< ())/2;
		}
		else
			cout<<a[count/2+1-1];
		/*{	nth_element(a.begin(),a.begin()+count/2-1,a.end());
			cout<<j;}*/
			
			cout<<"\n";
	}
	return 0;
}




