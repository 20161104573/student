// student.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include"iostream"
using namespace std;
struct student
{
	char name[50];
	char num[15];
	char sex[10];
	int age;
	struct student * next;
};

int main()
{
	struct student *p,*q,*head;
	int s=1;
	head=NULL;
	while(cout<<"输入(1) or 结束(2)"<<endl,cin>>s,s==1)
	{
		p=new student;
		cout<<"告诉我你的姓名哦  ";
		cin>>p->name;
		cout<<"学号是多少呢 ";
		cin>>p->num;
		cout<<"年龄？？    ";
		cin>>p->age;
		cout<<"男 or 女?    ";
		cin>>p->sex;
		if(head==NULL)
		{
			head=p;
		}
		else
		{
			q->next=p;
		}
		q=p;
		p->next=NULL;	 
	}
	p=head;
	while(p!=NULL)
	{
		cout<<p->name<<" "<<p->num<<" "<<p->age<<" "<<p->sex<<endl;
		p=p->next;
	}
	p=head;
	do
	{
		q=p->next;
		delete p;
		p=q;
	}while(q);
	return 0;
}



int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

