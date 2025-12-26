#include<iostream.h>
#include<conio.h>
#include<stdio.h>

class basicinfo
{
	int age,empid;
   char name[20],gender;
	public:
	void getbasicinfo()
   {
   	cout<<"\nEnter age,emp id,gender and name ";
      cin>>age>>empid>>gender;
      cin.getline(name,20);
   }
   void printbasicinfo()
   {
   	cout<<"\nAge:"<<age<<"\nEmp id: "<<empid<<"\nGender: "<<gender;
      cout<<"\nName: "<<name;
   }
};

class deptinfo
{
	int depno,time;
   char deptname[20];
   public:
   void getdeptinfo()
   {
   	cout<<"\nEnter department No.,time of work and department name ";
      cin>>depno>>time;
      cin.getline(deptname,20);
   }
   void printdeptinfo()
   {
   	cout<<"\nDepartment no.: "<<depno<<"\nTime of work: "<<time;
      cout<<"\nDepartment Name: "<<deptname;
    }
};

class employee:public deptinfo,public basicinfo
{
	public:
   void empinfo(){
   cout<<"\nEnter basic info: ";
   getbasicinfo();
   cout<<"\nEnter department info ";
   getdeptinfo();
   }

   void pempinfo()
   {
      cout<<"\nBasic info is ";
      printbasicinfo();

      cout<<"\nDepartment info is ";
      printdeptinfo();
   }
};

void main()
{
	employee e;
   e.empinfo();
   e.pempinfo();
getch();
}
