#include<iostream>
#include<map>
#include<set>
using namespace std;
set<string> concat(set<string> s, set<string> t)
{
	set<string> mystring;
	for(set<string>::iterator it=s.begin();it!=s.end();it++)
	{
		for(set<string>::iterator it1=t.begin();it1!=t.end();it1++)
		{
			string temp;
			temp=*it+*it1;
			mystring.insert(temp);
		}
	}
	return mystring;
}
set<string> res;
void starclosure(set<string> s,int n)
{
	if(n==0)
	return;
	else
	{
		set<string> temp=concat(res,s);
		res.insert(temp.begin(),temp.end());
		starclosure(s,n-1);
	}
}
int main()
{
	res.insert(" ");
	string s[2]={"hello","world"};
	std::set<string> myset(s,s+2);
	starclosure(myset,2);
	std::set<string>::iterator it;
	for(it=res.begin();it!=res.end();it++)
	std::cout<<' '<<*it;
	std::cout<<'\n';
}
