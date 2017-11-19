#include<iostream>
using namespace std;
struct node
{
char info;
struct node *next;
struct node *prev;
};

void append(struct node** head_ref,char a)
{
struct node *temp;
temp = new(struct node);
struct node* last = *head_ref;
temp->info = a;
if (*head_ref == NULL)
{
temp->prev = NULL;
*head_ref = temp;
return;
}
while (last->next != NULL)
last = last->next;
last->next = temp;
temp->prev = last;
return;
}
int main()
{
int n;
cout<<"enter the number of symbols";
cin>>n;
string s;
cin>>s;
int len=s.length();
int a[len][n];
struct node *head = NULL;
for(int i=0;i<len;i++)
append(&head,s[i]);
int count=1;
struct node *head1 = head;
while (head1 != NULL)
{
cout<<head1->info<<" ";
head1=head1->next;
}
cout<<endl;
int j=0;
while (head != NULL)
{
int i;
for(i=0;i<len;i++)
{
if(head->info==s[i])
{
cout<<++count<<" ";
break;
}
else
cout<<"-"<<" ";
}
for(int j1=i;j1<len-1;j1++)
cout<<"-"<<" ";
if(j==0)
cout<<"s";
if(j==len-1)
cout<<"f";
cout<<endl;
head = head->next;
j++;
}
cout<<endl;

}

