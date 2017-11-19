#include<iostream>
using namespace std;
class p1
{
	public:
	void prefix(char s[])
	{
		int i=0,count=0,j=0;
		for(count=0;s[count]!='\0';count++);
		for(i=0;i<count-1;i++)
		{
			for(j=0;j<=i;j++)
			{
				cout<<s[j];
			}
			cout<<"\n";
		}
	}
	void proper_prefix(char  s[])
	{
		int i=0,count=0,j=0;
		for(count=0;s[count]!='\0';count++);
		cout<<"#"<<endl;
		for(i=0;i<count-1;i++)
		{
			for(j=0;j<=i;j++)
			{
				cout<<s[j];
			}
			cout<<"\n";
		}
		cout<<s<<endl;
	}
	void suffix(char  s[])
	{
		int i=0,count=0,j=0;
		for(count=0;s[count]!='\0';count++);
		for(i=0;i<count-1;i++)
		{
			for(j=count-i-1;j<=count;j++)
			{
				cout<<s[j];
			}
			cout<<"\n";
		}
	}
	void proper_suffix(char s[])
	{
		int i=0,count=0,j=0;
		for(count=0;s[count]!='\0';count++);
		cout<<"#"<<endl;
		for(i=0;i<count-1;i++)
		{
			for(j=count-i-1;j<=count;j++)
			{
				cout<<s[j];
			}
			cout<<"\n";
		}
		cout<<s<<endl;
	}
	void substring(char  s[])
	{
		int i=0,count=0,j=0,k=0;
		for(count=0;s[count]!='\0';count++);
		for(k=0;k<count-1;k++){
		for(i=k;i<count-1;i++)
		{
			for(j=k;j<=i;j++)
			{
				cout<<s[j];
			}
			cout<<"\n";
		}}
	}
	void proper_substring(char  s[])
	{
		int i=0,count=0,j=0,k=0;
		for(count=0;s[count]!='\0';count++);
		cout<<"#"<<endl;
		for(k=0;k<count-1;k++){
		for(i=k;i<count-1;i++)
		{
			for(j=k;j<=i;j++)
			{
				cout<<s[j];
			}
			cout<<"\n";
		}}
		cout<<s<<endl;
	}
	
};
int main()
{
	p1 p;
	int i=0;
	char y='y';
	char  s[15];
	int n=0;
	cout<<"Enter a string"<<endl;
		cin>>s;
	while(y=='y')
	{
		
		
		//for(i=0;s[i-1]!='1';i++)
		//{cin>>s[i];}
		//s[i]='\0';
		cout<<"Enter operation \n1.Prefix \n2.Proper Prefix \n3.Suffix \n4.Proper Suffix \n5.Substring \n6.Proper substring"<<endl;
		cin>>n;
		switch(n)
		{
			case 1:p.prefix(s);
			break;
			case 2:p.proper_prefix(s);
			break;
			case 3:p.suffix(s);
			break;
			case 4:p.proper_suffix(s);
			break;
			case 5:p.substring(s);
			break;
			case 6:p.proper_substring(s);
			break;
			default:cout<<"Enter valid operation"<<endl;
			
		}
		cout<<"Do you want to continue?"<<endl;
		cin>>y;
	}
	return 0;
}
































