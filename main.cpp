#include<iostream>
#include<cstring>//用于strlen
#include<cstdio>//用于gets，gerchar;
#include<Windows.h>//用于Sleep()//注意大小写
#include<cstdlib>//用于system("cls")，清屏。
#include<conio.h>//用于getch(),接受键盘上的第一个键。
#include<string>//用于界面1的姓名汉字获取。
#include<cstring>//用于使用数组函数
#define User_Number "Daimon"
#define User_Word "192055205"
using namespace std;
void Head();//界面图标
void Login();//登录系统
void MainMenu();//选择系统
int Menu();//主界面以及选取要选择的项目（返回为数字）
void Quit();//主界面0的退出以及返回
void Enter_Grades();//主界面1的录入学生成绩
void Inquiry_Grades();//主界面2的查询学生成绩
int Student_get();//获取用户选择的学生
void Modify_Grades();//主界面3的修改学生成绩
void Transcript();//主界面4的成绩单
void Ranking();//主界面5的学生排名
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
	Login();//登录
	MainMenu();//主界面
}
/*************************************************************
                 登录界面图片
*************************************************************/
#include<iostream>
using namespace std;
void Head()
{
	cout<<"\n\n";
	cout<<"\t\t\t\t\t╭⺌ %╮                   ╭ ```╮  \n";
	cout<<"\t\t\t\t\t(@^o^@) 学生成绩管理系统 (⌒:⌒)\n";
	cout<<"\t\t\t\t\t(~):(~)                  (~)v(~) \n";
	cout<<"\n\n\n";
}
/*************************************************************
                   登录系统
*************************************************************/
void Login()
{
	    Head();//界面
   char UserNumber[10],UserWord[10],a[]={"* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *"};
      for(int i=0;i<1000;i++)
   {
     for(unsigned i=0;i<strlen(a);i++)
     {
         cout<<a[i];
	     Sleep(10);
     }
     cout<<"\n\n\t\t\t\t\t\t请输入您的账号密码:\n\n\n\n\t\t\t\t\t\t账号:";
     gets(UserNumber);
     cout<<"\n\n\t\t\t\t\t\t密码:";
     gets(UserWord);
     if(strcmp(UserNumber,User_Number)==0&&strcmp(UserWord,User_Word)==0)
     {
        system("cls");
		break;
     }
     else
     {
       cout<<"\n\n\t\t\t\t\t\t账号或者密码不正确，请重试。";
	   Sleep(1000);
	   system("cls");
	   Head();
     }
   }  
}/*************************************************************
                      选择菜单
***************************************************************/
int Menu()
{   
	char c;
	do
	{
		system("cls");
		Head();
		cout<<"\t\t\t\t   ╭═════════════════════════════════○●○●═══╮\n";
		cout<<"\t\t\t\t   │              学生成绩管理系统              │\n";
		cout<<"\t\t\t\t   ╰═══○●○●═════════════════════════════════╯\n";
		cout<<"\t\t\t\t   ┌───────────────────────────────────────────-┐\n";
		cout<<"\t\t\t\t   │                                            │\n";
		cout<<"\t\t\t\t   │ 1. 录入成绩                    2. 查询成绩 │\n";
		cout<<"\t\t\t\t   │                                            │\n";
		cout<<"\t\t\t\t   │ 3. 修改成绩                    4. 成绩单   │\n";
		cout<<"\t\t\t\t   │                                            │\n";
		cout<<"\t\t\t\t   │ 5. 学生排名                    0. 退出程序 │\n";
		cout<<"\t\t\t\t   │                                            │\n";
		cout<<"\t\t\t\t   └────────────────────────────────────────────┘\n";
		cout<<"\t\t\t\t\t\t  请您选择(0-5):";
		c=getch();
	} while (c < '0' || c > '5');
	return c;
}
/*************************************************************
         主界面
*************************************************************/
void MainMenu()
{    int MenuSelect;
     Head();//可爱图标
	 MenuSelect=Menu();//Ment()选取要选择的数字
	 switch (MenuSelect)	//菜单选择
		{
		case '0':system("cls");Head();Quit();break;//退出或返回主菜单
		case '1':system("cls");Head();Enter_Grades();Quit();break;//录入学生成绩
		case '2':system("cls");Inquiry_Grades();Quit();break;//查询学生成绩
		case '3':system("cls");Modify_Grades();Quit();break;//修改学生信息
		case '4':system("cls");Transcript();Quit();break;//输出成绩单
		case '5':system("cls");Ranking();Quit();break;//成绩排序
	 }
}
/*************************************************************
          退出系统 0
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
	cout<<"\n\n\t\t\t\t要返回系统界面按任意键\t\t退出并不再返回请按ESC键\n";
	ch = getch();
	if (ch ==27)	//esc键按下
	{
		exit(0);
	}
	MainMenu();	//重新进入主菜单
}
/*************************************************************
           录入学生成绩 1
*************************************************************/
void Enter_Grades()
{ 
    cout<<"\t\t\t\t\t\t添加学生成绩:\n\n\n\n\t\t\t\t\t\t学号:";
    cin>>x.Id[x.data];
	for(int b=0;b<100;b++)
	 {
		 if(x.Id[x.data]==x.Id[b]&&x.data!=b)
		 {
		   cout<<"\n\t\t\t\t\t您输入的学号重复，请重新输入！";
		   Sleep(1500);
		   system("cls");
		   Head();
		   Enter_Grades();
		   Quit();
		 }
	 }
	cout<<"\n\t\t\t\t\t\t姓名:";
	cin>>x.Name[x.data];
	cout<<"\n\t\t\t\t\t\t高等数学:";
	cin>>x.Math[x.data];
	cout<<"\n\t\t\t\t\t\t大学英语:";
    cin>>x.English[x.data];
	cout<<"\n\t\t\t\t\t\tC++课程设计:";
	cin>>x.Design[x.data];
	x.q[x.data]=1;
	x.sum[x.data]=x.Math[x.data]+x.English[x.data]+x.Design[x.data];
	x.prv[x.data]=x.sum[x.data]/3;
	x.data++;
}
/*************************************************************
           查询学生成绩 2
*************************************************************/
void Inquiry_Grades()
{
   int time;
   time=Student_get();
   system("cls");
   Head();
   cout<<"\n\t\t\t\t\t要查询的学生信息...\n";
   cout<<"\n\n\t\t\t\t\t学号："<<x.Id[time];
   cout<<"\n\n\t\t\t\t\t姓名："<<x.Name[time];
   cout<<"\n\n\t\t\t\t\t高等数学："<<x.Math[time];
   if(x.Math[time]<60)
   {
      cout<<"\t其他不及格学生：";
	  for(int i=0;i<100;i++)
	  {
		  if(x.Math[i]<60&&x.Math[i]>0&&i!=time&&x.q[i]==1)
		  {
			  cout<<"\t姓名："<<x.Name[i];
		  }
	  }
   }
   cout<<"\n\n\t\t\t\t\t大学英语："<<x.English[time];
   if(x.English[time]<60)
   {
      cout<<"\t其他不及格学生：";
	  for(int i=0;i<100;i++)
	  {
		  if(x.English[i]<60&&++x.English[i]>0&&i!=time&&x.q[i]==1)
		  {
			  cout<<"\t姓名："<<x.Name[i];
			  x.English[i]--;
		  }
	  }
   }
   cout<<"\n\n\t\t\t\t\tC++课程设计："<<x.Design[time];
   if(x.Design[time]<60)
   {
      cout<<"\t其他不及格学生：";
	  for(int i=0;i<100;i++)
	  {
		  if(x.Design[i]<60&&++x.Design[i]>0&&i!=time&&x.q[i]==1)
		  {
			  cout<<"\t姓名："<<x.Name[i];
			  x.Design[i]--;
		  }
	  }
   }
   cout<<"\n\n\t\t\t\t\t总分："<<x.sum[time];
   cout<<"\n\n\t\t\t\t\t平均分："<<x.prv[time];
}
/*************************************************************
           查询学生成绩 2中获取要查询的人
*************************************************************/
int Student_get()
{
	char c;
	do
	{
    Head();
  	cout<<"\t\t\t\t\t\t选取学生信息：\n\n\n";
	cout<<"\t\t\t\t\t     请选择要选取的方式";
	cout<<"\n\n\t\t\t\t学号选取请按0\t\t\t姓名选取请按1\n";
	cout<<"\n\t\t\t\t请您选择(0/1)";
	c=getch();
	system("cls");
	}while(c<'0'||c>'1');
	Head();
	cout<<"\t\t\t\t\t\t选取学生信息：\n\n";
	if(c=='0')
	{
	   string ID;
	   cout<<"\n\n\t\t\t\t\t请输入学号：";
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
	   cout<<"\n\t\t\t\t\t请输入姓名:";
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
		  cout<<"\n\t\t\t\t\t抱歉！有相同的姓名，请选择学号。\n\n";
	      for(int k=0;k<=p1;k++)
	      {
		     cout<<"\t\t\t\t\t学号："<<t[k]<<"\n";;
	      }
	      string ID2;
		  cout<<"\n\t\t\t\t\t学号：";
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
	cout<<"\n\n\n\n\t\t\t\t\t   没有找到要选取的学生信息......\n\n";
    Quit();
}
/*************************************************************
           修改学生成绩3
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
	cout<<"\t\t\t\t\t\t修改学生信息：\n\n\n";
	cout<<"\t\t\t\t\t\t学号("<<x.Id[time]<<")：";
	cin>>x.Id[time];
	cout<<"\n\t\t\t\t\t\t姓名("<<x.Name[time]<<")：";
	cin>>x.Name[time];
	cout<<"\n\t\t\t\t\t\t高等数学("<<x.Math[time]<<")：";
	cin>>x.Math[time];
	cout<<"\n\t\t\t\t\t\t大学英语("<<x.English[time]<<")：";
	cin>>x.English[time];
	cout<<"\n\t\t\t\t\t\tC++课程设计("<<x.Design[time]<<")：";
	cin>>x.Design[time];
	cout<<"\n\n\t\t\t\t\t\t是否修改该学生信息(Enter):";
	p=getch();
	if(p==13)
	{
	  cout<<"\n\n\t\t\t\t\t\t修改成功...\n\n";
	}
	else
	{
	  cout<<"\n\n\t\t\t\t\t\t修改失败...\n\n";
	  x.Id[time]=Pid;
	  x.Name[time]=Pname;
	  x.Math[time]=Pmath;
	  x.English[time]=Penglish;
	  x.Design[time]=Pdesign;
	}
}
/*************************************************************
           学生成绩单4
*************************************************************/
void Transcript()
{
	Head();
	cout<<"\n\n\t\t\t\t\t\t  成绩单\n\n";
	cout<<"\n\n\t\t\t学号    \t姓名    \t高等数学\t大学英语\tC++程序设计\n\n";
	for(int i=0;i<100;i++)
	{
		if(x.q[i]==1)
	      {
			  cout<<"\t\t\t"<<x.Id[i]<<"\t\t"<<x.Name[i]<<"\t\t "<<x.Math[i]<<"\t\t"<<x.English[i]<<"\t\t"<<x.Design[i]<<"\n";
		  }
	}
}
/*************************************************************
           成绩排序5
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
	cout<<"\n\n\t\t\t\t\t\t学生排名\n\n";
	cout<<"\n\n\t\t\t学号    \t姓名    \t总分\t\t平均分\t\t排名\n\n";
	for(int i=0;i<101;i++,help++)
	{
		if(x.q[i]==1)
	      {
			  cout<<"\t\t\t"<<x.Id[i]<<"\t\t"<<x.Name[i]<<"\t\t "<<x.sum[i]<<"\t\t"<<x.prv[i]<<"\t\t"<<help<<"\n";
		  }
	}
}