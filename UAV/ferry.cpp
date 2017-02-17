#include<iostream>
using namespace std;
#include<queue>
	queue<int> le;
		queue<int> ri;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,tn,fer;
		cin>>n>>tn>>fer;

	//	queue<int> le;
	//	queue<int> ri;

		for(int i=0;i<fer;i++)
		{
			int a;
			string s;
			cin>>a>>s;
			if(s[0]=='l')
			{
				le.push_back(a);
				cout<<"asdas"<<le.front()<<"asdas";
			}
			else
				ri.push_back(a);
		}

		int timerrrrrr=0;
		int lfag=1;

		while(!le.empty() || !ri.empty())
		{
		
			if(lfag)
			{
				if(le.front()<=timerrrrrr)
				{
					int cn=1;
					while(le.front() && le.front()<=timerrrrrr && cn<=n)
					{
						cout<<"lefront\n"<<le.front()<<endl;
						cout<<(timerrrrrr+(timerrrrrr+tn)-le.front())<<endl;
						le.pop();
						cn++;
					}
					lfag=0;
				}
				else if(ri.front()==timerrrrrr)
				{
					timerrrrrr+=tn;
					lfag=0;
				}
				else
					timerrrrrr+=tn;
			}
			else
			{
				if(ri.front()<=timerrrrrr)
				{
					int cn=1;
					while( ri.front() && ri.front()<=timerrrrrr && cn<=n)
					{
						cout<<"riaaa\n"<<ri.front()<<endl;
						cout<<(timerrrrrr+(timerrrrrr+tn)-ri.front())<<endl;
						ri.pop();
						cn++;
					}
					lfag=1;
				}
				else if(le.front()==timerrrrrr)
				{
					timerrrrrr+=tn;
					lfag=1;
				}
				else
					timerrrrrr+=tn;

			}
		}
	}
		return 0;
	}

