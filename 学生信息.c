/*学生信息*/

#include< iostream >

#include< string.h >

#include< windows.h >

#include< stdio.h >

using namespace std;


class student

{

public:

         void inputStudent(student *head);      //输入学生的信息 1
         
         void outputStudent(student *head);    //输出学生的信息 1
         
         void deleteStudent(student *head);   //删除学生的信息 1
         
         void addStudent(student *head);     //添加学生的信息 1
         
         void changeStudent(student *head); //修改学生的信息 1
         
         void findStudent(student *head);  //查找学生的信息 1 
         
         void statistics(student *head); //统计学生信息 1 
         
         int       num;
         
         char    name[20];
         
         char      sex[4];
         
         float     Chinese;
         
         float     English;
         
         float     Math;
         
         float     sum;
         
         int Chinesegoal;
         
         int Mathgoal;
         
         int Englishgoal;
         
         int goal;
         
         student *next;
         
};
             
void student::inputStudent(student *head)

{

	student *p1,*p2;
  
	p1=head;
  
	int N;
  
	cout<<"请输入学生的总人数"<<endl;
  
	cin>>N;
  
	for(int i=0;i<N;i++)
  
	{
  
		p2=new student;
    
		p1->next=p2;
    
		p1=p1->next;
    
		cout<<"请输入学生的基本信息"<<endl;
    
		cout<<"学号 "<<"姓名 "<<"性别 " <<"语文 "<<"数学 "<<"英语 "<<endl; 
    
        cin>>p1->num>>p1->name>>p1->sex>>p1->Chinese>>p1->Math>>p1->English;
        
        p1->sum=p1->Chinese+p1->Math+p1->English;
        
	} 
  
	p1->next=NULL;
  
	cout<<"录入成功"<<endl;
  
}/*信息的录入*/

void student::outputStudent(student *head)//浏览学生的信息 
 {
 
     student *p1; 
     
	 p1=head->next;
   
    while(p1!=NULL) 
    
	{
  
		cout<<"姓名："<<p1->name<<endl;
    
		cout<<"学号："<<p1->num<<endl;
    
		cout<<"性别："<<p1->sex<<endl;
    
		cout<<"语文成绩："<<p1->Chinese<<endl;
    
		cout<<"数学成绩："<<p1->Math<<endl;
    
        cout<<"英语成绩："<<p1->English<<endl;
        
		cout<<"总成绩："<<p1->sum<<endl;
    
		p1=p1->next;
       } 
}/*信息的输出 差排名*/

void student::findStudent(student *head)//查找学生的信息 

{

   student *p1;
   
   p1=head->next;
   
   int p;
   
   int i=0;
   
   int stunum;
   
   char stuname[20];
   
   p1=head->next;
   
   cout<<"请选择 1.按学号查找 2. 按姓名查找"<<endl; 
   
   cin>>p;
   
   if(p==1)
   
   {
	   cout<<"请输入要查找的学号 "<<endl;
     
	   cin>>stunum;
     
	   while(p1!=NULL)
     
	   {
     
		   if(stunum==p1->num)
       
		   {
       
	    cout<<"姓名："<<p1->name<<endl;
      
		cout<<"学号："<<p1->num<<endl;
    
		cout<<"性别："<<p1->sex<<endl;
        
		cout<<"语文成绩："<<p1->Chinese<<endl;
        
		cout<<"数学成绩："<<p1->Math<<endl;
        
        cout<<"英语成绩："<<p1->English<<endl;
        
		cout<<"总成绩："<<p1->sum<<endl;
        
		break;
        
		   }
		   else p1=p1->next;
           
	   }
       
	   if(p1==NULL)
       
	   {
       
		   cout<<"请输入正确的学号"<<endl;
           
	   }
       
   }
   
  if(p==2)
  
  {
  
	   cout<<"请输入要查找的姓名 "<<endl;
       
	   cin>>stuname;
       
	   while(p1!=NULL)
       
	   {
       
		   if(strcmp(stuname, p1->name) ==0)
           
		   {
           
	    cout<<"姓名："<<p1->name<<endl;
        
		cout<<"学号："<<p1->num<<endl;
        
		cout<<"性别："<<p1->sex<<endl;
        
		cout<<"语文成绩："<<p1->Chinese<<endl;
        
		cout<<"数学成绩："<<p1->Math<<endl;
        
        cout<<"英语成绩："<<p1->English<<endl;
        
		cout<<"总成绩："<<p1->sum<<endl;
        
		break;
        
		   }
           
		   else p1=p1->next;
           
	   }
       
	   if(p1==NULL)
       
	   {
       
		   cout<<"请输入正确的姓名"<<endl;
           
	   }
       
  }
  
  else
  
  {
  
	  cout<<"输入选项错误"<<endl;
      
  }
  
}


void student::deleteStudent(student *head){

     student *p1,*p2,*p3; 
     
	 p1=head;
     
	 p2=p1->next;
     
	 int i=0;
     
	 int stunum;
     
	 cout<<"请输入被删除学生的学号"<<endl;
     
	 cin>>stunum;
     
	 while(p2!=NULL)
     
	   {
       
		   if(stunum==p2->num)
           
		   {			  
           
			   p1->next=p2->next; cout<<"删除成功"<<endl;break; 
               
		   }
           
		   else p1=p1->next,p2=p2->next;
           
	 }
     
	 if(p2==NULL)
     
	 {
     
		 cout<<"请输入正确的学号"<<endl;
         
	 }
     
 }

 void student::addStudent(student *head)     //添加学生的信息
 {
 
	 student *p1,*p2; 
     
	 p1=head->next;
     
	 while(p1->next!=NULL)
     
	 {
     
		p1=p1->next; 
        
	 } 
     
     p2=new student;
     
		p1->next=p2;
        
		p1=p1->next;
        
	cout<<"姓名："<<endl;
    
	 cin>>p1->name;
     
	 cout<<"学号："<<endl;
     
	 cin>>p1->num;
     
	 cout<<"性别："<<endl;
     
	 cin>>p1->sex;
     
	 cout<<"语文成绩："<<endl;
     
	 cin>>p1->Chinese;
     
	 cout<<"数学成绩:"<<endl;
     
	 cin>>p1->Math;
     
	 cout<<"英语成绩:"<<endl;
     
	 cin>>p1->English;
     
	 p1->sum=p1->Chinese+p1->Math+p1->English;
     
	 p1->next=NULL;
     
	 cout<<"添加成功"<<endl;
     
 }

 void student::changeStudent(student *head)//修改学生的信息 
 {
 
	 student *p1,*p2;
     
	 p1=head->next;
     
	 int i;
     
	 int stunum;
     
	 char newname[20];
     
	 char newsex[4];
     
	 int newnum;
     
	 cout<<"请输入被修改学生的学号"<<endl;
     
	 cin>>stunum;
     
	 while(p1!=NULL)
     
	 {
		 if(p1->num==stunum)/*找到*/
         
		 {
			 cout<<"请选择修改的内容"<<endl;
             
			 cout<<"1:姓名"<<endl;
             
			 cout<<"2:学号"<<endl;
             
			 cout<<"3:性别"<<endl;
             
			 cout<<"4：语文成绩"<<endl;
             
			 cout<<"5：数学成绩"<<endl;
             
			 cout<<"6：英语成绩"<<endl;
             
			 cin>>i;
             
			 switch(i)
             
			 {
             
			 case 1: 
             
				 {
                 
					 cout<<"请输入该学生的姓名："<<endl;
                     
					 cin>>newname;
                     
					 strcpy(p1->name,newname);
                     
					 break;
                     
				 }
                 
			 case 2:
             
				 {
                 
					 cout<<"请输入该学生的学号："<<endl;
                     
					 cin>>newnum;
                     
					 p1->num=newnum;
                     
					 break;
                     
				 }
                 
			 case 3:
             
				 {
					 cout<<"请输入该学生的性别："<<endl;
                     
					 cin>>newsex;
                     
					 strcpy(p1->sex,newsex);
                     
					 break;
                     
				 }
                 
			 case 4:
             
				 {
					 cout<<"请输入该学生的语文成绩："<<endl;
                     
					 cin>>newnum;
                     
					 p1->Chinese=newnum;
                     
					 break;
                     
				 }
                 
			 case 5:
             
				 {
                 
					 cout<<"请输入该学生的数学成绩："<<endl;
                     
					 cin>>newnum;
                     
					 p1->Math=newnum;
                     
					 break;
                     
				 }
                 
			 case 6:
             
				 {
                 
					 cout<<"请输入该学生的英语成绩："<<endl;
                     
					 cin>>newnum;
                     
					 p1->English=newnum;
                     
					 break;
                     
				 }
                 
			 }
             
		break; }
        
		 else p1=p1->next;
         
		if (p1->next=NULL) {
        
			 cout<<"请输入正确的学号"<<endl;break; 
             
		 }
         
	 }
     
 }
 
 

//按照语文排序

void sortByChinese(student *head) 

{

    student *p = head->next;
    
    while(p->next != NULL)
    
    {
    
        student *q = p->next;
        
        while(q != NULL)
        
        {
        
            if(p->Chinese > q->Chinese)
            
            {	float temp;	
            
            	int temp1;	
                
			    char    temp2[20];
                
               char      temp3[4];	
               
            temp=p->Math;
            
			   p->Math=q->Math;
               
			   q->Math=temp;		
               
               temp=p->Chinese;
               
			   p->Chinese=q->Chinese;
               
			   q->Chinese=temp;		
               
 strcpy(temp2, p->name);
 
 strcpy(p->name, q->name);
 
 strcpy(q->name, temp2);
 
               temp1=p->num;
               
			   p->num=q->num;
               
			   q->num=temp1;	
               
 strcpy(temp3, p->sex);
 
 strcpy(p->sex, q->sex);
 
 strcpy(q->sex, temp3);	
 
               temp=p->sum;
               
			   p->sum=q->sum;
               
			   q->sum=temp;	
               
               temp=p->English;
               
			   p->English=q->English;
               
			   q->English=temp;


            }
            
            q = q->next;
            
        }
        
        p = p->next;
        
    }

}

//按照数学排序

void sortByMath(student *head)

{
    student *p = head->next;
    
    
    while(p->next != NULL)
    {
    
        student *q = p->next;
        
        while(q != NULL)
        
        {
        
            if(p->Math > q->Math)
            
            {	float temp;	
            
            	int temp1;	
                
			    char    temp2[20];
                
               char      temp3[4];	
               
            temp=p->Math;
            
			   p->Math=q->Math;
               
			   q->Math=temp;		
               
               temp=p->Chinese;
               
			   p->Chinese=q->Chinese;
               
			   q->Chinese=temp;		
               
 strcpy(temp2, p->name);
 
 strcpy(p->name, q->name);
 
 strcpy(q->name, temp2);
 
               temp1=p->num;
               
			   p->num=q->num;
               
			   q->num=temp1;	
               
 strcpy(temp3, p->sex);
 
 strcpy(p->sex, q->sex);
 
 strcpy(q->sex, temp3);	
 
               temp=p->sum;
               
			   p->sum=q->sum;
               
			   q->sum=temp;	
               
               temp=p->English;
               
			   p->English=q->English;
               
			   q->English=temp;


            }
            
            q = q->next;
            
        }
        
        p = p->next;
        
    }
    
}

//按照英语排序

void sortByEnglish(student *head)

{

    student *p = head->next;
    
    while(p->next != NULL)
    
    {
    
        student *q = p->next;
        
        while(q != NULL)
        
        {
        
            if(p->English > q->English)
            
            {
            
			 	float temp;	
                
            	int temp1;	
                
			    char    temp2[20];
                
               char      temp3[4];	
               
            temp=p->Math;
            
			   p->Math=q->Math;
               
			   q->Math=temp;		
               
               temp=p->Chinese;
               
			   p->Chinese=q->Chinese;
               
			   q->Chinese=temp;		
               
 strcpy(temp2, p->name);
 
 strcpy(p->name, q->name);
 
 strcpy(q->name, temp2);
 
               temp1=p->num;
               
			   p->num=q->num;
               
			   q->num=temp1;	
               
 strcpy(temp3, p->sex);
 
 strcpy(p->sex, q->sex);
 
 strcpy(q->sex, temp3);	
 
               temp=p->sum;
               
			   p->sum=q->sum;
               
			   q->sum=temp;	
               
               temp=p->English;
               
			   p->English=q->English;
               
			   q->English=temp;


            }
            
            q = q->next;
            
        }
        
        p = p->next;
        
    }
    
}

//按照总成绩排序

void sortByTotal(student *head)

{

    student *p = head->next;
    
    while(p->next != NULL)
    
    {
    
    
        student *q = p->next;
        
        while(q != NULL)
        
        {
        
            if(p->sum > q->sum)
            
            {
            
              	float temp;	
                
            	int temp1;	
                
			    char    temp2[20];
                
               char      temp3[4];	
               
            temp=p->Math;
            
			   p->Math=q->Math;
               
			   q->Math=temp;		
               
               temp=p->Chinese;
               
			   p->Chinese=q->Chinese;
               
			   q->Chinese=temp;		
               
 strcpy(temp2, p->name);
 
 strcpy(p->name, q->name);
 
 strcpy(q->name, temp2);
 
               temp1=p->num;
               
			   p->num=q->num;
               
			   q->num=temp1;	
               
 strcpy(temp3, p->sex);
 
 strcpy(p->sex, q->sex);
 
 strcpy(q->sex, temp3);	
 
               temp=p->sum;
               
			   p->sum=q->sum;
               
			   q->sum=temp;	
               
               temp=p->English;
               
			   p->English=q->English;
               
			   q->English=temp;


            }
            q = q->next;
            
        }
        
        p = p->next;
        
    }
    
}

void Sort(student *head)

 {
 
   {
   
    int i = 0;
    
    cout<<"请输入排序的条件，有如下选项..."<<endl;
    
    cout<<"按照语文排序（请输入【1】） 按照数学排序（请输入【2】） 按照英语排序（请输入【3】）按照总成绩排序（请输入【4】）"<<endl;
    
    cin>>i;
    
    switch(i)
    
    {
    
        case 1: sortByChinese(head);break;
        
        
        case 2: sortByMath(head);break;
        
		case 3: sortByEnglish(head);break;
        
		case 4: sortByTotal(head); break;
        
        default: cout<<"输入有误..."<<endl;
        
    }
    
  }
  
}

int statisticschinese(student *p)

{
	student *p1;
    
	p1=p;


	if(p->Chinese>=90)
    
	{
    
		p->Chinesegoal=1;
        
	}
    
	if(p->Chinese>=80&&p->Chinese<90)
    
	{
    
		p->Chinesegoal=2;
	}
    
	if(p->Chinese>=70&&p->Chinese<80)
	{
		p->Chinesegoal=3;
	}
	if(p->Chinese>=60&&p->Chinese<70)
	{
		p->Chinesegoal=4;
	}
	if(p->Chinese<60)
	{
		p->Chinesegoal=5;
	}
	return p->Chinesegoal;
}
int statisticsmath(student *p)
{
	student *p1;
	p1=p;
	if(p->Math>=90)
	{
		p->Mathgoal=1;
	}
	if(p->Math>=80&&p->Math<90)
	{
		p->Mathgoal=2;
	}
	if(p->Math>=70&&p->Math<80)
	{
		p->Mathgoal=3;
	}
	if(p->Math>=60&&p->Math<70)
	{
		p->Mathgoal=4;
	}
	if(p->Math<60)
	{
		p->Mathgoal=5;
	}
	return p->Mathgoal;
}
int statisticsenglish(student *p)
{
	student *p1;
	p1=p;
	if(p->English>=90)
	{
		p->Englishgoal=1;
	}
	if(p->English>=80&&p->English<90)
	{
		p->Englishgoal=2;
	}
	if(p->English>=70&&p->English<80)
	{
		p->Englishgoal=3;
	}
	if(p->English>=60&&p->English<70)
	{
		p->Englishgoal=4;
	}
	if(p->English<60)
	{
		p->Englishgoal=5;
	}
	return p->Englishgoal;
}
int statisticssum(student *p)
{
	student *p1;
	p1=p;
	if(p1->sum>=270)
	{
		p1->goal=1;
	}
	if(p1->sum>=240&&p1->sum<270)
	{
		p1->goal=2;
	}
	if(p1->sum>=210&&p1->sum<240)
	{
		p1->goal=3;
	}
	if(p1->sum>=180&&p1->sum<210)
	{
		p1->goal=4;
	}
	if(p1->sum<180)
	{
		p1->goal=5;
	}
	return p1->goal;
}
void statistics(student *head)
{
	student *p1,*p2;
	p1=head->next;
	p2=head->next;
	int n=0,i;
	while(p1!=NULL)
	{
		p1=p1->next;
		n++;
	}
	int ma,mb,mc,md,mf,ca,cb,cc,cd,cf,ea,eb,ec,ed,ef,sa,sb,sc,sd,sf;
     ma=mb=mc=md=mf=ca=cb=cc=cd=cf=ea=eb=ec=ed=ef=sa=sb=sc=sd=sf=0;
	while(p2!=NULL)
	{
		if(statisticschinese(p2)==1) 
		{
			ca++;
		}
		if(statisticschinese(p2)==2)
		{
			cb++;
		}
		if(statisticschinese(p2)==3)
		{
			cc++;
		}
		if(statisticschinese(p2)==4)
		{
			cd++;
		}
		if(statisticschinese(p2)==5)
		{
			cf++;
		 } 
		if(statisticsmath(p2)==1)
		{
			ma++;
		}
		if(statisticsmath(p2)==2)
		{
			mb++;
		}
		if(statisticsmath(p2)==3)
		{
			mc++;
		}
		if(statisticsmath(p2)==4)
		{
			md++;
		}
		if(statisticsmath(p2)==5)
		{
			mf++;
		}
		if(statisticsenglish(p2)==1)
		{
			ea++;
		}
		if(statisticsenglish(p2)==2)
		{
			eb++;
		}
		if(statisticsenglish(p2)==3)
		{
			ec++;
		}
		if(statisticsenglish(p2)==4)
		{
			ed++;
		}
			if(statisticsenglish(p2)==5)
		{
			ef++;
		}
			if(statisticssum(p2)==1)
		{
			sa++;
		}
		    if(statisticssum(p2)==2)
		{
			sb++;
		}
		    if(statisticssum(p2)==3)
		{
			sc++;
		}
		    if(statisticssum(p2)==4)
		{
			sd++;
		}
		    if(statisticssum(p2)==5)
		{
			sf++;
		}
		p2=p2->next;
	}
	cout<<"语文成绩中得A的同学有:"<<ca<<"位"<<endl; 
	cout<<"语文成绩中得B的同学有:"<<cb<<"位"<<endl;
	cout<<"语文成绩中得C的同学有:"<<cc<<"位"<<endl;
	cout<<"语文成绩中得D的同学有:"<<cd<<"位"<<endl;
	cout<<"语文成绩中得F的同学有:"<<cf<<"位"<<endl;
	cout<<"数学成绩中得A的同学有:"<<ma<<"位"<<endl; 
	cout<<"数学成绩中得B的同学有:"<<mb<<"位"<<endl;
	cout<<"数学成绩中得C的同学有:"<<mc<<"位"<<endl;
	cout<<"数学成绩中得D的同学有:"<<md<<"位"<<endl;
	cout<<"数学成绩中得F的同学有:"<<mf<<"位"<<endl;
	cout<<"英语成绩中得A的同学有:"<<ea<<"位"<<endl; 
	cout<<"英语成绩中得B的同学有:"<<eb<<"位"<<endl;
	cout<<"英语成绩中得C的同学有:"<<ec<<"位"<<endl;
	cout<<"英语成绩中得D的同学有:"<<ed<<"位"<<endl;
	cout<<"英语成绩中得F的同学有:"<<ef<<"位"<<endl;
	cout<<"总成绩中得A的同学有:"<<sa<<"位"<<endl; 
	cout<<"总成绩中得B的同学有:"<<sb<<"位"<<endl;
	cout<<"总成绩中得C的同学有:"<<sc<<"位"<<endl;
	cout<<"总成绩中得D的同学有:"<<sd<<"位"<<endl;
	cout<<"总成绩中得F的同学有:"<<sf<<"位"<<endl;
}

void welcome()
 {
	  cout<<"       ~~~    欢迎进入**学生成绩管理系统!   ~~~"<<endl;
}
void menu()
{
 cout<<"      ******************************************"<<endl;
 cout<<"      ~~~~~~~   学生成绩管理系统  ~~~~~~~"<<endl;
 cout<<"      ******************************************"<<endl;
 cout<<"      ******************************************"<<endl;
 cout<<"      ******************************************"<<endl;
 cout<<"              ~~请选择你要进行的操作**" <<endl;        
 cout<<"              ~~1.    输入学生的信息          ~~"<<endl;
 cout<<"              ~~2.    浏览学生的信息          ~~"<<endl;
 cout<<"              ~~3.    删除学生的信息   　     ~~"<<endl;
 cout<<"              ~~4.    添加学生的信息          ~~"<<endl;
 cout<<"              ~~5.    修改学生的信息          ~~"<<endl;
 cout<<"              ~~6.    查找学生的信息          ~~"<<endl;
 cout<<"              ~~7.    排序学生的成绩          ~~"<<endl;
 cout<<"              ~~8.    统计学生的成绩          ~~"<<endl;
 cout<<"              ~~0.    退出学生信息系统        ~~"<<endl; 
 cout<<"       *****************************************"<<endl;
 cout<<"       *****************************************"<<endl;
 cout<<"       *****************************************"<<endl;
 system("color b");
} 

int main()
{
	student h;
	welcome();
     int i;
      student *head=new student;
    
      
     for(;;)
     {
         system("cls");
         menu();
         cout<<"请输入你要进行的操作 ："<<endl;
		 cin>>i; 
         switch(i)
         {
             case 1:  cout<<"输入学生的信息 "<<endl;h.inputStudent(head);system("pause");break;
             case 2:  cout<<"浏览学生的信息 "<<endl;h.outputStudent(head);system("pause");break;
             case 3:  cout<<"删除学生的信息 "<<endl;h.deleteStudent(head);system("pause");break;
             case 4:  cout<<"添加学生的信息 "<<endl;h.addStudent(head);system("pause");break;
             case 5:  cout<<"修改学生的信息 "<<endl;h.changeStudent(head);system("pause");break;
             case 6:  cout<<"查询学生的信息 "<<endl;h.findStudent(head);system("pause");break;
             case 7:  cout<<"学生成绩的排序 "<<endl;Sort(head);h.outputStudent(head);system("pause");break;
             case 8:  cout<<"查询学生的信息 "<<endl;statistics(head);system("pause");break;
             case 0:  cout<<"谢谢使用，欢迎下次光临 "<<endl;exit(0);
             default: cout<<"输入错误"<<endl; 
         }
     }
     return 0;}
