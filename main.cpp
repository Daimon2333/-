#include<iostream>
#include<cstring>//����strlen
#include<cstdio>//����gets��gerchar;
#include<Windows.h>//����Sleep()//ע���Сд
#include<cstdlib>//����system("cls")��������
#include<conio.h>//����getch(),���ܼ����ϵĵ�һ������
#include<string>//���ڽ���1���������ֻ�ȡ��
#include<cstring>//����ʹ�����麯��
#define User_Number "Daimon"
#define User_Word "192055205"
using namespace std;
void Head();//����ͼ��
void Login();//��¼ϵͳ
void MainMenu();//ѡ��ϵͳ
int Menu();//�������Լ�ѡȡҪѡ�����Ŀ������Ϊ���֣�
void Quit();//������0���˳��Լ�����
void Enter_Grades();//������1��¼��ѧ���ɼ�
void Inquiry_Grades();//������2�Ĳ�ѯѧ���ɼ�
int Student_get();//��ȡ�û�ѡ���ѧ��
void Modify_Grades();//������3���޸�ѧ���ɼ�
void Transcript();//������4�ĳɼ���
void Ranking();//������5��ѧ������
struct Student
{
 int data;
 string Id[100];
 float Math[100];
 float English[100];
 float Design[100];
 string Name[100];
 int q[100];
 float sum[100];
 float prv[100];
}x;
int main()
{
	Login();//��¼
	MainMenu();//������
}
/*************************************************************
                 ��¼����ͼƬ
*************************************************************/
#include<iostream>
using namespace std;
void Head()
{
	cout<<"\n\n";
	cout<<"\t\t\t\t\t�q�] %�r                   �q ```�r  \n";
	cout<<"\t\t\t\t\t(@^o^@) ѧ���ɼ�����ϵͳ (��:��)\n";
	cout<<"\t\t\t\t\t(~):(~)                  (~)v(~) \n";
	cout<<"\n\n\n";
}
/*************************************************************
                   ��¼ϵͳ
*************************************************************/
void Login()
{
	    Head();//����
   char UserNumber[10],UserWord[10],a[]={"* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *"};
      for(int i=0;i<1000;i++)
   {
     for(unsigned i=0;i<strlen(a);i++)
     {
         cout<<a[i];
	     Sleep(10);
     }
     cout<<"\n\n\t\t\t\t\t\t�����������˺�����:\n\n\n\n\t\t\t\t\t\t�˺�:";
     gets(UserNumber);
     cout<<"\n\n\t\t\t\t\t\t����:";
     gets(UserWord);
     if(strcmp(UserNumber,User_Number)==0&&strcmp(UserWord,User_Word)==0)
     {
        system("cls");
		break;
     }
     else
     {
       cout<<"\n\n\t\t\t\t\t\t�˺Ż������벻��ȷ�������ԡ�";
	   Sleep(1000);
	   system("cls");
	   Head();
     }
   }  
}/*************************************************************
                      ѡ��˵�
***************************************************************/
int Menu()
{   
	char c;
	do
	{
		system("cls");
		Head();
		cout<<"\t\t\t\t   �q�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�����T�T�T�r\n";
		cout<<"\t\t\t\t   ��              ѧ���ɼ�����ϵͳ              ��\n";
		cout<<"\t\t\t\t   �t�T�T�T�����T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�s\n";
		cout<<"\t\t\t\t   ����������������������������������������������������������������������������������������-��\n";
		cout<<"\t\t\t\t   ��                                            ��\n";
		cout<<"\t\t\t\t   �� 1. ¼��ɼ�                    2. ��ѯ�ɼ� ��\n";
		cout<<"\t\t\t\t   ��                                            ��\n";
		cout<<"\t\t\t\t   �� 3. �޸ĳɼ�                    4. �ɼ���   ��\n";
		cout<<"\t\t\t\t   ��                                            ��\n";
		cout<<"\t\t\t\t   �� 5. ѧ������                    0. �˳����� ��\n";
		cout<<"\t\t\t\t   ��                                            ��\n";
		cout<<"\t\t\t\t   ��������������������������������������������������������������������������������������������\n";
		cout<<"\t\t\t\t\t\t  ����ѡ��(0-5):";
		c=getch();
	} while (c < '0' || c > '5');
	return c;
}
/*************************************************************
         ������
*************************************************************/
void MainMenu()
{    int MenuSelect;
     Head();//�ɰ�ͼ��
	 MenuSelect=Menu();//Ment()ѡȡҪѡ�������
	 switch (MenuSelect)	//�˵�ѡ��
		{
		case '0':system("cls");Head();Quit();break;//�˳��򷵻����˵�
		case '1':system("cls");Head();Enter_Grades();Quit();break;//¼��ѧ���ɼ�
		case '2':system("cls");Inquiry_Grades();Quit();break;//��ѯѧ���ɼ�
		case '3':system("cls");Modify_Grades();Quit();break;//�޸�ѧ����Ϣ
		case '4':system("cls");Transcript();Quit();break;//����ɼ���
		case '5':system("cls");Ranking();Quit();break;//�ɼ�����
	 }
}
/*************************************************************
          �˳�ϵͳ 0
*************************************************************/
void Quit()
{
    char ch;
	cout<<"\n\t ";
	for (int i = 0; i < 50; i++)
	{
		printf("* ");
		Sleep(10);
	}
	cout<<"\n\n\t\t\t\tҪ����ϵͳ���水�����\t\t�˳������ٷ����밴ESC��\n";
	ch = getch();
	if (ch ==27)	//esc������
	{
		exit(0);
	}
	MainMenu();	//���½������˵�
}
/*************************************************************
           ¼��ѧ���ɼ� 1
*************************************************************/
void Enter_Grades()
{ 
    cout<<"\t\t\t\t\t\t���ѧ���ɼ�:\n\n\n\n\t\t\t\t\t\tѧ��:";
    cin>>x.Id[x.data];
	for(int b=0;b<100;b++)
	 {
		 if(x.Id[x.data]==x.Id[b]&&x.data!=b)
		 {
		   cout<<"\n\t\t\t\t\t�������ѧ���ظ������������룡";
		   Sleep(1500);
		   system("cls");
		   Head();
		   Enter_Grades();
		   Quit();
		 }
	 }
	cout<<"\n\t\t\t\t\t\t����:";
	cin>>x.Name[x.data];
	cout<<"\n\t\t\t\t\t\t�ߵ���ѧ:";
	cin>>x.Math[x.data];
	cout<<"\n\t\t\t\t\t\t��ѧӢ��:";
    cin>>x.English[x.data];
	cout<<"\n\t\t\t\t\t\tC++�γ����:";
	cin>>x.Design[x.data];
	x.q[x.data]=1;
	x.sum[x.data]=x.Math[x.data]+x.English[x.data]+x.Design[x.data];
	x.prv[x.data]=x.sum[x.data]/3;
	x.data++;
}
/*************************************************************
           ��ѯѧ���ɼ� 2
*************************************************************/
void Inquiry_Grades()
{
   int time;
   time=Student_get();
   system("cls");
   Head();
   cout<<"\n\t\t\t\t\tҪ��ѯ��ѧ����Ϣ...\n";
   cout<<"\n\n\t\t\t\t\tѧ�ţ�"<<x.Id[time];
   cout<<"\n\n\t\t\t\t\t������"<<x.Name[time];
   cout<<"\n\n\t\t\t\t\t�ߵ���ѧ��"<<x.Math[time];
   if(x.Math[time]<60)
   {
      cout<<"\t����������ѧ����";
	  for(int i=0;i<100;i++)
	  {
		  if(x.Math[i]<60&&x.Math[i]>0&&i!=time&&x.q[i]==1)
		  {
			  cout<<"\t������"<<x.Name[i];
		  }
	  }
   }
   cout<<"\n\n\t\t\t\t\t��ѧӢ�"<<x.English[time];
   if(x.English[time]<60)
   {
      cout<<"\t����������ѧ����";
	  for(int i=0;i<100;i++)
	  {
		  if(x.English[i]<60&&++x.English[i]>0&&i!=time&&x.q[i]==1)
		  {
			  cout<<"\t������"<<x.Name[i];
			  x.English[i]--;
		  }
	  }
   }
   cout<<"\n\n\t\t\t\t\tC++�γ���ƣ�"<<x.Design[time];
   if(x.Design[time]<60)
   {
      cout<<"\t����������ѧ����";
	  for(int i=0;i<100;i++)
	  {
		  if(x.Design[i]<60&&++x.Design[i]>0&&i!=time&&x.q[i]==1)
		  {
			  cout<<"\t������"<<x.Name[i];
			  x.Design[i]--;
		  }
	  }
   }
   cout<<"\n\n\t\t\t\t\t�ܷ֣�"<<x.sum[time];
   cout<<"\n\n\t\t\t\t\tƽ���֣�"<<x.prv[time];
}
/*************************************************************
           ��ѯѧ���ɼ� 2�л�ȡҪ��ѯ����
*************************************************************/
int Student_get()
{
	char c;
	do
	{
    Head();
  	cout<<"\t\t\t\t\t\tѡȡѧ����Ϣ��\n\n\n";
	cout<<"\t\t\t\t\t     ��ѡ��Ҫѡȡ�ķ�ʽ";
	cout<<"\n\n\t\t\t\tѧ��ѡȡ�밴0\t\t\t����ѡȡ�밴1\n";
	cout<<"\n\t\t\t\t����ѡ��(0/1)";
	c=getch();
	system("cls");
	}while(c<'0'||c>'1');
	Head();
	cout<<"\t\t\t\t\t\tѡȡѧ����Ϣ��\n\n";
	if(c=='0')
	{
	   string ID;
	   cout<<"\n\n\t\t\t\t\t������ѧ�ţ�";
	   cin>>ID;
	   for(int i=0;i<100;i++)
	   {
		   if(x.Id[i]==ID)
		   {
		       return i;
		   }
	   }
	}
	if(c=='1')
	{
	   int time=0,p1=-1;
	   int t[100];
	   string NAME;
	   cout<<"\n\t\t\t\t\t����������:";
	   cin>>NAME;
	   for(int i=0;i<100;i++)
	   {
		   if(x.Name[i]==NAME)
		   {
		       time++;
			   p1++;
			   t[p1]=i;
		   }
	   }
	   if(time==1)
	   {
	      return t[0];
	   }
	   if(time>=2)
	   {
		  cout<<"\n\t\t\t\t\t��Ǹ������ͬ����������ѡ��ѧ�š�\n\n";
	      for(int k=0;k<=p1;k++)
	      {
		     cout<<"\t\t\t\t\tѧ�ţ�"<<t[k]<<"\n";;
	      }
	      string ID2;
		  cout<<"\n\t\t\t\t\tѧ�ţ�";
	      cin>>ID2;
	      for(int i=0;i<100;i++)
	      {
		   if(x.Id[i]==ID2)
		     {
		         return i;
		     }
	       }
	   } 
	}
	cout<<"\n\n\n\n\t\t\t\t\t   û���ҵ�Ҫѡȡ��ѧ����Ϣ......\n\n";
    Quit();
}
/*************************************************************
           �޸�ѧ���ɼ�3
*************************************************************/
void Modify_Grades()
{
	string Pid,Pname;
	float Pmath,Penglish,Pdesign;
	int time;
	char p;
    time=Student_get();
	Pid=x.Id[time];
	Pname=x.Name[time];
	Pmath=x.Math[time];
	Penglish=x.English[time];
	Pdesign=x.Design[time];
    system("cls");
	Head();
	cout<<"\t\t\t\t\t\t�޸�ѧ����Ϣ��\n\n\n";
	cout<<"\t\t\t\t\t\tѧ��("<<x.Id[time]<<")��";
	cin>>x.Id[time];
	cout<<"\n\t\t\t\t\t\t����("<<x.Name[time]<<")��";
	cin>>x.Name[time];
	cout<<"\n\t\t\t\t\t\t�ߵ���ѧ("<<x.Math[time]<<")��";
	cin>>x.Math[time];
	cout<<"\n\t\t\t\t\t\t��ѧӢ��("<<x.English[time]<<")��";
	cin>>x.English[time];
	cout<<"\n\t\t\t\t\t\tC++�γ����("<<x.Design[time]<<")��";
	cin>>x.Design[time];
	cout<<"\n\n\t\t\t\t\t\t�Ƿ��޸ĸ�ѧ����Ϣ(Enter):";
	p=getch();
	if(p==13)
	{
	  cout<<"\n\n\t\t\t\t\t\t�޸ĳɹ�...\n\n";
	}
	else
	{
	  cout<<"\n\n\t\t\t\t\t\t�޸�ʧ��...\n\n";
	  x.Id[time]=Pid;
	  x.Name[time]=Pname;
	  x.Math[time]=Pmath;
	  x.English[time]=Penglish;
	  x.Design[time]=Pdesign;
	}
}
/*************************************************************
           ѧ���ɼ���4
*************************************************************/
void Transcript()
{
	Head();
	cout<<"\n\n\t\t\t\t\t\t  �ɼ���\n\n";
	cout<<"\n\n\t\t\tѧ��    \t����    \t�ߵ���ѧ\t��ѧӢ��\tC++�������\n\n";
	for(int i=0;i<100;i++)
	{
		if(x.q[i]==1)
	      {
			  cout<<"\t\t\t"<<x.Id[i]<<"\t\t"<<x.Name[i]<<"\t\t "<<x.Math[i]<<"\t\t"<<x.English[i]<<"\t\t"<<x.Design[i]<<"\n";
		  }
	}
}
/*************************************************************
           �ɼ�����5
*************************************************************/
void Ranking()
{
	for(int KP=0;KP<100;KP++)
	{
		x.sum[KP]=x.English[KP]+x.Math[KP]+x.Design[KP];
		x.prv[KP]=x.sum[KP]/3;
	}
	string ID2,Name2;
	float math2,english2,design2,sum2,prv2;
	int j,help=1;
	for(int k=0;k<100;k++)
	{
		for(j=0;j<100-k-1;j++)
	  {
		  if(x.prv[j]<x.prv[j+1])
		  {
			  ID2=x.Id[j];x.Id[j]=x.Id[j+1];x.Id[j+1]=ID2;
			  Name2=x.Name[j];x.Name[j]=x.Name[j+1];x.Name[j+1]=Name2;
			  math2=x.Math[j];x.Math[j]=x.Math[j+1];x.Math[j+1]=math2;
			  english2=x.English[j];x.English[j]=x.English[j+1];x.English[j+1]=english2;
			  design2=x.Design[j];x.Design[j]=x.Design[j+1];x.Design[j+1]=design2;
			  sum2=x.sum[j];x.sum[j]=x.sum[j+1];x.sum[j+1]=sum2;
			  prv2=x.prv[j];x.prv[j]=x.prv[j+1];x.prv[j+1]=prv2;
		  }
	  }
	}
	Head();
	cout<<"\n\n\t\t\t\t\t\tѧ������\n\n";
	cout<<"\n\n\t\t\tѧ��    \t����    \t�ܷ�\t\tƽ����\t\t����\n\n";
	for(int i=0;i<101;i++,help++)
	{
		if(x.q[i]==1)
	      {
			  cout<<"\t\t\t"<<x.Id[i]<<"\t\t"<<x.Name[i]<<"\t\t "<<x.sum[i]<<"\t\t"<<x.prv[i]<<"\t\t"<<help<<"\n";
		  }
	}
}