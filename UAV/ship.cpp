#include<iostream>
using namespace std;

#include <bits/stdc++.h>
int main(){
	
	string s;
	int c=1;
	while(cin>>s,s!="end")
	{
		vector<stack<char> > vsat;
		stack<char> temp;
		temp.push(s[0]);
		vsat.push_back(temp);
		for(int i=1;i<s.length();i++)
		{
			vector<stack<char> >:: iterator it;
			for(it=vsat.begin();it!=vsat.end();it++)
			{
				if(it->top()>=s[i])
				{
					//flag=1;
					it->push(s[i]);
					break;
				}
			}
			if(it==vsat.end())
			{
				temp.pop();
				temp.push(s[i]);
				vsat.push_back(temp);
			}
		}
		cout<<"Case "<<c++<<": "<<vsat.size()<<endl;
	}
	return 0;
}

			
	

