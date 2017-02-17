#include<iostream>
using namespace std;
#include<stdio.h>
#include<map>
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		map<char,double> mp;
		for(int i=0;i<n;i++)
		{
			char key;
			int cent;
			cin>>key>>cent;
			mp[key]=cent;
		}
		int m;
		cin>>m;
		cin.ignore();
		string s;
		int sum=0;
		for(int i=0;i<m;i++)
		{
			s="";
			getline(cin,s);
			int le=s.length();
			for(int j=0;j<le;j++)
			{
				/*map<char, double>:: iterator it;
					it = mp.find(s[j]);
					if(it != mp.end())
						sum += it->second;
					*/
				if(mp.count(s[j])){
				map<char, double>:: iterator it;
					it=mp.find(s[j]);
					sum=sum+it->second;
				}
			}
		}
		double dol= sum/100.0;
	
		printf("%.2lf$\n",dol);
	}
	return 0;
}
