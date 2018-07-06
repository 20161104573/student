#define _STUDENT
#define _REFEREE

#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>

extern int amount;//����ȫ�ֱ���amount 
struct  Student//student �ṹ�� 
{
	int id;
	char name;
    char sex;
    char program;
    char type;
    char number;
    char cclass;
    double score[10];
    double sum;
    double average;
    double max;
    double min;
};
struct  Student s[50];//�ṹ������ 

struct Referee
{
    char name;
    char sex;
    char tel;
};
struct  Referee r[50];//�ṹ������ 




//���ģ��
void inputBystudent()
{
	int i;
	i=amount;
	printf("��������:\n");
	scanf("%d",&s[i].id);
	printf("����������:\n");
	scanf("%s",&s[i].name);
    printf("�������Ա�:\n");
    scanf("%s",&s[i].sex);
	printf("�������Ŀ����:\n");
	scanf("%s",&s[i].program);
	printf("�������Ŀ����:\n");
	scanf("%s",&s[i].type);
	printf("������绰����:\n");
	scanf("%s",&s[i].number);
	printf("������༶:\n");
	scanf("%s",&s[i].cclass);
	amount=amount+1;
}
void inputByreferee()
{
	int i;
	i=amount;
	printf("����������:\n");
	scanf("%s",&r[i].name);
    printf("�������Ա�:\n");
    scanf("%s",&r[i].sex);
	printf("������绰����:\n");
	scanf("%d",&r[i].tel);
	amount=amount+1;
}
void input()
{
    char menuItem;
    printf("	| --------------------------------------------|\n");
    printf("	|                  ��ѯ�Ӳ˵���               |\n");
    printf("	| --------------------------------------------|\n");
    printf("	|                    1---���ѧ��             |\n");
    printf("	|                    2---��Ӳ���             |\n");
    printf("	| --------------------------------------------|\n");
	do
	{
		printf("\n������˵�������(0-2):");
		fflush(stdin);
		scanf("%c",&menuItem);
	}while(menuItem<'1'||menuItem>'2');
	switch(menuItem)
	{
	    case  '1':
		         inputBystudent();
		         break;
	    case  '2':
		         inputByreferee();
		         break;	
			     
	}
}

//��ʾģ��
void outputBystudent()
{
	printf("|  ���  |  ����  |  �Ա�  |  ��Ŀ����  |  ��Ŀ����  |  �绰����  |  �༶  |\n");
	int i;
	for(i=0;i<amount;i++)
	{	
	    printf("|%8d",s[i].id);
	    printf("|%8s",s[i].name);		
		printf("|%8s",s[i].sex);	
		printf("|%12s",s[i].program);
		printf("|%12s",s[i].type);
		printf("|%12s",s[i].number);
		printf("|%8s|\n",s[i].cclass);
	}
}
void outputByreferee()
{
	printf("|  ����  |  �Ա�  |  �绰����  |\n");
	int i;
	for(i=0;i<amount;i++)
	{	
	    printf("|%8s",r[i].name);		
		printf("|%8s",r[i].sex);	
		printf("|%12s",r[i].tel);
}
void output()
{
    char menuitem;
    printf("	| --------------------------------------------|\n");
    printf("	|                  ��ѯ�Ӳ˵���               |\n");
    printf("	| --------------------------------------------|\n");
    printf("	|                    1---��ʾѧ��             |\n");
    printf("	|                    2---��ʾ����             |\n");
    printf("	| --------------------------------------------|\n");
	do
	{
		printf("\n������˵�������(0-2):");
		fflush(stdin);
		scanf("%c",&menuItem);
	}while(menuitem<'1'||menuitem>'2');
	switch(menuitem)
	{
	    case  '1':
		         outputBystudent();
		         break;
	    case  '2':
		         outputByreferee();
		         break;	
			     
	}
}

int mark()
{
    int i,n;
    int flag=1;
    while (flag)
    {
        printf("������Ҫ���ֵĲ����߱��:\n");
        scanf("%d",&n);
        for (i=0; i<amount;)
        {
            if (s[i].id!=n)
            {
                i++;
            }
            else
            {
                break;
            }
        }
        if(i>=amount||n<=0)
        {
            printf("��������������������!\n");
            
        }
        else
        {
            printf("�������һ�����д�ķ���:\n");
	        scanf("%l",&s[n-1].score[0]);
            printf("������ڶ������д�ķ���:\n");
	        scanf("%l",&s[n-1].score[1]);
	        printf("��������������д�ķ���:\n");
	        scanf("%l",&s[n-1].score[2]);
	        printf("��������ĸ����д�ķ���:\n");
	        scanf("%l",&s[n-1].score[3]);
	        printf("�������������д�ķ���:\n");
	        scanf("%l",&s[n-1].score[4]);
            flag=0;
        }
    }
    printf("�������ֳɹ�!\n");
    return 0;
}
int average()
{
    int i,j;
    s[i].sum=0;
    s[i].average=0;
    for(i=0;i<amount;i++)
    {
        s[i].max=s[i].score[0];
        s[i].min=s[i].score[0];
        for(j=0;j<5;j++)
        {
            if(s[i].score[j]>s[i].max)
            {
                s[i].max=s[i].score[j];
            }
            if(s[i].score[j]<s[i].min)
            {
                s[i].min=s[i].score[j];
            }
            s[i].sum+=s[i].score[j];
        }
        s[i].sum=s[i].sum - s[i].max - s[i].min;
        s[i].average = s[i].sum / 3;
    }
    printf("����ƽ���ֳɹ�!\n");
    return 0;
}

int show()
{
    int i;
    for(i=0;i<amount;i++)
    {
    	printf("����������Ϊ:",s[i].name);
    	printf("���:",s[i].id);
    	printf("�Ա�:",s[i].sex);
    	printf("��Ŀ����:",s[i].program);
    	printf("��Ŀ���:",s[i].type);
    	printf("�绰:",s[i].number);
    	printf("�༶:",s[i].cclass);
    	printf("��һ����ί",r[0].name);
    	printf("������:",s[i].score[0]);
    	printf("�ڶ�����ί",r[1].name);
    	printf("������:",s[i].score[1]);
    	printf("��������ί",r[2].name);
    	printf("������:",s[i].score[2]);
    	printf("���ĸ���ί",r[3].name);
    	printf("������:",s[i].score[3]);
    	printf("�������ί",r[4].name);
    	printf("������:",s[i].score[4]);
    	printf("ȥ��һ����ͷ�Ϊ:",s[i].min);
    	printf("ȥ��һ����߷�Ϊ:",s[i].max);
    	printf("���õ�ƽ���ɼ���:",s[i].average);
    return 0;
}

//�˵�ģ�� 
int menu_select()
{
	int MenuItem;

	printf("\n ");
	printf("          | *********���ϵͳ********* |          \n");
	printf("          | ---------------------------------- |          \n");
	printf("          |              ���˵���              |          \n");
	printf("          | ---------------------------------- |          \n");
	printf("          |	  1 --- �����Ϣ  	       |          \n");
	printf("          |	  2 --- ��ʾ��Ϣ	       |          \n");
	printf("          |	  3 --- ���д��	       |          \n");
	printf("          |	  4 --- �����ֵ	       |          \n");
	printf("          |	  5 --- ��ʾ��ֵ	       |          \n");
	printf("          |	  0 --- �˳�ϵͳ  	       |          \n");		
	
do
	{		
		printf("\n������ѡ�0��5����");
		fflush(stdin);  //������뻺����       
		scanf("%d",&MenuItem);
	}while(MenuItem<0||MenuItem>5);
	return MenuItem;
}
int main()
{ 
	struct Student s[50];
    struct Referee r[50];
	while(1)//ѭ��һֱΪ����ִ�� 
	{
		switch(menu_select())//ѡ��˵� 
		{
			case 1:
				input(s,r);//���				
				break;
			case 2:
				output(s,r);//��� 
				break;
			case 3:
				mark(s);//���
				break;
			case 4:
				compute(s);//���� 
				break;
			case 5:
				display(s,r);//��ʾ
			    break;
			case 0:
				printf("Thank you for using��\n");
				system("pause");
				return 0;
	    }
    }
}



