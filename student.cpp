// student.cpp : �������̨Ӧ�ó������ڵ㡣
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
	while(cout<<"����(1) or ����(2)"<<endl,cin>>s,s==1)
	{
		p=new student;
		cout<<"�������������Ŷ  ";
		cin>>p->name;
		cout<<"ѧ���Ƕ����� ";
		cin>>p->num;
		cout<<"���䣿��    ";
		cin>>p->age;
		cout<<"�� or Ů?    ";
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

