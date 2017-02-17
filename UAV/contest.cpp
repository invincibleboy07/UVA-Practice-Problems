#include<iostream>
using namespace std;
#include<stdio.h>
#include<vector>
#include<algorithm>
#include<set>
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		getchar();
		getchar();
		string s;

		vector<pair<pair<int,int>,pair<int,string> > > vect;
		while(getline(cin,s) && !s.empty())
		{
			int grp_num, prm_num, time;
			string ver;
			char * sp;
			//s=s.c_str();
			sscanf(s.c_str(),"%d %d %d %s", &grp_num,& prm_num, &time, &sp);
			ver=""+string(sp);
			pair<int, int> p1,p2;
			p1=make_pair(grp_num,prm_num);
			p2= make_pair(time,ver);
			vect.push_back(make_pair(p1,p2));
		}
		sort(vect.begin(),vect.end());
		vector<pair<int,pair<int,int> > > nev;
		vector<pair<pair<int,int>,pair<int,string> > >:: iterator it;
		it=vect.begin();
		
		int t=0;
		while(it!=vect.end())
		{
			int np=0,pen=0;
				if(it->first.first!=t)
				{
					t++;
					
					set<int> sol;
					while(it->first.first==t)
					{
						if(it->second.second=="C")
							
							{	sol.insert(it->first.second);
							pen+=it->second.first;
							while(it->first.first==t||it!=vect.end())
								it++;}
						if(it->second.second=="I")
							pen+=it->second.first;
					}
					

					pair<int,int> temp;
					temp=make_pair(t,pen);
					pair<int,pair<int,int> > temp2;
					temp2=make_pair(sol.size(),temp);
					nev.push_back(temp2);
				}
		}

		sort(nev.begin(),nev.end());
		vector<pair<int,pair<int,int> > >::iterator it1;
		for(it1=nev.begin();it1!=nev.end();it1++)
		{
			cout<<it1->second.first<<" "<<it1->first<<" "<< it1->second.second<<endl;
		}
		}
		return 0;
	}


			


