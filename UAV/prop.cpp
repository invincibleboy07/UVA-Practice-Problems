#include<iostream>
using namespace std;

#include<algorithm>
//#include<pair>
#include<vector>
#include<stdlib.h>
#include<stdio.h>
bool cmp(pair<pair<int,float>,string>  &a, pair<pair<int,float>,string>  &b)
{
   	if(a.first.first>b.first.first)
		return true;
	else if(a.first.first==b.first.first && a.first.second<b.first.second)
		return true;
	else
		return false;
}

int main()
{
	int n,p;
	int c=1;

	
	while(scanf(" %d %d",&n,&p),(n || p))
	{
		//string dum;
		//	getline(cin,dum);
		for(int i=0;i<n;i++)
		{
			string temp;
			
			//char temp[200];
			cin.ignore();
		//	scanf("%[^\n]",temp);
			getline(cin,temp);
		//	getch();
		}
		vector <pair<pair<int,float>,string> > myvec;
		for(int i=0;i<p;i++)
		{
			string s;
			int a;
			float b;
			//pair<pair<int,float>,string> tee;
		//	cout<<"here\n";
		getline(cin,s);
			//	tee.second;
			cin>>b;
			//tee.first.second;
			cin>>a;
			//tee.first.first;
			//int tm=tee.first.first;
			myvec.push_back(make_pair(make_pair(a,b),s));
			//int tm=myvec[i].first.first;
		//	cout<<"+++++++++++ " <<s<<"\n";
		//	cout<<"--------------  "<<a<<"\n";
		//	cin.ignore(100,'\n');
//string dump;
//			getline(cin,dump);
			cin.ignore();
			while(a--)
			{
				string tmo;
			//	char tmo[200];
				//scanf("%[^\n]",tmo);
			//	
				//string dump;
			//	getline(cin,dump);
				getline(cin,tmo);
		//		cout<<"aaaaaaaaaaaaaaaaaaaaaaaaaaa";
			}
		}
		sort(myvec.begin(),myvec.end(),cmp);
	
			
		
		cout<<"RFP #"<<c++<<"\n"<<myvec[0].second<<"\n";
	}
	return 0;
}

